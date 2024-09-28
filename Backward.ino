/*void MoveBackward()
{
  // Leg Forward
  moveLeg(pwm1, 1, 375, 345, 370);    //1     //p=4, z=6.8       // Expand motion
  moveLeg(pwm1, 0, 375, 340, 327);    //2     //p=2, z=6
  moveLeg(pwm1, 2, 350, 355, 350);    //3     //p=3, z=6.5
  delay(100);


  for (int i = 0; i <= 100; i += 5) {
    moveLegT(pwm2, 1, 375, mapValue((100 - i), 0, 100, 407, 450), mapValue((100 - i), 0, 100, 450, 420));   //375, 407, 420
    moveLegT(pwm2, 0, 375, mapValue(i, 0, 100, 402, 440), mapValue(i, 0, 100, 377, 407));   //375, 402, 377           // Condense motion
    moveLegT(pwm2, 2, 350, mapValue(i, 0, 100, 402, 442), mapValue(i, 0, 100, 397, 427));   //395, 402, 397
    delay(5);
  }


  moveLegT(pwm2, 1, 375, 450, 450);     //1   //p=2, z=4.7          //Condence
  moveLegT(pwm2, 0, 375, 440, 407);     //1   //p=4, z=5.5
  moveLegT(pwm2, 2, 350, 442, 427);     //3   //p=3, z=5.2
  delay(100);
 


  // Condense motion
  for (int i = 0; i <= 100; i += 5) {
    moveLeg(pwm1, 1, 375, mapValue((100 - i), 0, 100, 340, 345), mapValue((100 - i), 0, 100, 327, 370));     //375, 295, 367     // Condense motion
    moveLeg(pwm1, 0, 375, mapValue(i, 0, 100, 340, 345), mapValue(i, 0, 100, 327, 370));    //375, 315, 427                     // Expand motion
    moveLeg(pwm1, 2, mapValue(i, 0, 100, 350, 400), 355, 350);    //395, 302, 397


    moveLegT(pwm2, 1, 375, mapValue((100 - i), 0, 100, 440, 450), mapValue((100 - i), 0, 100, 407, 450));   //375, 477, 345  //p=8.5, z=3
    moveLegT(pwm2, 0, 375, mapValue(i, 0, 100, 440, 450), mapValue(i, 0, 100, 407, 450));   //375, 510, 410        //p=6, z=3   // Condense motion
    moveLegT(pwm2, 2, mapValue(i, 0, 100, 350, 400), 442, 427);   //355, 495, 377   ////p=7.25, z=3.7
    delay(10);
  }
  delay(100);




//LegT Forward-------------------------------------------
  for (int i = 0; i <= 100; i += 5) {
    moveLegT(pwm2, 1, 375, mapValue((100 - i), 0, 100, 402, 440), mapValue((100 - i), 0, 100, 377, 407));   //375, 440, 407  //p=8.5, z=3
    moveLegT(pwm2, 0, 375, mapValue((100 - i), 0, 100, 407, 450), mapValue((100 - i), 0, 100, 420, 450));   //375, 450, 450        //p=6, z=3   // Condense motion
    moveLegT(pwm2, 2, 400, mapValue((100 - i), 0, 100, 402, 442), mapValue((100 - i), 0, 100, 397, 427));   //355, 442, 427   ////p=7.25, z=3.7
    delay(5);
  }
  delay(100);


  moveLegT(pwm2, 1, 375, 402, 377);     //1   //p=4, z=6.8
  moveLegT(pwm2, 0, 375, 407, 420);     //2   //p=2, z=6                  // Expand motion
  moveLegT(pwm2, 2, 400, 402, 397);     //3   //p=3, z=6.5
  delay(100);


  for (int i = 0; i <= 100; i += 5) {
    moveLeg(pwm1, 1, 375, mapValue((100 - i), 0, 100, 297, 340), mapValue((100 - i), 0, 100, 297, 327));     //375, 340, 327     // Condense motion
    moveLeg(pwm1, 0, 375, mapValue((100 - i), 0, 100, 307, 345), mapValue((100 - i), 0, 100, 340, 370));    //375, 345, 370                     // Expand motion
    moveLeg(pwm1, 2, 400, mapValue((100 - i), 0, 100, 305, 355), mapValue((100 - i), 0, 100, 320, 350));    //395, 355, 350
    delay(5);
  }
  moveLeg(pwm1, 1, 375, 297, 297);    //1     //p=2, z=4.7
  moveLeg(pwm1, 0, 375, 307, 340);    //1     //p=4, z=5.5                                // Expand motion
  moveLeg(pwm1, 2, 400, 305, 320);    //3     //p=3, z=5.2
  delay(100);




  // condance motion
  for (int i = 0; i <= 100; i += 5) {
    moveLegT(pwm2, 1, 375, mapValue(i, 0, 100, 402, 407), mapValue(i, 0, 100, 377, 420));   //375, 452, 380
    moveLegT(pwm2, 0, 375, mapValue((100 - i), 0, 100, 402, 407), mapValue((100 - i), 0, 100, 377, 420));   //375, 432, 320           // Condense motion
    moveLegT(pwm2, 2, mapValue((100 - i), 0, 100, 350, 400), 402, 397);   //395, 445, 350


    moveLeg(pwm1, 1, 375, mapValue(i, 0, 100, 297, 307), mapValue(i, 0, 100, 297, 340));     //375, 270, 402
    moveLeg(pwm1, 0, 375, mapValue((100 - i), 0, 100, 297, 307), mapValue((100 - i), 0, 100, 297, 340));    //375, 237, 337           // Condense motion
    moveLeg(pwm1, 2, mapValue((100 - i), 0, 100, 350, 400), 305, 320);    //355, 270, 377
    delay(10);
  }
  delay(100);
  //H
  for (int i = 0; i <= 100; i += 5) {
    moveLeg(pwm1, 1, 375, mapValue(i, 0, 100, 307, 345), mapValue(i, 0, 100, 340, 370));     //375, 307, 340     // Condense motion
    moveLeg(pwm1, 0, 375, mapValue(i, 0, 100, 297, 340), mapValue(i, 0, 100, 297, 327));    //375, 297, 297                     // Expand motion
    moveLeg(pwm1, 2, 350, mapValue(i, 0, 100, 305, 355), mapValue(i, 0, 100, 320, 350));    //395, 305, 320
    delay(5);
  }
  delay(100);
  /*moveLeg(pwm1, 0, 375, 345, 370);    //1     //p=4, z=6.8       // Expand motion
  moveLeg(pwm1, 1, 375, 340, 327);    //2     //p=2, z=6
  moveLeg(pwm1, 2, 350, 355, 350);    //3     //p=3, z=6.5
 } */
