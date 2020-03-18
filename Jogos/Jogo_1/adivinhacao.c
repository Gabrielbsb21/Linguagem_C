#include<stdio.h>
#include<stdlib.h>
#define NUMERO_DE_TENTATIVAS 3

int main(){
    printf("************************************\n");
    printf("* Bem-vindo ao Jogo de Adivinhação *\n");
    printf("************************************\n");

    int numerosecreto, chute;
    numerosecreto = 42;
    
    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {
	    printf("Qual é o seu chute? \n");
	    scanf("%d", &chute);
	    printf("Seu %dº chute foi %d\n", i, chute);
	    int acertou = chute == numerosecreto;
	    int maior = chute > numerosecreto;

	    /*usuario nao pode chutar numeros negativos, caso ele quiser chutar um numero negativo
	    	ele não perderá a joga por isso o i-- */
	    
	    if(chute < 0) {
	    	printf("Você não pode chutar números negativos\n");
	    	i--;
	    	continue;
	    }

	    if(acertou) {
	    	printf("Parabéns! Você acertou!\n");
	    	break;
	    } else if(maior) {
	    		printf("Seu chute foi maior que o número secreto!\n");
	    	
	    	} else {
	    		printf("Seu chute foi menor que o número secreto!\n");
	    	}
	}
	printf("Fim de Jogo\n");

    return 0;
}