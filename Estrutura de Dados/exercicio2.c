#include<stdio.h>
#include<stdlib.h>

/*
Criar um programa com uma função que leia os N valores de um vetor do tipo inteiro e, 
então, construir um segundo vetor de mesma dimensão, 
sendo que cada elemento do segundo vetor é o somatório do elemento correspondente no primeiro. 
Ex.: VetA[0] = 5; logo, VetB[0] = 15 (1 + 2 + 3 + 4 + 5 = 15).
*/

int i;

void ler(int *p, int n){
	
	for(i = 0; i < n; i++){
	
		printf("digite o valor %d:", i);
		scanf("%d", (p + i));
	
	}

}

int segundo(int *p, int *q, int n){

	int j;
	
	for(i = 0; i < n; i++){
		
		*(q + i) = 0;
		j = *(p + i);
		
		for(; j > 0; j--){
		
			*(q + i) += j;
		
		}
	
	}
	
	return q;

}

int main(){
	
	int n;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	int *p = (int*) malloc(n * sizeof(int));
	
	ler(p, n);
	
	int *q = (int*) malloc(n * sizeof(int));
	
	segundo(p, q, n);
	
	for(i = 0; i < n; i++){
	
		printf("%d \n", *(q + i));
	
	}
	
	free(p);
	free(q);

	return 0;

}