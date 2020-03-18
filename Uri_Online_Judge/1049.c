#include<stdio.h>
int main(){
    char nome_1 [10] = "vertebrado", nome_2 [12];
    int aux, aux_2 = 0, aux_3, aux_4 = 0;
    printf("digite um nome");
    scanf("%s", nome_2);
    for(aux = 0; aux <= 10; aux++){
        aux_2 = aux;
        for(aux_3 = 0; aux_3 <= nome_2; aux_3 ++){
            aux_4 = aux_3;
        }
    }
    if( aux_2 == aux_4){
        printf("as palavras sao iguais\n");
    }else{
        printf("palavras diferentes\n");
    }
    return 0;
    
}
    
