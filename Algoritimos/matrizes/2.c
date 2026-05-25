#include<stdio.h>

int scan(int m[4][3]){

	int i, j;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			
			scanf("%d", &m[i][j]);
	
		}
	}
	
}

int print(int m[4][3]){

	int i, j;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			
			printf("%d \t", m[i][j]);
	
		}
		
		printf("\n");
		
	}
	
	printf("\n");
	
}

int main(){

	int m[4][3], l, c;

	printf("Digite os valores para matriz: \n");
	
	scan(m);
	
	printf("Matriz: \n");
	
	print(m);
	
	printf("Escolha uma linha e uma coluna: \n");
	
	scanf("%d", &l);
	scanf("%d", &c);
	
	printf("%d \n", m[l][c]);
	
	return 0;

}
