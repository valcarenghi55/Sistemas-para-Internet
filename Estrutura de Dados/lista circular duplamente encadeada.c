#include<stdio.h>
#include<stdlib.h>

struct lista{

	struct lista *a;
	
	int info;
	
	struct lista *p;

};

struct lista *inserir(struct lista *l, int i){

	struct lista *novo = (struct lista *) malloc(sizeof(struct lista));
	
	//primeiro a ser inserido: aponta pra ele mesmo
	if(l == NULL){
		
		novo->a = novo;
		novo->p = novo;
		novo->info = i;
		
		return novo;
	
	}
	//segundo a ser inserido: um aponta para o outro
	else if(l == l->p){
		
		l->a = novo;
		l->p = novo;
		
		novo->a = l;
		novo->p = l;
		novo->info = i;
	
	}
	//terceiro+ a ser inserido: vai ate o final da lista e ajusta
	else{
		
		struct lista *al = NULL;
		struct lista *pl = l;
		
		while(pl->p != l){

			pl = pl->p;
		
		}
		
		l->a = novo;
		pl->p = novo;
		
		novo->p = l;
		novo->a = pl;
		novo->info = i;
			
	}
	
	return l;
	
}

void imprimir(struct lista *l){
	
	struct lista *pl = l;
	int x = 0;
	while(x == 0){
		
		printf("%d ", pl->info);
		pl = pl->p;
		
		if(pl == l){
			
			x++;
			
		}
	
	}
	
	printf("\n");

}

int main(){

	struct lista *l = NULL;

	l = inserir(l, 1);
	l = inserir(l, 2);
	l = inserir(l, 3);
	l = inserir(l, 4);
	l = inserir(l, 5);

	imprimir(l);

	return 0;

}

