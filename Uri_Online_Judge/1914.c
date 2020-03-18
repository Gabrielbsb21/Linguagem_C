#include<stdio.h>
#include<string.h>
int main(){
	int num1, i, n1, n2, soma;
	char nome[100], nome2[100], escolha1[10], escolha2[10];
	scanf("%d", &num1);
	for(i = 0; i < num1; i++){
		scanf("%s %s %s %s", nome, escolha1, nome2, escolha2);
		scanf("%d %d", &n1, &n2);
		soma = n1 + n2;
		if(soma % 2 == 0 && strcmp(escolha1, "PAR") == 0){
			printf("%s\n", nome);
		}else{
			if(soma % 2 == 0 && strcmp(escolha2, "PAR") == 0){
				printf("%s\n", nome2);
			}else{
				if(soma % 2 != 0 && strcmp(escolha1, "IMPAR") == 0){
				   printf("%s\n", nome);
				}else{
					if(soma % 2 != 0 && strcmp(escolha2, "IMPAR") == 0){
				        printf("%s\n", nome2);
				    }
				}
			}
		}
	}
	return 0;
}
		