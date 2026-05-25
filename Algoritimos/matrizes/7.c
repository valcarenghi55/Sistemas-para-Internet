#include<stdio.h>

int main(){

	int a[3][4], i, ii;
	
	for(i = 0; i < 3; i++){
	
		for(ii = 0; ii < 4; ii++){
		
			a[i][ii] = i + ii;
	
		}
		
	}
	
	for(i = 0; i < 3; i++){
	
		for(ii = 0; ii < 4; ii++){
	
			printf("%d \t", a[i][ii]);
	
		}
		
		printf("\n");
	
	}
	

	return 0;

}
