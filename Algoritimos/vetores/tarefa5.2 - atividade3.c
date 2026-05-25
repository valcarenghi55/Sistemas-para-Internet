#include<stdio.h>
#include <stdlib.h>

int main(){

	int d[10], i, ii;
	int x = 0;
	
	printf("Digite 10 valores para o vetor:\n");
    for(i=0; i<10; i++){
    		
    	scanf("%d", &d[i]);	
    	
    }
    
    for(i=0; i<10; i++){
    		
    	while(d[i + x] <= 0){

			x++;

		}
			
		d[i] = d[i + x];
		
    }
    
    for(i=0; i < 10 - x; i++){
    	
        printf("%d ", d[i]);
        
    }

	return 0;

}
