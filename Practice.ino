/*void sideR()
{
  // Leg Forward
  moveLeg(pwm1, 2, 375, 340, 327);    //1     //p=2, z=6       // Expand motion  345, 370  p = 4
  moveLeg(pwm1, 0, 340, 340, 327);    //2     //p=2, z=6
  moveLeg(pwm1, 1, 410, 340, 327);    //3     //p=2, z=6
  
  for (int i = 0; i <= 100; i += 5) {
    moveLegT(pwm2, 2, 375, mapValue(i, 0, 100, 407, 480), mapValue(i, 0, 100, 420, 467));   //375, 407, 420
    moveLegT(pwm2, 0, 410, mapValue(i, 0, 100, 407, 480), mapValue(i, 0, 100, 420, 467));   //375, 402, 377           // Condense motion
    moveLegT(pwm2, 1, 340, mapValue(i, 0, 100, 407, 480), mapValue(i, 0, 100, 420, 467));   //395, 402, 397
    delay(5);
  }
  moveLegT(pwm2, 2, 375, 480, 467);     //1   //p=2, z=4  462, 420)  /p=4, z=4.8
  moveLegT(pwm2, 0, 410, 480, 467);     //2   //p=2, z=4
  moveLegT(pwm2, 1, 340, 480, 467);     //3   //p=2, z=4
  for (int i = 0; i <= 100; i += 5) {
    moveLeg(pwm1, 2, 375, mapValue(i, 0, 100, 340, 345), mapValue(i, 0, 100, 327, 370));    //375, 295, 367
    moveLeg(pwm1, 0, mapValue(i, 0, 100, 340, 410), 340, 327);                   //395, 302, 397                      // Condense motion
    moveLeg(pwm1, 1, mapValue((100-i), 0, 100, 340, 410), 340, 327);           //395, 302, 397

    moveLegT(pwm2, 2, 375, mapValue((100 - i), 0, 100, 462, 480), mapValue((100 - i), 0, 100, 420, 467));   //375,510, 410  //p=6, z=3
    moveLegT(pwm2, 0, mapValue((100 - i), 0, 100, 340, 410), 480, 467);   //410, 495, 377       //p=7.25, z=3
    moveLegT(pwm2, 1, mapValue(i, 0, 100, 340, 410), 480, 467);   //410, 495, 377       //p=7.25, z=3
    delay(10);
  }
  delay(100);

  //LegT Forward-------------------------------------------

  for (int i = 0; i <= 100; i += 5) {
    moveLegT(pwm2, 2, 375, mapValue((100 - i), 0, 100, 402, 462), mapValue((100 - i), 0, 100, 377, 420));   //375, 407, 420 //p=2, z=6
    moveLegT(pwm2, 0, 340, mapValue((100 - i), 0, 100, 407, 480), mapValue((100 - i), 0, 100, 420, 467));   //375, 407, 420        //p=6, z=3   // Condense motion
    moveLegT(pwm2, 1, 410, mapValue((100 - i), 0, 100, 407, 480), mapValue((100 - i), 0, 100, 420, 467));   //355, 407, 420   ////p=7.25, z=3.7
    delay(5);
  }
  moveLegT(pwm2, 2, 375, 402, 377);     //2   //p=2, z=6    402, 377);     //1   //p=4, z=6.8
  moveLegT(pwm2, 0, 340, 407, 420);     //2   //p=2, z=6                    // condense motion
  moveLegT(pwm2, 1, 410, 407, 420);     //2   //p=2, z=6

  for (int i = 0; i <= 100; i += 5) {
    moveLeg(pwm1, 2, 375, mapValue((100 - i), 0, 100, 285, 345), mapValue((100 - i), 0, 100, 327, 370));     //375, 340, 327     // Condense motion
    moveLeg(pwm1, 0, 410, mapValue((100 - i), 0, 100, 267, 340), mapValue((100 - i), 0, 100, 280, 327));    //375, 345, 370                     // Expand motion
    moveLeg(pwm1, 1, 340, mapValue((100 - i), 0, 100, 267, 340), mapValue((100 - i), 0, 100, 280, 327));    //395, 355, 350
    delay(5);
  }
  moveLeg(pwm1, 2, 375, 285, 327);    //1     //p=4, z=4.8   267, 280
  moveLeg(pwm1, 0, 410, 267, 280);    //1     //p=2, z=4                                // Expand motion
  moveLeg(pwm1, 1, 340, 267, 280);    //1     //p=2, z=4


  for (int i = 0; i <= 100; i += 5) {
    moveLegT(pwm2, 2, 375, mapValue(i, 0, 100, 402, 407), mapValue(i, 0, 100, 377, 420));    //375, 432, 320
    moveLegT(pwm2, 0, mapValue(i, 0, 100, 340, 410), 407, 420);     //395, 445, 350                 // Expand motion
    moveLegT(pwm2, 1, mapValue((100 - i), 0, 100, 340, 410), 407, 420);     //395, 445, 350

    moveLeg(pwm1, 2, 375, mapValue((100 - i), 0, 100, 267, 285), mapValue((100 - i), 0, 100, 280, 327));     //375, 285, 327);    //1     //p=4, z=4.8
    moveLeg(pwm1, 0, mapValue((100 - i), 0, 100, 340, 410), 267, 280);    //375,  252, 370                         // Condense motion
    moveLeg(pwm1, 1, mapValue(i, 0, 100, 340, 410), 267, 280);    //355, 252, 370
    delay(10);
  }
  for (int i = 0; i <= 100; i += 5) {
    moveLeg(pwm1, 2, 375, mapValue(i, 0, 100, 267, 340), mapValue(i, 0, 100, 280, 327));     //375, 307, 340     // Condense motion
    moveLeg(pwm1, 0, 340, mapValue(i, 0, 100, 267, 340), mapValue(i, 0, 100, 280, 327));    //375, 297, 297                     // Expand motion
    moveLeg(pwm1, 1, 410, mapValue(i, 0, 100, 267, 340), mapValue(i, 0, 100, 280, 327));    //395, 305, 320
    delay(5);
  }
  delay(100);
}*/