#include <stdio.h>
int main() {
 char a;
 double TOTAL, SALARIO, VENDAS;
 scanf("%s", &a);
 scanf("%lf%lf", &SALARIO, &VENDAS);
 VENDAS = VENDAS * 0.15;
 TOTAL = VENDAS + SALARIO;
 printf("TOTAL = R$ %.2f\n", TOTAL);
    return 0;
}
