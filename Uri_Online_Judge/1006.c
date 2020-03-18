#include <stdio.h>
int main() {
 double A, B, C, pesoA = 2, pesoB = 3, pesoC = 5, MEDIA;
scanf("%lf%lf%lf", &A, &B, &C);
A = A * pesoA;
B = B * pesoB;
C = C * pesoC;
MEDIA = A + B + C;
MEDIA = MEDIA / 10;
printf("MEDIA = %.1lf\n", MEDIA);
    return 0;
}