#include<stdio.h>
int main(){
    int idade, idade_2 =  0, idade_3 = 0;
    float media;
    do{
        scanf("%d", &idade);
        if(idade > 0){
            idade_2 +=1;
            idade_3 = idade + idade_3;
        }
        media = (float) idade_3 / idade_2;
    }while(idade > 0);
    printf("%.2f\n", media);
    return 0;
}
