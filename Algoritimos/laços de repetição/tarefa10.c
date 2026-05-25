#include<stdio.h>

int main(){

	int valor1, valor2;
	
	do{
		
		printf("Usuario 1 - digite um numero de 1 a 100: ");
		scanf("%d", &valor1);
		
	}while(valor1 > 100);
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("Usuario 2 - tente acertar o numero: ");
	scanf("%d", &valor2);
	
	while(valor2 != valor1){
		
		if(valor2 > valor1){
		
			printf("o numero digitado e MAIOR que o valor do usuario 1. tente novamente: ");
		
		}
		else{
		
			printf("o numero digitado e MENOR que o valor do usuario 1. tente novamente: ");
		
		}
		scanf("%d", &valor2);
		
	}
	
	printf("PARABENS, voce acertou");

	return 0;

}