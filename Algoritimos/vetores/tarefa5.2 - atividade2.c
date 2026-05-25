#include<stdio.h>
#include <stdlib.h>

int main(){

	int resultado[5], aposta[10], acertos[5], i, ii;
	
	printf("Digite 10 valores de 0 a 60 para sua aposta:\n");
    for(i=0; i<10; i++){
    	
        scanf("%d", &aposta[i]);
        
    }
    
    for(i = 0; i < 5; i++){
    
		resultado[i] = rand() % 60;
		
    }
    
	int x = 0;
	
	for(i = 0; i < 5; i++){
	
		for(ii = 0; ii < 10; ii++){
		
			 if(resultado[i] == aposta[ii]){
			 
			 	acertos[i] = resultado[i];
			 	
			 	x++;
			 
			 }
		
		}

	}
	
	
	printf("\nO resultado do sorteio foi: ");
	for(i = 0; i < 5; i++){
	
		printf("%d ", resultado[i]);
	
	}
	
	printf("\nVoce acertou %d numeros: ", x);
	for(i = 0; i < x; i++){
	
		printf("%d ", acertos[i]);
	
	}

	return 0;

}
