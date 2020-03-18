#include<stdio.h>
int main(){
    int num, num_2, i, aux_1 = 0, aux_2 = 0;
    scanf("%d", &num);
    for(i = 1; i <= num; i++){
        scanf("%d", &num_2);
        if(num_2 >= 10 && num_2 <= 20){
            aux_1 = aux_1 + 1;
        }else{
            if(num_2 <= 10 || num_2 > 20){
                aux_2 = aux_2 + 1;
            }
        }
        }
    printf("%d in\n", aux_1);
    printf("%d out\n", aux_2);
    return 0;
}
        
