#include<stdio.h>
int main(){
    int gol, gol_2, grenais = 0, inter = 0, gremio = 0, empa = 0, num;
    while(num != 2){
        scanf("%d %d", &gol, &gol_2);
        grenais += 1;
        if(gol > gol_2){
            inter += 1;
        }else{
            gremio += 1;
        }if(gol == gol_2){
            empa += 1;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &num);
    }
    if(inter > gremio){
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empa);
    printf("Inter venceu mais\n");
    }else{
        printf("%d grenais\n", grenais);
        printf("Inter:%d\n", inter);
        printf("Gremio:%d\n", gremio);
        printf("Empates:%d\n", empa);
        printf("Inter venceu mais\n");
    }
    return 0;
}
    
