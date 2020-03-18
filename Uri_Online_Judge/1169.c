#include<stdio.h>
#include<math.h>
int main(){
    int num, x, a;
    scanf("%d", &num);
    for(a = 0; a< num; a++){
        scanf("%d", &x);
        printf("%lld kg\n", (long long)(pow(2,x)/12000));
    }
    return 0;
}
