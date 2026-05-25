#include<stdio.h>

int main(){

	int r[5], s[10], x[5], i, ii;
	
	printf("Digite 5 valores para o vetor 1:\n");
    for(i=0; i<5; i++){
    	
        scanf("%d", &r[i]);
        
    }
    
    printf("Digite 10 valores para o vetor 2:\n");
    for(i=0; i<10; i++){
    	
        scanf("%d", &s[i]);
        
    }
	
	for(i = 0; i < 5; i++){
	
		for(ii = 0; ii < 10; ii++){
		
			 if(r[i] == s[ii]){
			 
			 	x[i] = r[i];
			 
			 }
		
		}

	}
	
	for(i=0; i<5; i++){
		
        printf("%d ", x[i]);
        
    }
	
    
    return 0;

}