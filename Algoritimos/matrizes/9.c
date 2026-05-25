#include<stdio.h>

int main(){

	int a[3][12], i, ii, anual[3], mensal[12];
	
	for(i = 0; i < 3; i++){
	
		for(ii = 0; ii < 12; ii++){
	
			printf("Digite o numero de vendas do produto %d no mes %d: ", i + 1, ii + 1);
			scanf("%d", &a[i][ii]);
			
		}
		
		printf("\n");
	
	}
	
	for(i = 0; i < 3; i++){
		
		if(anual[i] != 0){anual[i] = 0;}
		
		for(ii = 0; ii < 12; ii++){
	
			anual[i] += a[i][ii];
			
		}
	
	}
	
	for(ii = 0; ii < 12; ii++){
		
		if(mensal[ii] != 0){mensal[ii] = 0;}
		
		for(i = 0; i < 3; i++){
	
			mensal[ii] += a[i][ii];
			
		}
	
	}
	
	printf("\n");
	
	for(i = 0; i < 3; i++){
	
		printf("O total de vendas do produto %d no ano foi de: %d vendas. \n", i + 1, anual[i]);
	
	}
	
	printf("\n");
	
	for(ii = 0; ii < 12; ii++){
	
		printf("O total de vendas no mes %d foi de: %d vendas. \n", ii + 1, mensal[i]);
	
	}
	
	
	return 0;

}
