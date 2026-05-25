#include<stdio.h>

int main(){

	float tempo, distancia;
	
	printf("Digite digite o tempo e a distancia da viagem\n");
	scanf("%f %f", &tempo, &distancia);
	
	distancia/tempo >= 110? printf("superior"): printf("inferior");

	return 0;

}