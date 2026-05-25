#include<stdio.h>

int funcao(int x, int y, int z);

int main(){

	int anos, meses, dias;

	printf("Digite quantos anos voce tem: \n");
	scanf("%d", &anos);
	
	printf("Digite quantos meses voce tem: \n");
	scanf("%d", &meses);
	
	printf("Digite quantos dias voce tem: \n");
	scanf("%d", &dias);
	
	int r = funcao(anos, meses, dias);
	
	printf("%d", r);
	
	return 0;
	
}

int funcao(int x, int y, int z){
	
	int r = x * 365 + y * 12 + z;
	return r;

}

