#include<stdio.h>
int main(){
    int i, j, aux_1, aux_2;
    i = 0;
    j = 65;
    aux_2 = 61;
    while(j > 0){
        i += 1;
        aux_1 = i;
        aux_2 -= 1;
        printf("I=%d J=%d\n", aux_1, aux_2);
        i += 2;
        aux_2 -= 4;
        j-= 5;
    }
    return 0;
}
