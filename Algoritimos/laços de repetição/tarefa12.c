#include<stdio.h>

int main(){
	
	int x, y;
	
	printf("Digite um valor: ");
	scanf("%d", &x);
	
	y = x;
	
	while(x > 1){
	
		x--;
		y = y * x;
		
	}
	
	printf("o fatorial desse valor e igual a: %d", y);
	
	return 0;

}