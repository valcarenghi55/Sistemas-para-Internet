#include<stdio.h>
#include<stdlib.h>

//esse algoritimo permite a criacao de varios caminhos com os mesmos origem e destino
//o grafo ja inicia com 6 vertices onde o elemento 0 tem grau 3 e o elemento 1 tem grau 2, conforme o enunciado

int ID = 0;

struct adj{

	int id;
	struct adj *prox;

};

struct no{

	int id;
	int info;
	struct no *prox;
	struct adj *sucessores;

};

struct no *inserir(struct no *l, int info){

	struct no *novo = (struct no*) malloc(sizeof(struct no));
	
	novo->id = ID;
	novo->info = info;
	novo->prox = NULL;
	novo->sucessores = NULL;
	
	ID++;
	
	if(l == NULL){
	
		return novo;

	}
	
	struct no *aux = l;
	
	while(aux->prox != NULL){
		
		aux = aux->prox;
	
	}
	
	aux->prox = novo;
	
	return l;
		
}

void imprimir(struct no *l){
	
	struct no *aux = l;
	struct adj *auj;
	while(aux != NULL){
	
		printf("Elemento %d: valor %d\n", aux->id, aux->info);
		
		if(aux->sucessores != NULL){
			
			printf("-Sucessores:\n");
			
			auj = aux->sucessores;
			while(auj != NULL){
			
				printf(" *Elemento %d\n", auj->id);
				auj = auj->prox;
			
			}
			
		}
		
		printf("\n");
		
		aux = aux->prox;
		
	}

}

int ligar(struct no *l, int origem, int destino){

	struct no *predecessor = NULL;
	struct no *sucessor = NULL;
	
	struct no *aux = l;
	while(aux != NULL){
	
		if(aux->id == origem){
		
			predecessor = aux;
		
		}
		if(aux->id == destino){
		
			sucessor = aux;
		
		}
		aux = aux->prox;
	
	}
	if(predecessor == NULL || sucessor == NULL){
		
		if(predecessor == NULL && sucessor == NULL){
		
			printf("Origem e destino nao encontrados\n");
		
		}
		else if(predecessor == NULL){
		
			printf("Origem nao encontrada\n");
			
		}
		else {
		
			printf("Destino nao encontrado\n");
			
		}
		return 0;
	
	}
	
	struct adj *nova = (struct adj*) malloc(sizeof(struct adj));
	nova->id = destino;
	nova->prox = NULL;
	
	if(predecessor->sucessores == NULL){
	
		predecessor->sucessores = nova;
		return 1;
	
	}
	
	struct adj *auj = predecessor->sucessores;
	
	while(auj->prox != NULL){
		
		auj = auj->prox;
	
	}
	
	auj->prox = nova;
	
	return 1;

}

void interagir(struct no *l){
	
	int x = 1, y;
	
	while(x > 0){
		
		printf("\tGrafo Orientado Dinamico\n\n");
		
		printf("Digite a operacao\n\n");
		printf("(1)Inserir novo elemento\n");
		printf("(2)Criar novo caminho\n");
		printf("(3)Ver Grafo\n");
		printf("(0)Sair\n\n");
		
		scanf("%d", &x);
		
		system("cls");
		
		switch(x){
			
			case 1:{
				
				printf("Digite o valor para o novo elemento: ");
				scanf("%d", &y);
				l = inserir(l, y);
				
				break;
				
			}
			
			case 2:{
				
				printf("Digite a origem do novo caminho: ");
				scanf("%d", &x);
				
				printf("Digite o destino do novo caminho: ");
				scanf("%d", &y);
				
				ligar(l, x, y);
				x = 1;
				
				break;
				
			}
				
			case 3:{
				
				imprimir(l);
				break;
				
			}
			
			case 0:{
			
				exit(0);
				break;
			
			}
			
			default:{
			
				printf("Opcao nao encontrada...\n\n");
				break;
				
			}
		
		
		}
		
		system("pause");
		system("cls");
	
	}

}

int main(){

	struct no *l = NULL;
	
	//nos
	l = inserir(l, 5);
	l = inserir(l, 10);
	l = inserir(l, 7);
	l = inserir(l, 15);
	l = inserir(l, 30);
	l = inserir(l, 20);
	
	//arestas
	ligar(l, 0, 1);
	ligar(l, 0, 2);
	ligar(l, 0, 3);
	ligar(l, 1, 2);
	ligar(l, 1, 3);
	
	interagir(l);
	
	return 0;
	
}
