#include<stdio.h>
int main(){
    int num, num_2, num_3 = 1, num_4 = 2, num_5 = 3;
    scanf("%d", &num);
    for(num_2 = 1; num_2 <= num; num_2++){
        printf("%d %d %d PUM\n", num_3, num_4, num_5);
        num_3 += 4;
        num_4 += 4;
        num_5 += 4;
    }
    return 0;
}
        
