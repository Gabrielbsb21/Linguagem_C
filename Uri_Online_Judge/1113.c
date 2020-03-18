#include<stdio.h>
int main(){
    int num_1, num_2; 
    do{
        scanf("%d %d", &num_1, &num_2);
        if(num_1 > num_2){
            printf("Decrescente\n");
        }else{
            if(num_1 < num_2){
                printf("Crescente\n");
            }
        }
    }while( num_1 != num_2);
    return 0;
}
                
