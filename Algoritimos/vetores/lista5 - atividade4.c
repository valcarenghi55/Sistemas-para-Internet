#include<stdio.h>

void funcao(){

	int a[5], b[8], c[13], i;

	
	printf("Digite 5 valores para o vetor A: ");
	
	for(i = 0; i < 5; i++){
	
		scanf("%d", &a[i]);
		
	}
	
	printf("Digite 8 valores para o vetor B: ");
	
	for(i = 0; i < 8; i++){
	
		scanf("%d", &b[i]);
		
	}
	
	for(i = 0; i < 13; i++){
	
		if(i < 5){
		
			c[i] = a[i];
		
		}
		else{
		
			c[i] = b[(i - 5)];
		
		}
		
		
	}

	for(i = 0; i < 13; i++){
	
		printf("%d ", c[i]);	
		
	}
	
}

int main(){
	
	funcao();

	return 0;
	
}
