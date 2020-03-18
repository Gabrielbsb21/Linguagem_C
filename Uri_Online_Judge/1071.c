#include<stdio.h>
int main(){
    int num_1, num_2, aux, i = 0;
    scanf("%d%d", &num_1, &num_2);
    if(num_1 % 2 != 0);
    num_1 -= 1;
    while(num_1 > num_2){
        if(num_1 % 2 != 0){
            aux = num_1;
        }else{
            aux = 0;
        }
        i = aux + i;
        num_1 --;
    }
    printf("%d\n", i);
    return 0;
}
