#include<stdio.h>
int main(){
     int num_1, num_2, aux = 1;
    scanf("%d", &num_1);
   for(num_2 = num_1; num_2 >= 1; num_2--){
       aux *= num_2;
   }
   printf("%d\n", aux);
   return 0;
}
