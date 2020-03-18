#include<stdio.h>
int main(){
int w, x, y, z, w_2, x_2, y_2, z_2, aux, aux_2, aux_3;
printf("Dia ");
scanf("%d", &w);
scanf("%d%d%d", &x, &y, &z);
printf("Dia");
scanf("%d", &w_2);
scanf("%d%d%d", &x_2, &y_2, &z_2);
if(w >= 1 && w_2 >= 1){
    aux = w * 24 / 24;
    aux_2 = w_2 * 24 / 24;
    aux = w + w_2;
}else{
    if(w >= 1 && w_2 >= 1){
        aux = 0;
    }
} 
printf("%d\n", aux);
return 0;
}

