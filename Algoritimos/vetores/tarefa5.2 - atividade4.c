#include<stdio.h>
#include <stdlib.h>

int main(){

	int n, p, v, i;
	
	printf("Digite o numero de valores para o vetor: ");
	scanf("%d", &n);
	
	int vetor[n];
	
	for(i = 0; i < n; i++){
	
		printf("Escolha uma posicao: ");
		scanf("%d", &p);
		
		printf("Digite um valor para a posicao %d: ", p);
		scanf("%d", &v);
		
		vetor[p] = v;
	
	}
	
	for(i = 0; i < n; i++){
	
		printf("%d ", vetor[i]);
	
	}
	

	return 0;

}
