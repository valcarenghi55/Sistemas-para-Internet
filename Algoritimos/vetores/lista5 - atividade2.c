#include<stdio.h>

void funcao(){

	int a[5], b[5], i;
	
	for(i = 0; i < 5; i++){
	
		scanf("%d", &a[i]);
		
		b[i] = a[i] * a[i];
		
		printf("%d ", b[i]);
		
	}
	
	
}

int main(){
	
	printf("Digite 5 valores para o vetor A: ");
	
	funcao();

	return 0;
	
}
