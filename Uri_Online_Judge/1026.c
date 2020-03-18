#include<stdio.h>
int main(){
    int unsigned long num, num2, num3;
    while(scanf("%lu %lu", &num, &num2)==2){
        num3 = (num^num2);
        printf("%lu\n", num3);
    }
    return 0;
}
