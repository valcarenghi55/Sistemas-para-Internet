#include<stdio.h>

float soma(float x, float y);
float sub(float x, float y);
float mult(float x, float y);
float div(float x, float y);

int main(){

	printf("Escolha a operacao: \n");
	printf("1. soma\n");
	printf("2. subtracao\n");
	printf("3. Multiplicacao\n");
	printf("4. divisao\n");
	printf("0. sair\n");
	
	int operacao;
	float x, y, r;
	
	do{
		
		scanf("%d", &operacao);
		
		if(operacao < 0 || operacao > 4){
		
			printf("Comando nao identificado, tente novamente \n");
		
		}
	
	}while(operacao < 0 || operacao > 4);
	
	if(operacao != 0){
		
		printf("Digite um primeiro valor \n");
		scanf("%f", &x);
		
		printf("Digite um segundo valor \n");
		scanf("%f", &y);
	
		switch(operacao){
			case 1:{
				r = soma(x, y);
				break;
			}
			case 2:{
				r = sub(x, y);
				break;
			}
			case 3:{
				r = mult(x, y);
				break;
			}
			case 4:{
				r = div(x, y);
				break;
			}
			
		}
		
		printf("%.2f", r);
		
	}
}

float soma(float x, float y){

	float r = x + y;
	return r;

}

float sub(float x, float y){

	float r = x - y;
	return r;

}

float mult(float x, float y){

	float r = x * y;
	return r;

}

float div(float x, float y){

	float r = x / y;
	return r;

}



