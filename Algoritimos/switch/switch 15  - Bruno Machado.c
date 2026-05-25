#include<stdio.h>
 	
int main(){

/*
Fazer um algoritmo que leia a 
quantidade e o código do item
pedido, e calcule o valor a ser
pago. Considere que em cada execução 
somente será calculado um tipo de item.
O algoritmo deve escrever a descrição do 
produto pedido, a quantidade, o valor unitário 
e o total a ser pago. 
*/

 	printf("            CARDAPIO \n");
 	printf("Descricao               Codigo  Preco  \n");
 	printf("Café expresso pequeno   100     2.00 R$\n");
 	printf("Café expresso grande    101     3.00 R$\n");
 	printf("Café com leite pequeno  102     2.50 R$\n");
 	printf("Café com leite grande   103     3.50 R$\n");
 	printf("Água sem gás (200 ml)   104     1.50 R$\n");
 	printf("Água com gás (500 ml)   105     2.40 R$\n");
 	
 	int id;
 	float preco, quantidade;
    
    printf("digite o codigo do seu pedido:");
    scanf("%d", &id);
    
    printf("digite a quantidade do seu pedido:");
    scanf("%f", &quantidade);
    

	switch(id){
	
		case 100:{
			preco = 2;
			printf("O seu pedido de %.0f Café expresso pequeno de %.2f R$ fica um total de %.2f R$", quantidade, preco, preco * quantidade);
			break;
		}
		case 101:{
			preco = 3;
			printf("O seu pedido de %.0f Café expresso grande de %.2f R$ fica um total de %.2f R$", quantidade, preco, preco * quantidade);
			break;
		}
		case 102:{
			preco = 2.5;
			printf("O seu pedido de %.0f Café com leite pequeno de %.2f R$ fica um total de %.2f R$", quantidade, preco, preco * quantidade);
			break;
		}
		case 103:{
			preco = 3.5;
			printf("O seu pedido de %.0f Café com leite grande de %.2f R$ fica um total de %.2f R$", quantidade, preco, preco * quantidade);
			break;
		}
		case 104:{
			preco = 1.5;
			printf("O seu pedido de %.0f Água sem gás (200 ml) de %.2f R$ fica um total de %.2f R$", quantidade, preco, preco * quantidade);
			break;
		}
		case 105:{
			preco = 2.4;
			printf("O seu pedido de %.0f Água com gás (500 ml) de %.2f R$ fica um total de %.2f R$", quantidade, preco, preco * quantidade);
			break;
		}
		
	}

	return 0;
}