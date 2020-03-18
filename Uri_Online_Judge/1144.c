#include<stdio.h>
int main(){
    int num, num_2 = 1, num_3 = 1, num_4 = 1, aux, aux_3, aux_4;
    scanf("%d", &num);
    for(aux = 1; aux <= num; aux++){
        num_3 = aux * aux;
        num_2 = aux * aux;
        num_4 = aux * aux * aux;
        printf("%d %d %d\n", aux, num_3, num_4);
        aux_3 = num_2 + 1;
        aux_4 = num_4 + 1;
        printf("%d %d %d\n", aux, aux_3, aux_4);
    }
    return 0;
}
        
