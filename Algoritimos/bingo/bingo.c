#include<stdio.h>
#include <stdlib.h>
#include<time.h>

//AHA'S BINGO: O Bingo dos Cidadaos
//Bruno Valcarenghi Machado e Davi Froemming de Menezes

int gerar(int m[3][5]){
	
	//essa funcao gera uma cartela
	
	int i, j, k, l, x;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 5; j++){	
		
			//gera um numero aleatorio
			m[i][j] = (rand() % 60) + 1;
			
			x = 0;
			
			for(k = 0; k < i; k++){
				for(l = 0; l < 5; l++){
					
					//verifica se o numero ja existe na cartela
					if (m[i][j] == m[k][l])
                	x = 1;

				}
			}
			
			if(x == 1){
				
				//caso o numero exista na cartela, o laco de repeticao volta e gera outro numero
				j--;
			
			}
		
		}
	}	

}

int print(int m[3][5]){
	
	//essa funcao mostra na tela uma cartela
	
	int i, j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 5; j++){
	
			printf("%d \t", m[i][j]);
			
		}
		
		printf("\n");
	}
	
	printf("\n");

}

int roleta(int numeros[60], int n){
	
	
	
		int i;
		
			//essa funcao sorteia um numero
		
	        numeros[n] = rand() % 60 + 1;
	        
	        for (i = 0; i < n; i++) {
	        	
	            if (numeros[n] == numeros[i]){
	            	
	            	//se o numero ja tiver sido sorteado, sorteia outro
					//e volta o laco de repeticao ao inicio
						            	
	            	numeros[n] = rand() % 60 + 1;
	            	i = 0;
	            			            	
	       		}
	        }
	        
	//mostra na tela o numero sorteado        
	        
	printf("                @@@@@ \n");
	printf("          @@@@@@@@ @@@@@@@@ \n");
	printf("       @@@@  @@@     @@@  @@@ \n");
	printf("      @@@    @@       @@    @@@ \n");
	printf("     @@@@@@@@@@@@@@@@@@@@@@@@@@@  \n");
	printf("    @@@     @@@       @@@     @@@ \n");
	printf("    @@@     @@@       @@@     @@@@@@@@ \n");
	printf("    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@  @@@  \n");
	printf("    @@@@@    @@       @@    @@@@@  @@@@@ \n");
	printf("    @@@@@@@  @@@     @@@  @@@@@@@ \n");
	printf("    @@@   @@@@@@@   @@@@@@@   @@@ \n");
	printf("    @@@        @@@@@@@        @@@ \n");
	printf("    @@@                       @@@ \n");
	if(numeros[n] < 10){
	printf("    @@@       	 0%d           @@@ \n", numeros[n]);
	}
	else{
	printf("    @@@       	 %d           @@@ \n", numeros[n]);
	}
	printf("    @@@                       @@@ \n");
	printf("    @@@        @@@@@@@        @@@ \n");
	printf("    @@@        @@@@@@@        @@@ \n");
	printf("  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ \n");		
    
    n++;
    
    char enter;
    printf("\nEnter para conferir as cartelas: \n");
	scanf("%c", &enter);
    
    //retorna a quantidade de numeros ja sorteados
    return n;
	
}

int checar(int c1[3][5], int c2[3][5], int c3[3][5], int numeros[5], int n, int r[3]){
	
	//funcao que confere as cartelas
	
	int i, j;

	for(i = 0; i < 3; i++){
		for(j = 0; j < 5; j++){
	
			if(c1[i][j] == numeros[n-1]){
				
				//se o numero sorteado estiver na cartela sera marcado com um zero
				//soma 1 ponto ao jogador
				
				c1[i][j] = 0;
				r[0]++;
			
			}
			
			if(c2[i][j] == numeros[n-1]){
			
				c2[i][j] = 0;
				r[1]++;
			
			}
			
			if(c3[i][j] == numeros[n-1]){
			
				c3[i][j] = 0;
				r[2]++;
			
			}
			
		}
	}
	

}

int main(){
	
	srand(time(NULL));
	
	char enter;
	
	printf("       AHA'S BINGO \n");
	printf("Aperte enter para iniciar");
	scanf("%c", &enter);
	
	int c1[3][5], c2[3][5], c3[3][5], numeros[60], r[3] = {0, 0, 0}, n = 0, v = 1;
	
	
	//gera as 3 cartelas
	gerar(c1);
	gerar(c2);
	gerar(c3);
	
	//inicia o jogo
	//laco para repetir o jogo enquanto ninguem ganhar
	while(v == 1){ 
		
		//mostra as 3 castelas na tela
		
		printf("\nCartela jogador 1: %d acertos\n\n", r[0]);
		print(c1);
		
		printf("\nCartela jogador 2: %d acertos\n\n", r[1]);
		print(c2);
		
		printf("\nCartela jogador 3: %d acertos\n\n", r[2]);
		print(c3);
		
		printf("\nEnter para girar a roleta: \n");
		scanf("%c", &enter);
		
		//sorteia um numero
		n = roleta(numeros, n);
		
		//confere as cartelas
		checar(c1, c2, c3, numeros, n, r);
		
		//se um dos jogadores completar a cartela o jogo acaba
		
		if(r[0] == 15){
			
			printf("\nBINGO! JOGADOR 1 COMPLETOU A CARTELA\n");
			v = 0;
		
		}
		if(r[1] == 15){
			
			printf("\nBINGO! JOGADOR 2 COMPLETOU A CARTELA\n");
			v = 0;
		
		}
		if(r[2] == 15){
			
			printf("\nBINGO! JOGADOR 3 COMPLETOU A CARTELA\n");
			v = 0;
			
		}
		
	}
	
	//mostra o resultado do jogo
	
	printf("\nForam sorteados %d numeros:\n", n);
	
	for (v = 0; v < n; v++) {
	        	
	    printf("%d ", numeros[v]);
	             
	}
	
	return 0;

}
