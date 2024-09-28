void rotateRTL()
{
  moveLeg(pwm1, 0, 400, 340, 327);    //1     //p=2, z=6       // Expand motion
  moveLeg(pwm1, 1, 400, 340, 327);    //2     //p=2, z=6
  moveLeg(pwm1, 2, 400, 340, 327);    //2     //p=2, z=6
  delay(100);
  for (int i = 0; i <= 100; i += 5) {
    moveLegT(pwm2, 0, 350, mapValue(i, 0, 100, 407, 450), mapValue(i, 0, 100, 420, 450));   //375, 407, 420 //p=2, z=6
    moveLegT(pwm2, 1, 350, mapValue(i, 0, 100, 407, 450), mapValue(i, 0, 100, 420, 450));   //375, 407, 420        //p=6, z=3   // Condense motion
    moveLegT(pwm2, 2, 350, mapValue(i, 0, 100, 407, 450), mapValue(i, 0, 100, 420, 450));   //355, 407, 420   ////p=7.25, z=3.7
    delay(5);
  }
  moveLegT(pwm2, 0, 350, 450, 450);     //1   //p=2, z=4.7 
  moveLegT(pwm2, 1, 350, 450, 450);     //2   //p=2, z=4.7 
  moveLegT(pwm2, 2, 350, 450, 450);     //1   //p=2, z=4.7
  delay(100);

  for (int i = 0; i <= 100; i += 5) {
    moveLeg(pwm1, 0, mapValue(i, 0, 100, 400, 350), 340, 327);     //375, 307, 340     // Condense motion
    moveLeg(pwm1, 1, mapValue(i, 0, 100, 400, 350), 340, 327);    //375, 297, 297                     // Expand motion
    moveLeg(pwm1, 2, mapValue(i, 0, 100, 400, 350), 340, 327);    //395, 305, 320

    moveLegT(pwm2, 0, mapValue((100 - i), 0, 100, 400, 350), 450, 450);   //375, 450, 450 //p=2, z=6
    moveLegT(pwm2, 1, mapValue((100 - i), 0, 100, 400, 350), 450, 450);             // Condense motion
    moveLegT(pwm2, 2, mapValue((100 - i), 0, 100, 400, 350), 450, 450);   
    delay(5);
  }
  
  delay(100);
  for (int i = 0; i <= 100; i += 5) {
    moveLegT(pwm2, 0, 400, mapValue((100 - i), 0, 100, 407, 450), mapValue((100 - i), 0, 100, 420, 450));   //375, 407, 420 //p=2, z=6
    moveLegT(pwm2, 1, 400, mapValue((100 - i), 0, 100, 407, 450), mapValue((100 - i), 0, 100, 420, 450));   //375, 407, 420        //p=6, z=3   // Condense motion
    moveLegT(pwm2, 2, 400, mapValue((100 - i), 0, 100, 407, 450), mapValue((100 - i), 0, 100, 420, 450));   //355, 407, 420   ////p=7.25, z=3.7
    delay(5);
  }
  for (int i = 0; i <= 100; i += 5) {
    moveLeg(pwm1, 0, 350, mapValue((100 - i), 0, 100, 297, 340), mapValue((100 - i), 0, 100, 297, 327));    //297, 297    //1     //p=2, z=4.7   // Condense motion
    moveLeg(pwm1, 1, 350, mapValue((100 - i), 0, 100, 297, 340), mapValue((100 - i), 0, 100, 297, 327));    //375, 345, 370                     // Expand motion
    moveLeg(pwm1, 2, 350, mapValue((100 - i), 0, 100, 297, 340), mapValue((100 - i), 0, 100, 297, 327));    //395, 355, 350
    delay(5);
  }
  for (int i = 0; i <= 100; i += 5) {
    moveLegT(pwm2, 0, mapValue(i, 0, 100, 400, 350), 407, 420);   //375, 407, 420 //p=2, z=6
    moveLegT(pwm2, 1, mapValue(i, 0, 100, 400, 350), 407, 420);   //375, 407, 420           // Condense motion
    moveLegT(pwm2, 2, mapValue(i, 0, 100, 400, 350), 407, 420);   //355, 407, 420

    moveLeg(pwm1, 0, mapValue((100-i), 0, 100, 400, 350), 297, 297);     //375, 307, 340     // Condense motion
    moveLeg(pwm1, 1, mapValue((100-i), 0, 100, 400, 350), 297, 297);    //375, 297, 297                     // Expand motion
    moveLeg(pwm1, 2, mapValue((100-i), 0, 100, 400, 350), 297, 297);    //395, 305, 320
    delay(5);
  }
  for (int i = 0; i <= 100; i += 5) {
    moveLeg(pwm1, 0, 400, mapValue(i, 0, 100, 297, 340), mapValue(i, 0, 100, 297, 327));    //297, 297    //1     //p=2, z=4.7   // Condense motion
    moveLeg(pwm1, 1, 400, mapValue(i, 0, 100, 297, 340), mapValue(i, 0, 100, 297, 327));    //375, 345, 370                     // Expand motion
    moveLeg(pwm1, 2, 400, mapValue(i, 0, 100, 297, 340), mapValue(i, 0, 100, 297, 327));    //395, 355, 350
    delay(5);
  }
}
