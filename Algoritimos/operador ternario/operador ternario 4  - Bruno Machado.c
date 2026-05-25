#include<stdio.h>

int main(){
	
	int x, resto;
	
	
	printf("digite um valor \n");
	scanf("%d", &x);
	
	resto = x % 7;
	
	resto == 0? printf("divisivel por 7"): printf("nao divisivel por 7");
	

	return 0;


}