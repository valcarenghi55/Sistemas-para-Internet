#include<stdio.h>

void funcao(int n){

	int a[n], b[n], i, x[n];
	
	for(i = 0; i < n; i++){
	
		scanf("%d", &a[i]);
		
		b[i] = 0;
		
		for(x[i] = a[i]; x[i] > 0; x[i]--){
		
			b[i] += x[i];
		
		}

	}
	
	printf("Vetor B: ");
	
	for(i = 0; i < n; i++){
	
		printf("%d ", b[i]);
	
	}
	
	
}

int main(){
    
    int n;
    
	printf("Digite o numero de valores para os vetores: ");
	scanf("%d", &n);
	
	printf("Digite %d valores para o vetor A: ", n);
	
	funcao(n);

	return 0;
	
}
