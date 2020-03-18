//FALTA TERMINAR!!!!!
#include<stdio.h>
int main(){
	int A, B, C, subiu1, subiu2;
	scanf("%d %d %d", &A, &B, &C);
	subiu1 = C - B;
	subiu2 = B - A;
	if(A > B && C >= B ){
		printf(":)\n");//PRIMEIRA CONDIÇÃO
	}else{
		if(A < B && C <= B){
			printf(":(\n");//SEGUNDA CONDIÇÃO
		}else{
			if(A < B && C > B && subiu1 < subiu2){
				printf(":(\n");//TERCEIRA CONDIÇÃO
			}else{
				if(A < B && C > B && subiu1 == subiu2){
					printf(":)\n");//QUARTA CONDIÇÃO

				}
			}
		}
	}







	return 0;
}