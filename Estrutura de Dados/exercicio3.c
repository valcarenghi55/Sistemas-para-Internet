#include<stdio.h>
#include<stdlib.h>

/*
Construa um algoritmo para ler 2 vetores reais de 6 posições 
e enviá-los por parâmetro para uma função. 
Depois esta função deve criar um terceiro vetor cujo conteúdo de cada posição é: 
1, se o número armazenado em uma posição do 1º vetor é o mesmo armazenado na posição respectiva do 2º vetor, 
e 0, se não for o mesmo.
*/

int i;

void ler(int *p){
	
	for(i = 0; i < 6; i++){
	
		printf("digite o valor %d:", i);
		scanf("%d", (p + i));
	
	}
	
	printf("\n");
	
}

void conferir(int *p1, int *p2, int *p3){
	
	for(i = 0; i < 6; i++){
	
		if(*(p1 + i) == *(p2 + i)){
			
			*(p3 + i) = 1;
			
		}
		else{
			
			*(p3 + i) = 0;
		
		}
	
	}

}

int main(){

	int *p1 = (int*) malloc(6 * sizeof(int));
	int *p2 = (int*) malloc(6 * sizeof(int));
	
	printf("vetor 1 \n");
	ler(p1);
	printf("vetor 2 \n");
	ler(p2);
	
	int *p3 = (int*) malloc(6 * sizeof(int));
	
	conferir(p1, p2, p3);
	
	for(i = 0; i < 6; i++){
	
		printf("%d \n", *(p3 + i));
	
	}
	
	free(p1);
	free(p2);
	free(p3);
	
	return 0;

}