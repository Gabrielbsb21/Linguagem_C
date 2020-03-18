#include<stdio.h>
int main(){
    long int num, aux = 2, i, aux_3 = 2, aux_4 = 2;
    scanf("%ld", &num);
    if(num % 2 == 0){
        for(i = 1; i <= num; i++){
            while(aux <= num){
                aux_4 = aux_4 * aux_3;
                printf("%ld^2 = %ld\n", aux_3, aux_4);
                aux_3 += 2;
                aux += 2;
                aux_4 = aux_3;
            }
        }
    }else{
        if(num % 2 != 0){
            for(i = 1; i <= num; i++){
                while(aux <= num){
                 aux_4 = aux_4 * aux_3;
                printf("%ld^2 = %ld\n", aux_3, aux_4);
                aux_3 += 2;
                aux += 2;
                aux_4 = aux_3;
                }
            }
        }
    }
    return 0;
}
