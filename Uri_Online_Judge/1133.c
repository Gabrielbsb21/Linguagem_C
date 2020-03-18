#include<stdio.h>
int main(){
    int num, num_2, i;
    scanf("%d %d", &num, &num_2);
    if(num > num_2){
        for(i = num + 1; i > num_2; i++){
            if(i % 5 == 2 || i % 5 == 3){
                printf("%d\n", i);
            }
        }
    }else{
        if(num < num_2){
         for(i = num + 1; i < num_2; i++){
            if(i % 5 == 2 || i % 5 == 3){
                printf("%d\n", i);
            }
         }
        }
    }
    return 0;
}s
