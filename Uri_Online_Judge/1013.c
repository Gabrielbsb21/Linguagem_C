#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
  int a, b, c, maior, aux;
  scanf("%d%d%d", &a, &b, &c);
  aux = (a + b +  (abs(a - b)))/2;
  maior = (aux + c +  (abs(aux - c)))/2;
  printf("%d eh o maior\n", maior);
  return 0;
}
