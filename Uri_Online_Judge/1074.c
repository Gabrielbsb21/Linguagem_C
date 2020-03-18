#include<stdio.h>
int main(){
    int num, aux, i;
    scanf("%d", &num);
    for(i = 1; i <= num; i++){
        scanf("%d", &aux);
        if(aux % 2 == 0 && aux > 0){
            printf("EVEN\n");
        }else{
            if(aux % 2 == 0 && aux < 0){
                printf("EVEN NEGATIVE\n");
            }else{
                if(aux % 2 !=0 && aux < 0){
                   printf("ODD NEGATIVE\n");
                }else{
                    if(aux % 2 !=0 && aux > 0){
                        printf("ODD POSITIVE\n");
                    }else{
                        if(aux == 0){
                            printf("NULL\n");
                        }
                    }
                }
            }
        }
    }
    return 0;
}
