#include<stdio.h>

int scan(int m[5][5]){

	int i, j;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			
			scanf("%d", &m[i][j]);
	
		}
	}
	
}


int multiplica(int m1[5][5], int m2[5][5]){

	int i, j;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			
			
			if(i == j){
			
				m2[i][j] = m1[i][j] * 3;
			
			}
			else{
			
				m2[i][j] = m1[i][j] * 2;
			
			}
			
	
		}
	}
	
}

int print(int m[5][5]){

	int i, j;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			
			printf("%d \t", m[i][j]);
	
		}
		
		printf("\n");
		
	}
	
}

int main(){

	int a[5][5], b[5][5];

	printf("Digite os valores para matriz A: \n");
	
	scan(a);
	
	multiplica(a, b);
	
	printf("Matriz B: \n");
	
	print(b);

	return 0;

}
