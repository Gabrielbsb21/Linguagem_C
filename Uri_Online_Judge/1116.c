#include<stdio.h>
int main(){
    int num_1, num_2, num_3, i;
    float result;
    scanf("%d", &num_1);
    for(i = 1; i <= num_1; i++){
        scanf("%d %d", &num_2, &num_3);
        if(num_3 == 0){
            printf("divisao impossivel\n");
        }else{
            result =(float) num_2 / num_3;
            printf("%.1f\n", result);
        }
    }
    return 0;
}
        
