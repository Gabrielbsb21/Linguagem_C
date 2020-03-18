#include<stdio.h>
int main(){
    int num, num_2 = 1, aux;
    do{
        
        scanf("%d", &num);
        for(aux = 1; aux <= num; aux++){
            printf("%d ", num_2);
            num_2 += 1;
        }
        num_2 = 1;
        if(num != 0){
        printf("\n");
        }
    }while(num != 0);
    return 0;
}
            
