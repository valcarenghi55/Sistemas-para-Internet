#include<stdio.h>

void funcao(){

	float v[20], i;
	
	for(i = 0; i < 20; i++){
	
		if(i < 10){
			
			scanf("%f", &v[i]);
			
		}
		else{
		
			v[i + 10] = v[i] *= 1.02;
			i++;
			v[i + 10] = v[i] *= 1.05;
							
		}
			
			printf("%f ", v[i]);
			
	}			
	
}

int main(){
	
	printf("Digite 10 valores: ");
	
	funcao();
	
	return 0;
	
}
