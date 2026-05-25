#include<stdio.h>

int main(){

	int x = 0;
	int y = 1;
	int i, z;

	for(i = 0; i < 15; i++){
	
		printf("%d \n", x);
		z = y;
		y = x + y;
		x = z;
		
	}

	return 0;

}