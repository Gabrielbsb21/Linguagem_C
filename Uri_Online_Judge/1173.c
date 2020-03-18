#include<stdio.h>
int main(){
    int n[10], i = 0, aux = 0, num, a;
     scanf("%d", &num);
    for(a = 0; a <= 9; a++){
        n[i] = num;
        printf("N[%d] = %d\n", aux, n[i]);
        num *= 2;
        aux++;
    }
    return 0;
}
