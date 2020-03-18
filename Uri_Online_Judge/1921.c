#include<stdio.h>
void lado(long long int *la){
	*la = *la *(*la - 3)/ 2;//fórmula 
}
int main(){
	long long int lados;
	scanf("%lld", &lados);
	lado(&lados);
	printf("%lld\n", lados);
	return 0;
}