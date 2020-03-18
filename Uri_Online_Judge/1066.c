#include<stdio.h>
int main(){
    int num, aux = 0, aux_2 = 0, aux_3 = 0, i = 1, aux_4 = 0;
    while(i <= 5){
        scanf("%d", &num);
        if(num % 2 == 0){
            aux_2 += 1;
        }else{
            if(num % 2 != 0){
                aux_3 += 1;
            }else{
                if(num >= 0){
                    aux_4 += 1;
                }else{
                    if(num < 0){
                        aux += 1;
                    }
                }
            }
        }
        i++;
    }
    printf("%d valor(es) par(es)\n", aux_2);
    printf("%d valor(es) impar(es)\n", aux_3);
    printf("%d valor(es) negativos(es)\n", aux_4);
    printf("%d valor(es) positivos(es)\n", aux);
    return 0;
}
