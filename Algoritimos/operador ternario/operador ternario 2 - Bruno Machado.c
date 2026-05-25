#include<stdio.h>

int main(){

	float nota1, nota2;
	
	printf("Digite suas notas \n");
	scanf("%f %f", &nota1, &nota2);
	
	(nota1 + nota2) / 2 >= 7? printf("aprovado"): printf("reprovado");

	return 0;

}