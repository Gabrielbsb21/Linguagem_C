#include<stdio.h>
int main(){
    int num, aux, num_2, aux_2;
    scanf("%d", &num);
    for(aux = 1; aux<= num; aux++){
        scanf("%d", &num_2);
        if(num_2 % 2 != 0){
            printf("%d eh primo\n", num_2);
        }else{
            if(num_2 % 2 == 0){
                printf("%d nao eh primo\n", num_2);
            }
        }
    }
    return 0;
}
