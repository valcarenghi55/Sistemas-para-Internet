#include<stdio.h>

float funcao1(float preco, float desconto);
float funcao2(float desconto, float quantidade);

int main(){

	printf("Escolha o produto que voce quer comprar: \n");
	printf("1. Produto1 - R$ 2,00 \n");
	printf("2. Produto2 - R$ 5,00 \n");
	printf("3. Produto3 - R$ 10,00 \n");
	printf("4. Produto4 - R$ 70,00 \n");
	printf("5. Produto5 - R$ 150,00 \n");
	
	int produto, cupom, quantidade;
	float preco, desconto;
	
	do{
		
		scanf("%d", &produto);
		
		switch(produto){
			case 1:{
				preco = 2;
				break;
			}
			case 2:{
				preco = 5;
				break;
			}
			case 3:{
				preco = 10;
				break;
			}
			case 4:{
				preco = 70;
				break;
			}
			case 5:{
				preco = 150;
				break;
			}
			default:{
				printf("Produto nao identificado, tente novamente \n");
				break;
			}
		}
	
	}while(produto < 1 || produto > 5);
	
	printf("\nEscolha o cupom de desconto: \n");
	printf("1. cumpom1 - 2%% \n");
	printf("2. cumpom2 - 5%% \n");
	printf("3. cumpom3 - 12%% \n");
	
	do{
		
		scanf("%d", &cupom);
		
		switch(cupom){
			case 1:{
				desconto = 0.02;
				break;
			}
			case 2:{
				desconto = 0.05;
				break;
			}
			case 3:{
				desconto = 0.12;
				break;
			}
			default:{
				printf("Cupom nao identificado, tente novamente \n");
				break;
			}
		}
	
	}while(cupom < 1 || cupom > 3);
	
	float valor_desconto, valor_total;
	
	printf("\nDigite a quantidade que deseja comprar: ");
	scanf("%d", &quantidade);
	
	printf("\nValor unitario do produto: %.2f R$", preco);
	
	desconto = funcao1(preco, desconto);
	printf("\nDesconto: %.2f R$", desconto);
	
	valor_desconto = preco - desconto;
	printf("\nValor unitario com desconto: %.2f R$", valor_desconto);
	
	valor_total = funcao2(valor_desconto, quantidade);
	printf("\nValor total: %.2f R$", valor_total);
	
	return 0;
	

}

float funcao1(float preco, float desconto){
	
	desconto = preco * desconto;
	
	return desconto;

}

float funcao2(float valor_desconto, float quantidade){
	
	float valor_total;
	
	valor_total = valor_desconto * quantidade;
	
	return valor_total;

}

