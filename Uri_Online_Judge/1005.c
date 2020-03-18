#include <stdio.h>
int main() {
    double nota1, nota2, peso1 = 3.5, peso2 = 7.5, MEDIA;
scanf("%lf%lf", &nota1, &nota2);
nota1 = nota1 * peso1;
nota2 = nota2 * peso2;
MEDIA = nota1 + nota2;
MEDIA = MEDIA / 11;
printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}