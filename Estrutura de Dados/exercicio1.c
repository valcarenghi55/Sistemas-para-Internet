#include<stdio.h>
#include<stdlib.h>

//Escrever um programa com uma função que leia N números reais, armazene-os em um vetor e imprima-os na ordem inversa.

int i;

void ler(float *p, int n){
	
	for(i = 0; i < n; i++){
	
		printf("digite o valor %d:", i);
		scanf("%f", (p + i));
	
	}
	
	for(i = n - 1; i >= 0; i--){
	
		printf("%.2f \n", *(p + i));
	
	}

}

int main(){
	
	int n;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	float *p = (float*) malloc(n * sizeof(float));
	
	if(p != NULL){
	
		ler(p, n);
		
	}
	else{
	
		printf("Espaço de memoria insuficiente");
	
	}
	
	free(p);

	return 0;

}