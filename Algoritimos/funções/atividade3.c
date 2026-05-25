#include<stdio.h>

void valores(int a, int b, int c);

int main(){

	int a, b, c;
	
	printf("Digite tres valores");
	scanf("%d %d %d", &a, &b, &c);
	
	valores(a, b, c);
	
	return 0;

}

void valores(int a, int b, int c){

	int maior, menor;
	
	if(a > b && a > c){
	
		maior = a;
		if(b > c){
		
			menor = c;
		
		}
		else{
		
			menor = b;
		
		}
	
	}
	else if(b > c && b > a){
	
		maior = b;
		if(a > c){
		
			menor = c;
		
		}
		else{
		
			menor = a;
		
		}
		
	}
	else{
	
		maior = c;
		if(a > b){
		
			menor = b;
		
		}
		else{
		
			menor = a;
		
		}
		
	}
	
	a = maior;
	c = menor;
	
	printf("Maior valor: %d \n", a);
	printf("Menor valor: %d \n", c);

}


