#include<stdio.h>
int main(){
    int num, result, num_2, aux;
    scanf("%d", &num);
    if(num % 2 == 0){
        for(aux = 1; aux<= 5; aux++){
            num = num + 2;
        }
        result = num;
        printf("%d\n", result);
    }
    return 0;
}
