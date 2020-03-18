#include<stdio.h>
int main(){
	int A, B, C, D, E, T, total = 0;
	scanf("%d", &T);
	scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
    if(T == A){
		total += 1;
	}
		if(T == B){
		total += 1;
	}
	
		if(T == C){
		total += 1;
	}
		if(T == D){
		total += 1;
	}

		if(T == E){
		total += 1;
	}
	printf("%d\n", total);
	return 0;
}
	