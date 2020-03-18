#include<stdio.h>
int main(){
    int num, posicao = 1, maior = -1000,  i;
    for(i = 1; i <= 100; i++){
        scanf("%d", &num);
        if(num > maior){
            maior = num;
            posicao += 1;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", posicao);
    return 0;
}
    
    
