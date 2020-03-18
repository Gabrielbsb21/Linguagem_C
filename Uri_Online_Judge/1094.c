#include<stdio.h>
#include<stdlib.h> 
int main(){
    int i = 1, aux_1, aux_2, aux_3 = 0, aux_4 = 0, aux_5 = 0, total = 0;
    char t;
    scanf("%d", &aux_1);
    while( i <= aux_1){
        scanf("%d %c", &aux_2, &t);
        total += aux_2;
        if(t == 'R'){
            aux_3 += aux_2;
        }else{
            if(t == 'S'){
                aux_4 += aux_2;
            }else{
                if(t == 'C'){
                    aux_5 += aux_2;
                }
            }
        }
    i++;
    }
    printf("Total : %d cobaias\n", total);
    printf("Total de coelhos: %d\n", aux_5);
    printf("Total de ratos: %d\n", aux_3);
    printf("Total de sapos: %d\n", aux_4);
    printf("Percentual de coelhos: %.2f\n", (float)aux_5 *100/total);
    printf("Percentual de ratos: %.2f\n", (float)aux_3 *100/total);
    printf("Percentual de sapos: %.2f\n", (float)aux_4 *100/total);
    return 0;
}
    
    
        
