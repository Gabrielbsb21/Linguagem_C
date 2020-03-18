#include<stdio.h>
#include<stdlib.h>
int main(){
	char nome[] = "LIFE IS";
	int i, num;
	scanf("%d", &num);
	for(i= 0; i<=num; i++){
		printf("%c", nome[i]);
	}
	printf("\n");
	return 0;
}