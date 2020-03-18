#include <stdio.h>
int main() {
    int horas, NUMBER;
float SALARY, valor;
scanf("%d%d%f", &NUMBER, &horas, &valor);
SALARY = horas * valor;
printf("NUMBER = %d\n", NUMBER);
printf("SALARY = U$ %.2f\n", SALARY);
    return 0;
}