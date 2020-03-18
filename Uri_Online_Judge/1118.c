#include<stdio.h>
int main(){
    float nota_1, nota_2, media;
    int num;
    while( num != 2){
     scanf("%f", &nota_1);
    if(nota_1 < 0 || nota_1 > 10){
            printf("nota invalida\n");
    }
    while(nota_1 < 0 || nota_1 > 10){
        scanf("%f", &nota_1);
        if(nota_1 < 0 || nota_1 > 10){
            printf("nota invalida\n");
        }
    }
         scanf("%f", &nota_2);
         if(nota_2 < 0 || nota_2 > 10){
            printf("nota invalida\n");
    }while(nota_2 < 0 || nota_2 > 10){
        scanf("%f", &nota_2);
        if(nota_2 < 0 || nota_2 > 10){
            printf("nota invalida\n");
        }
    }
        media = nota_1 + nota_2;
        media = media / 2;
        printf("media = %.2f\n", media);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &num);
        if(num < 1 || num > 2){
            while(num < 1 || num > 2){
                 printf("novo calculo (1-sim 2-nao)\n");
                 scanf("%d", &num);
            }
        }
    }
    return 0;
}
                
        
