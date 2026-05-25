#include<stdio.h>

int main(){

	int a[4][4], b[4][4], c[4][4], i, ii;
	
	printf("Digite os valores para a matriz A (4x4): \n");
	
	for(i = 0; i < 4; i++){
	
		for(ii = 0; ii < 4; ii++){
	
			scanf("%d", &a[i][ii]);
	
		}
	
	}
	
	printf("Digite os valores para a matriz B (4x4): \n");
	
	for(i = 0; i < 4; i++){
	
		for(ii = 0; ii < 4; ii++){
	
			scanf("%d", &b[i][ii]);
	
		}
	
	}
	
	printf("Matriz C: \n");
	
	for(i = 0; i < 4; i++){
	
		for(ii = 0; ii < 4; ii++){
	
			printf("%d \t", a[i][ii] + b[i][ii]);
	
		}
		
		printf("\n");
	
	}


	return 0;

}
