#include<stdio.h>

void funcao(int n){
	
	printf("Digite %d valores para o vetor: ", n);
	
	int vetor[n];
	int i;

	for(i = 0; i < n; i++){
	
		scanf("%d", &vetor[i]);
		
		printf("%d ", vetor[i]);
		
	}
	
}

int main(){
    
    int n;
   
	printf("Digite o numero de valores para o vetor: ");
	scanf("%d", &n);
	
	funcao(n);

	return 0;
	
}
