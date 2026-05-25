#include<stdio.h>
#include<string.h>

int i;

struct loja{

	int id, estoque;
	float preco;
	char desc[100];

}calcados[1000];

int cadasto(){
	
	int j;
	char s;
	
	printf("Cadastre os calcados na loja: \n");
	
	for(i = 0, j = 0; i < 1000; i++, j++){
		
		calcados[i].id = i;
		
		printf("\nDigite o preco do produto codigo %d: ", calcados[i].id);
		scanf("%f", &calcados[i].preco);
		
		printf("Digite a descricao do produto codigo %d: ", calcados[i].id);
		fflush(stdin);
		gets(calcados[i].desc);
		
		printf("Digite a quantidade em estoque do produto codigo %d: ", calcados[i].id);
		scanf("%d", &calcados[i].estoque);
		
		printf("\nDigite 'S' para cadastrar outro produto: ");
		fflush(stdin);
		scanf("%c", &s);

		if(s != 'S' && s != 's'){
		
			i = 1000;
		
		}
		
	}
	
	fflush(stdin);
	
	return j;

}

void listagem(int j){
	
	int x;
	
	printf("\nDigite o numero do estoque que voce quer consultar: ");
	scanf("%d", &x);
	
	for(i = 0; i < j; i++){
	
		if(calcados[i].estoque <= x){
		
			printf("\nProduto %d: \nPreco = %.2f \nEstoque = %d \nDescricao = ", calcados[i].id, calcados[i].preco, calcados[i].estoque);
			puts(calcados[i].desc);
			
		}
	
	}

}

int main(){
	
	int j = cadasto();
	
	listagem(j);
	
	return 0;

}
