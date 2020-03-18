#include<stdio.h>
int main (){
    int num, num_2 = 0, num_3 = 0, num_4 = 0;
    do{
    scanf("%d", &num);
     if(num == 1){
            num_2 += 1;
        }else{
            if(num == 2){
                num_3 += 1;
            }else{
                if(num == 3){
                    num_4 += 1;
                }
            }
        }
    }while(num != 4);
       
      printf("MUITO OBRIGADO\n");
      printf("Alcool: %d\n", num_2);
      printf("Gasolina: %d\n", num_3);
      printf("Diesel: %d\n", num_4);
return 0;
}
