#include <stdio.h>
int main() {
 int A, B, C, D, DIFERENCA, AUX;
scanf("%d%d%d%d", &A, &B, &C, &D);
AUX = A * B;
DIFERENCA = C * D;
DIFERENCA = AUX - DIFERENCA;
printf("DIFERENCA = %d\n", DIFERENCA);
    return 0;
}