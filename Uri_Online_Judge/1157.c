#include<stdio.h>
int main(){
    int num, aux = 1;
    scanf("%d", &num);
    while(aux <= num){
        if(num % aux == 0){
            printf("%d\n", aux);
        }
        aux++;
    }
    return 0;
}
    
