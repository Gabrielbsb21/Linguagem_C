#include<stdio.h>
int main(){
    int vet[20], i, a = 0, vet2[20];
    for(i = 0; i<= 19; i++)
        scanf("%d", &vet[i]);
    
    for(i = 19; i >= 0; i--){
        vet2[i] = vet[i];
        printf("N[%d] = %d\n", a, vet2[i]);
        a += 1;
    }
    return 0;
}
