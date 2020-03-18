#include<stdio.h>
#include<stdlib.h>
int main(){
	int num1, num2, i = 1;
	scanf("%d", &num1);
	while(i <= num1){
		scanf("%d", &num2);
		if(num2 % 2 == 0){
			printf("0\n");
		}else{
			if(num2 % 2 != 0){
				printf("1\n");
			}
		}
	i++;	
	}
}