#include<stdio.h>
#include<stdlib.h>

struct pilha{

	int info;
	struct pilha *p;

};

struct pilha *inserir(struct pilha *l, int i){

	struct pilha *novo = (struct pilha *) malloc(sizeof(struct pilha));
	
	//caso seja o primeiro elemento a ser inserido
	if(l == NULL){
	
		novo->info = i;
		novo->p = NULL;
		return novo;
	
	}
	
	//se nao for o primeiro elemento, insere no final da pilha
	struct pilha *pl = l;
	
	while(pl->p != NULL){
		
		pl = pl->p;
		
	}
	
	pl->p = novo;
	novo->info = i;
	novo->p = NULL;
	
	return l;

}

struct pilha *remover(struct pilha *l){
	
	
	//se a pilha estiver vazia
	if(l == NULL){
	
		return l;
	
	}
	
	struct pilha *pl = l;
	
	//se a pilha possuir 2 ou mais elementos
	if(pl->p != NULL){
	
		while(pl->p->p != NULL){
			
			pl = pl->p;
			
		}
		
		free(pl->p);
		pl->p = NULL;
		
		return l;
		
	}
	
	//se a pilha possuir somente 1 elemento
	free(pl);
	l = NULL;
	return l;
	
	
}

void imprimir(struct pilha *l){
	
	if(l == NULL){
	
		printf("Pilha vazia");
	
	}
	else{
		
		struct pilha *pl = l;
		
		while(pl != NULL){
			
			printf("%d ", pl->info);
			pl = pl->p;
			
		}
	
	}
	
	printf("\n\n");

}

struct pilha *inverter(struct pilha *l, struct pilha *l2){
	
	//se a pilha a ser copiada estiver vazia
	if(l == NULL){
	
		return NULL;
	
	}
	
	//se a pilha a ser copiada possuir somente um elemento
	if(l->p == NULL){
		
		return l;
	
	}
	
	//se a pilha a ser copiada possuir 2 ou mais elementos
	struct pilha *pl = l;
	struct pilha *al;
	int x = 0, y = 0;
	
		//variaveis auxiliares y e z servem para nao modificar a lista original
	while(pl->p != NULL){
		
		pl = pl->p;	
		y++;
				
	}
	
	int z;
	
	while(x == 0){
		
		pl = l;
		z = y;
		
		while(z > 0){
			
			pl = pl->p;
			z--;
				
		}
		
		l2 = inserir(l2, pl->info);
		
		if(pl == l){
		
			x = 1;
		
		}
		
		y--;
		
	}
	
	return l2;
	
}

int main(){

	struct pilha *l = NULL;
	printf("Pilha criada: \n");
	imprimir(l);
	
	l = inserir(l, 1);
	l = inserir(l, 2);
	l = inserir(l, 3);
	l = inserir(l, 4);
	printf("Pilha com 4 elementos: \n");
	imprimir(l);

	l = remover(l);
	l = remover(l);
	printf("Pilha removendo 2 elementos: \n");
	imprimir(l);
	
	l = remover(l);
	l = remover(l);
	printf("Pilha removendo todos os elementos: \n");
	imprimir(l);
	
	l = remover(l);
	printf("Pilha tentando remover mais elementos do que a quantidade de elementos existentes: \n");
	imprimir(l);
	
	l = inserir(l, 1);
	l = inserir(l, 2);
	l = inserir(l, 3);
	l = inserir(l, 4);
	l = inserir(l, 5);
	printf("Pilha com 5 elementos: \n");
	imprimir(l);
	
	struct pilha *l2 = NULL;
	l2 = inverter(l, l2);
	printf("Pilha copia inversa da primeira: \n");
	imprimir(l2);
	
	printf("Pilha original intacta: \n");
	imprimir(l);

	return 0;

}
