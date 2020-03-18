#include<stdio.h>
int main(){
    int num;
    float num_1, num_2, num_3, result, i;
    scanf("%d", &num);
    for(i = 1; i <= num; i++){
        scanf("%f%f%f", &num_1, &num_2, &num_3);
        result = num_1 * 2  + num_2 * 3 + num_3 *5;
        result = result / 10;
        printf("%.1f\n", result);
    }
    return 0;
}
