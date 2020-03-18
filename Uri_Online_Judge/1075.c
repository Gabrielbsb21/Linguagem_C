#include<stdio.h>
int main(){
  int num, aux, i;
  scanf("%d", &num);
  for(i = 1; i <= 1000; i++){
    aux = i;
    if(aux % num == 2){
      printf("%d\n", aux);
     }
  }
return 0;
}
