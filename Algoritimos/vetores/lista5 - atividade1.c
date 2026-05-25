#include<stdio.h>

int funcao(){

	int i;
	int v[15];
	int x = 0;
	
	for(i = 0; i < 15; i++){
	
		scanf("%d", &v[i]);
		if(v[i] > 5){
		
			x++;
		
		}
		
	}
	
	return x;
	
}

int main(){
	
	printf("Digite 15 valores: ");
	
	printf("%d numeros sao maiores que 5", funcao());

	return 0;
	
}
