#include<stdio.h>

void funcao(){

	printf("Digite 8 valores divisiveis por 2 e 3 para o vetor A \n");
	
	int a[8], b[8], c[16], i = 0;

	while(i < 8){
		
		printf("Digite o valor %d para A: ", i + 1);
		scanf("%d", &a[i]);
		if(a[i] % 2 == 0 && a[i] % 3 == 0){
		
			i++;
		
		}
		else{
		
			printf("Valor nao compativel, tente novamente \n", i);
		
		}
		
	}
	
	printf("Digite 8 valores divisiveis por 5 para o vetor B \n");
	
	i = 0;
	
	while(i < 8){
		
		printf("Digite o valor %d para B: ", i + 1);
		scanf("%d", &b[i]);
		if(b[i] % 5 == 0){
		
			i++;
		
		}
		else{
		
			printf("Valor nao compativel, tente novamente \n", i);
		
		}
		
	}
	
	for(i = 0; i < 16 ; i++){
	
		if(i < 8){
		
			c[i] = a[i];
		
		}
		else{
		
			c[i] = b[i - 8];
		
		}
		
		printf("%d ", c[i]);
		
	}	
	
}

int main(){
	
	funcao();

	return 0;
	
}
