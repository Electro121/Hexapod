#include <stdio.h>
#include <math.h>

// Function to map a value from one range to another
int map(int x, int in_min, int in_max, int out_min, int out_max) {
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

int main() {
    float p = 9;        // initial length
    float z = 5;        // initial height
    float a, b, a1, b1;
    float a2, b2;       // for LegT
    double L1 = 5.5;    // length of femur
    double L2 = 8;      // length of tibia
    double A, B, C, CF, FT, CF1, FT1, M_CF1, M_FT1, M_CF2, M_FT2;     // alpha, beta, gamma

    // Angle calculation
    float L = sqrt(pow(p, 2) + pow(z, 2));
    A = atan(z / p);
    B = acos((pow(L, 2) + pow(L1, 2) - pow(L2, 2)) / (2 * L1 * L));
    C = acos((pow(L, 2) + pow(L2, 2) - pow(L1, 2)) / (2 * L2 * L));
    
    // Convert radians to degrees
    A = A * 180.0 / M_PI;
    B = B * 180.0 / M_PI;
    C = C * 180.0 / M_PI;

    // Printing the angles in degrees
    //printf("Angle A: %f degrees\n", A);
    //printf("Angle B: %f degrees\n", B);
    //printf("Angle C: %f degrees\n", C);
    
    //Real angle for coxa,femur and tibia
    CF = B - A;          //angle between Coxa and Femur
    FT = 180 - (B+C);    //angle between Femur and Tibia
   
    printf("Angle CF: %f degrees\n", CF);
    printf("Angle FT: %f degrees\n", FT);
    
    //Angle for servos (femur and tivia)
    CF1 = 90 - CF;          //angle between Coxa and Femur
    FT1 = FT - 50 + 70;     //angle between Femur and Tibia
    
    printf("\nAngle CF1: %f degrees\n", CF1);
    printf("Angle FT1: %f degrees\n", FT1);
    
    // Mapping angles
    M_CF1 = map(CF1, 0, 180, 150, 600);
    M_FT1 = map(FT1, 0, 180, 150, 600);
    
    printf("\nMapped Angle(femur): %.2f degrees\n", M_CF1);
    printf("Mapped Angle (coxa): %.2f degrees\n", M_FT1);
    
    // Mapping Angle for T
    M_CF2 = map((180 - CF1), 0, 180, 150, 600);
    M_FT2 = map((180 - FT1), 0, 180, 150, 600);
    
    printf("\n(T) Mapped Angle(femur): %.2f degrees\n", M_CF2);
    printf("(T) Mapped Angle (coxa): %.2f degrees\n", M_FT2);

    return 0;
}
