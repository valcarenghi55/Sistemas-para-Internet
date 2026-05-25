#include<stdio.h>

int main(){

	float temp;
	
	printf("Digite sua temperatura \n");
	scanf("%f", &temp);
	
	temp >= 37.5? printf("esta com febre"): printf("nao esta com febre");

	return 0;

}