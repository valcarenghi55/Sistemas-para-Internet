#include<stdio.h>

int main(){

	float saldo;
	int meses = 0;
	
	printf("Digite seu saldo: ");
	scanf("%f", &saldo);
	
	while(saldo >= 200 && meses < 300){
		
		saldo *= 1.05;
		printf("\n juros %.2f", saldo);
		meses++;
		printf("\n mes %d", meses);
		saldo -= 200;
		printf("\n saque %.2f", saldo);
	
		
	}
	
	if (meses < 300){
		
		printf("\n\n%d meses, saldo igual a %.2f R$", meses, saldo);
		
	}
	else{
	
		printf("\n\nesse dinheiro rendera infinitamente");
	
	}

	return 0;

}