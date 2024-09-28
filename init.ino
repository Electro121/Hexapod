/*void init() {
  moveLeg(pwm1, 0, 375, 307, 340);    //1     //p=4, z=5.5       // Expand motion
  moveLeg(pwm1, 1, 375, 307, 340);    //2     //p=4, z=5.5
  moveLeg(pwm1, 2, 375, 305, 320);    //3     //p=3, z=5.2
  delay(100);
  moveLegT(pwm2, 0, 375, 440, 407);     //1   //p=4, z=5.5
  moveLegT(pwm2, 1, 375, 440, 407);     //2   //p=4, z=5.5
  moveLegT(pwm2, 2, 375, 442, 427);     //3   //p=3, z=5.2
  

  moveLeg(pwm1, 0, 375, 297, 297);    //1     //p=2, z=4.7       // condence motion
  moveLeg(pwm1, 1, 375, 297, 297);    //2     //p=2, z=4.7
  moveLeg(pwm1, 2, 375, 305, 320);    //3     //p=3, z=5.2
  delay(100);
  moveLegT(pwm2, 0, 375, 450, 450);     //1   //p=2, z=4.7
  moveLegT(pwm2, 1, 375, 450, 450);     //2   //p=2, z=4.7
  moveLegT(pwm2, 2, 375, 442, 427);     //3   //p=3, z=5.2
}




/*unsigned long currentTime = millis();
  unsigned long elapsedTime = currentTime - startTime;

  if (elapsedTime <= 10000) {
    // Run MoveForward for the first 10 seconds
    MoveForward();
  } else if (elapsedTime <= 20000) {
    // Run rotate for the next 10 seconds
    //rotate();
    MoveBackward();
  } else if (elapsedTime <= 21000) {
    // Run side for the last 10 seconds
    //side();
  } else {
    // Reset startTime to start the loop again
    startTime = millis();
  }*/
  //MoveBackward();
  //MoveForward();
  //Forward();
  //sideR();