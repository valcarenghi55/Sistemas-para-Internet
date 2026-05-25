#include<stdio.h>
#include<stdlib.h>

struct lista{

	struct lista *a;
	
	int info;
	
	struct lista *p;

};

struct lista *inserir(struct lista *l, int i){

	struct lista *novo = (struct lista *) malloc(sizeof(struct lista));
	
	if(l == NULL){
		
		novo->a = NULL;
		novo->p = NULL;
		novo->info = i;
		
		return novo;
	
	}

	struct lista *al = NULL;
	struct lista *pl = l;
	
	while(pl != NULL){
		
		al = pl;
		pl = pl->p;
	
	}
	
	al->p = novo;
	novo->a = al;
	novo->p = NULL;
	novo->info = i;
	
	return l;

}

void imprimir(struct lista *l){
	
	struct lista *pl = l;
	while(pl != NULL){
		
		printf("%d ", pl->info);
		pl = pl->p;
	
	}
	
	printf("\n");

}

int main(){

	struct lista *l = NULL;

	l = inserir(l, 1);
	l = inserir(l, 2);
	l = inserir(l, 3);
	l = inserir(l, 4);
	imprimir(l);

	return 0;

}

