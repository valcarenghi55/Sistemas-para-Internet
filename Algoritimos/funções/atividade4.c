#include<stdio.h>

int parametro(int x);

int main(){

	int x, r;
	
	printf("Digite um valor a ser passado por parametro: ");
	scanf("%d", &x);

	printf("%d", parametro(x));
	
	return 0;

}

int parametro(int x){

	int y, r;
	printf("Digite um valor dentro da funcao: ");
	scanf("%d", &y);
	
	if (x > y){
	
		r = 1;
	
	}
	else{
	
		r = 0;
	
	}
	
	return r;

}