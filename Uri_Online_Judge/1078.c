#include<stdio.h>
int main(){
    int num, i, aux, aux_1 = 1, aux_2 = 0;
    scanf("%d", &num);
    for(i = 1; i<= 10; i++){
        aux = aux_1 * num;
        aux_1 += 1;
        aux_2 += 1;
        printf("%d x %d = %d\n", aux_2, num, aux);
    }
    return 0;
}
