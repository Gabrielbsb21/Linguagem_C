#include<stdio.h>
int main(){
    float num, media, soma;
    int cont, numtotal;
    media = 0;
    numtotal = 0;
    soma = 0;
    for(cont = 1; cont <= 6; cont++){
        scanf("%f", &num);
        if(num > 0){
            numtotal += 1;
            soma += num;
        }
    }
    media = soma / numtotal;
    printf("%d valores positivos\n", numtotal);
    printf("%.1f\n", media);
    return 0;
}
     
