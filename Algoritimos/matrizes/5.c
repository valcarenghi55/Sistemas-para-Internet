#include<stdio.h>

int main(){

	float a[10][2], maiores[5];
	int i, d;
	
	printf("Delegacoes: 0 1 2 3 4 \n");
	
	for(i = 0; i < 10; i++){
	
		printf("Digite a delegacao do atleta %d: ", i + 1);
		scanf("%f", &a[i][0]);
		d = a[i][0];
		
		printf("Digite a altura do atleta %d: ", i + 1);
		scanf("%f", &a[i][1]);

		if (a[i][1] > maiores[d]){
				
			maiores[d] = a[i][1];
		
		}
		
		printf("\n");
		
	}
	
	for(i = 0; i < 5; i++){
	
		printf("Maior altura da delegacao %d: %f \n", i, maiores[i]);
	
	}

	return 0;

}
