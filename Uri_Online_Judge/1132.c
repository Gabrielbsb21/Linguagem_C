#include<stdio.h>
int main(){
    int num, num_2, soma = 0, i;
    scanf("%d %d", &num, &num_2);
    if(num < num_2){
    for(i = num; i <= num_2; i++){
    if(i % 13 != 0){
        soma = i + soma;
    }
    }
    }else{
        for(i = num; i >= num_2; i++){
        if(i % 13 != 0){
        soma = i + soma;
        }
        }
    }
         printf("%d\n", soma);
    return 0;
}
    
