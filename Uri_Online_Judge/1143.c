#include<stdio.h>
int main(){
    int num, num_2 = 1, num_3 = 1, num_4 = 1, aux;
    scanf("%d", &num);
    for(aux = 1; aux<= num; aux++){
        printf("%d %d %d\n", num_2, num_3, num_4);
        num_2 += 1;
        num_3 = num_2 * num_2;
        num_4 = num_2 * num_3;
    }
    return 0;
}
