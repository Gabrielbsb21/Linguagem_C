#include<stdio.h>
int main(){
    int num, aux, aux_2, aux_3 = 2, aux_4, aux_5 = 2, aux_6;
    scanf("%d", &num);
    aux_2 = num;
    if(aux_2 % 2 != 0){
    for(aux = 1; aux <= 6; aux++){
        while(aux_3 <= 6){
            aux_2 += 2;
            printf("%d\n", aux_2);
            aux_3 ++;
        }
    }
    }else{
        if(aux_2 % 2 == 0){
            aux_6 = aux_2 + 1;
            aux_2 += 1;
            printf("%d\n", aux_6);
             for(aux_4 = 1; aux_4 <= 6; aux_4++){
                 while(aux_5 <= 6){
                     aux_2 += 2;
                     printf("%d\n", aux_2);
                     aux_5++;
                 }
             }
        }
    }
    return 0;
}
                     
           
