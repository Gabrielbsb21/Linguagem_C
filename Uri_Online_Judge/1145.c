#include<stdio.h>
int main(){
    int num, num_2, num_3 = 1, num_4 = 2, num_5 = 3, aux, aux_2;
    scanf("%d %d", &num, &num_2);
    for(aux = 1; aux <= num_2; aux++){
        for(aux_2 = 1; aux_2 <= num; aux_2++){
            printf("%d %d %d\n", num_3, num_4, num_5);
            num_3 += 1;
            num_4 += 1;
            num_5 += 1;
        }
    }
    return 0;
}
            
