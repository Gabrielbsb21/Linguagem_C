#include<stdio.h>
#include<string.h>
void curso(){
	printf("Ciencia da Computacao\n");
}
int main(){
	int i, num;
	char cur[100];
	scanf("%d", &num);
	for(i = 0; i <= num; i++){
		scanf("%[^\n]s", cur);
		getchar();
	}
	curso();
	return 0;
}