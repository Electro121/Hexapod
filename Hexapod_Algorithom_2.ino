#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
//Analog 4 -> SDA   komola
//Analog 5 -> SCL   holud

#define SERVOMIN 150  // Min pulse length out of 4096
#define SERVOMAX 600  // Max pulse length out of 4096

const int ch1Pin = 2; // Channel 1 signal connected to Digital Pin 2
const int ch2Pin = 3; // Channel 2 signal connected to Digital Pin 3
const int ch3Pin = 4; // Channel 2 signal connected to Digital Pin 3

Adafruit_PWMServoDriver pwm1 = Adafruit_PWMServoDriver();
Adafruit_PWMServoDriver pwm2 = Adafruit_PWMServoDriver(0x41);  // Assuming the second PCA9685 has address 0x41

// Define channels for the first PCA9685
const int coxaChannels[] = { 0, 3, 6 };
const int femurChannels[] = { 1, 4, 7 };
const int tibiaChannels[] = { 2, 5, 8 };

// Define channels for the second PCA9685
const int coxaChannelsT[] = { 0, 3, 6 };
const int femurChannelsT[] = { 1, 4, 7 };
const int tibiaChannelsT[] = { 2, 5, 8 };

int mapValue(int x, int in_min, int in_max, int out_min, int out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void moveLeg(Adafruit_PWMServoDriver &pwm, int legIndex, int coxaPos, int femurPos, int tibiaPos) {
  pwm.setPWM(coxaChannels[legIndex], 0, coxaPos);
  pwm.setPWM(femurChannels[legIndex], 0, femurPos);
  pwm.setPWM(tibiaChannels[legIndex], 0, tibiaPos);
}

void moveLegT(Adafruit_PWMServoDriver &pwm, int legIndex, int coxaPos, int femurPos, int tibiaPos) {
  pwm.setPWM(coxaChannelsT[legIndex], 0, coxaPos);
  pwm.setPWM(femurChannelsT[legIndex], 0, femurPos);
  pwm.setPWM(tibiaChannelsT[legIndex], 0, tibiaPos);
}

void moveLegInit() {
  for (int i = 0; i < 3; i++) {
    moveLeg(pwm1, i, 375, 375, 375);    //150, 600
  }
}

void moveLegTInit() {
  for (int i = 0; i < 3; i++) {
    moveLegT(pwm2, i, 375, 375, 375);   //600, 150
  }
}

// Declare functions
void rotateLTR();
void rotateRTL();
void MoveForward();
void MoveBackward();

unsigned long startTime;

void setup() {
  Serial.begin(9600);

  pwm1.begin();
  pwm2.begin();

  pwm1.setPWMFreq(60);
  pwm2.setPWMFreq(60);


  pinMode(ch1Pin, INPUT);
  pinMode(ch2Pin, INPUT);
  pinMode(ch3Pin, INPUT);

  moveLegInit();
  moveLegTInit();
  delay(5000);
  //startTime = millis();  // Initialize start time
}

void loop() {
  unsigned long duration1 = pulseIn(ch1Pin, HIGH);     //up-down  //ch3
  unsigned long duration2 = pulseIn(ch2Pin, HIGH);     //side     //ch1
  unsigned long duration3 = pulseIn(ch3Pin, HIGH);     //rotate   //ch4

  // Print the durations to the serial monitor (for debugging)
  //Serial.print("Ch1: "); Serial.print(duration1); Serial.print("\t");
  //Serial.print("Ch2: "); Serial.println(duration2); Serial.print("\t");
  //Serial.print("Ch3: "); Serial.println(duration3);

  // Determine the direction based on pulse width
  if (duration1 > 1900) {   //pin2 controls up down
    Serial.println("UP");
    MoveForward();
  } else if (duration1 < 1000 && duration1 != 0) {
    Serial.println("DOWN");
    MoveBackward();
  }

  else if (duration2 > 1600) {
    Serial.println("Side RIGHT");
    sideRight();
  } else if (duration2 < 1400 && duration1 != 0) {
    Serial.println("Side LEFT");
    sideLeft();
  }

  else if (duration3 > 1600) {
    Serial.println("RIGHT");
    rotateLTR();
  } 
  else if (duration3 < 1400 && duration1 != 0) {
    Serial.println("LEFT");
    rotateRTL();
  }

  else {
    Serial.println("No signal");
    moveLegInit();
    moveLegTInit();
  }
    
  
  // Delay for a short period before the next loop
  delay(100);
}