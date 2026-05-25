#include<stdio.h>
#include<stdlib.h>

int ID = 0;

struct adj{

	int id;
	struct adj *prx;

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
	
	struct no *ant = NULL;
	struct no *aux = l;
	
	while(aux != NULL){
		
		ant = aux;
		aux = aux->prox;
	
	}
	
	ant->prox = novo;
	
	return l;
		
}

void imprimir(struct no *l){
	
	struct no *aux = l;
	while(aux != NULL){
	
		printf("Elemento %d: valor %d\n", aux->id, aux->info);
		aux = aux->prox;
		
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
	
	
	imprimir(l);
	
	return 0;
	
}
