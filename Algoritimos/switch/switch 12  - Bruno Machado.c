#include<stdio.h>
#include<math.h>
 	
int main(){

 	int valor, resultado;
 
	printf("Digite um valor inteiro:");
	scanf("%d", &valor);
 
	resultado = valor / fabs(valor);
	
	switch(resultado){
	
		case 1:{
			printf("positivo");
			break;
		}

		case -1:{
			printf("negativo");
			break;
		}
		
		default:{
			printf("zero"); 
			break;
		}

		
	}

	return 0;
}