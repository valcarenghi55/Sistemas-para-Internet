#include<stdio.h>

float media(float nota1, float nota2, float nota3, char letra);

int main(){
	
	int confirmar = 0;
	float nota1, nota2, nota3;
	char letra;
	
	while(confirmar == 0){
		
		printf("Digite suas tres notas: \n");
		scanf("%f %f %f", &nota1, &nota2, &nota3);
	
		printf(" *Para media aritmetica digite A \n");
		printf(" *Para media ponderada digite P \n");
		scanf("%c", &letra);
		scanf("%c", &letra);
		
		if(letra == 'a' || letra == 'A' || letra == 'p' || letra == 'P'){
			
			printf("%.2f \n", media(nota1, nota2, nota3, letra));
			
			printf("Para calcular uma nova nota digite S \n");
			scanf("%c", &letra);
			scanf("%c", &letra);
			if(letra != 's' && letra != 'S'){
			
				confirmar++;
			
			}
		
		}
		else{
		
			printf("Letra nao identificada, tente novamente \n");
		
		}
		
	}
	
	return 0;

}

float media(float nota1, float nota2, float nota3, char letra){

	float r;
	
	if (letra == 'a' || letra == 'A'){
		
		r = (nota1 + nota2 + nota3) / 3;
	
	}
	else{
	
		r = (5 * nota1 + 3 * nota2 + 2 * nota3) / (5 + 3 + 2);
	
	}
	
	return r;

}