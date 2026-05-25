#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

struct lista{				

	struct lista *a;
	
	char letra;
	char nome[60];
	
	int apoio;
	int tempo;
	int persuasao;
	
	struct lista *p;

};

struct lista *b = NULL;		//lista baralho
struct lista *p1 = NULL;	//jogador1
struct lista *p2 = NULL; 	//jogador2


struct lista *inserir(struct lista *l, char letra, char* nome, int apoio, int tempo, int persuasao){

	struct lista *novo = (struct lista *) malloc(sizeof(struct lista));
	
	//primeiro a ser inserido: aponta pra ele mesmo
	if(l == NULL){
		
		novo->a = novo;
		novo->p = novo;
		
		novo->letra = letra;
		strcpy(novo->nome, nome);
		
		novo->apoio = apoio;
		novo->tempo = tempo;
		novo->persuasao = persuasao;
		
		return novo;
	
	}
	//segundo a ser inserido: um aponta para o outro
	else if(l == l->p){
		
		l->a = novo;
		l->p = novo;
		
		novo->a = l;
		novo->p = l;
		
		novo->letra = letra;
		strcpy(novo->nome, nome);
		
		novo->apoio = apoio;
		novo->tempo = tempo;
		novo->persuasao = persuasao;
	
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
		
		novo->letra = letra;
		strcpy(novo->nome, nome);
		
		novo->apoio = apoio;
		novo->tempo = tempo;
		novo->persuasao = persuasao;
			
	}
	
	return l;
	
}

void imprimir(struct lista *l){
	
	//lista vazia
	if(l == NULL){
	
		printf("Lista vazia");
		printf("\n");
	
	}
	//lista com 1 elemento
	else if(l == l->p){
	
		printf("[%c] %d %d %d \t", l->letra, l->apoio, l->tempo, l->persuasao);
		puts(l->nome);
	
	}
	//lista com varios elementos
	else{
		
		struct lista *pl = l;
		int x = 0;
		while(x == 0){
			
			printf("[%c] %d %d %d \t", pl->letra, pl->apoio, pl->tempo, pl->persuasao);
			puts(pl->nome);
			pl = pl->p;
			
			if(pl == l){
				
				x++;
				
			}
		}
	}
	
	printf("\n");

}

struct lista *criarbaralho(struct lista *b);

struct lista *remover(struct lista *l){
	
	//ultimo elemento a ser removido
	if(l == l->p){
		
		free(l);
		return NULL;
	
	}
	
	struct lista *r = l;
	
	l->a->p = l->p;
	l->p->a = l->a;
	
	l = l->p;
	
	free(r);
	
	return l;
	
}	

struct lista *embaralhar(struct lista *l){
	
	//numero de cartas
	int n = 28;
	
	struct lista *pl = l;
	
	//enquanto tiver cartas no baralho
	while(n > 0){
		
		//numero aleatorio de 0 a n
		int x = rand() % n;
		
		while(x > 0){
			
			pl = pl->p;
			x--;
		
		}
		
		//da uma carta para o jogador 
		if(n % 2 == 0){
		
			p1 = inserir(p1, pl->letra, pl->nome, pl->apoio, pl->tempo, pl->persuasao);
		
		}
		else{
		
			p2 = inserir(p2, pl->letra, pl->nome, pl->apoio, pl->tempo, pl->persuasao);
		
		}
		
		//retira ela do baralho
		pl = remover(pl);
		n--;
		
	}
	
	return pl;
	
}

void jogo(int x){
	
	if(x == 3){
		x = rand() % 2; //começo aleatorio
	}
	
	printf("\n");
	system("pause");
	system("cls");
	
		printf("\n\nJogador 1\n\n");

puts(p1->nome);

printf(" ---------------\n");
printf("|\t\t|\n");
printf("|Letra:\t%c\t|\n", p1->letra);
printf("|\t\t|\n");
printf("|Apoio:\t%d\t|\n", p1->apoio);
printf("|Tempo:\t%d\t|\n", p1->tempo);
printf("|Pers:\t%d\t|\n", p1->persuasao);
printf("|\t\t|\n");
printf(" ---------------\n");


printf("------------------------------------------------------------------\n Jogador 2 \n\n");

puts(p2->nome);

printf(" ---------------\n");
printf("|\t\t|\n");
printf("|Letra:\t%c\t|\n", p2->letra);
printf("|\t\t|\n");
printf("|Apoio:\t%d\t|\n", p2->apoio);
printf("|Tempo:\t%d\t|\n", p2->tempo);
printf("|Pers:\t%d\t|\n", p2->persuasao);
printf("|\t\t|\n");
printf(" ---------------\n");


	
	//checar super trunfo e escolher um atrivuto
	if(p1->letra == 'S' || p2->letra == 'S'){
		
		if(p1->letra == 'S'){
			
			printf("\n Jogador 1 esta com o super trunfo ");
			
			if(p2->letra == 'A'){
				
				printf("e perdeu, pois a carta do Jogador 2 eh A!! \n");
				x = 1;
				
				p2 = inserir(p2, p1->letra, p1->nome, p1->apoio, p1->tempo, p1->persuasao);
					p2 = p2->p;
					p1 = remover(p1);
				
			}
			else{
				
				p1 = inserir(p1, p2->letra, p2->nome, p2->apoio, p2->tempo, p2->persuasao);
				p1 = p1->p;
				p2 = remover(p2);
				printf("por isso ganhou!! \n");
				x = 0;
				
			}
			
		}
		else if(p2->letra == 'S'){
			
			printf("\n Jogador 2 esta com o super trunfo ");
			
			if(p1->letra == 'A'){
				
				p1 = inserir(p1, p2->letra, p2->nome, p2->apoio, p2->tempo, p2->persuasao);
				p1 = p1->p;
				p2 = remover(p2);
				printf("e perdeu, pois a carta do Jogador 1 eh A!! \n ");
				x = 0;
				
			}
			else{
				
				printf("por isso ganhou!! \n ");
				p2 = inserir(p2, p1->letra, p1->nome, p1->apoio, p1->tempo, p1->persuasao);
				p2 = p2->p;
				p1 = remover(p1);
				x = 1;
				
			}
			
		}
	
	}
	//escolha de atributo
	else{
		
		int escolha;
		
		if(x == 0){
			
			if(p1->apoio >= p1->tempo && p1->apoio >= p1->persuasao){ 
	    		escolha = 1; 
	    		 
			} 
			else if(p1->tempo >= p1->apoio && p1->tempo >= p1->persuasao){ 
	    		escolha = 2; 
	     
			} 
			else{ 
	    		escolha = 3; 
	     
			}
		}
		else{
	
			if(p2->apoio >= p2->tempo && p2->apoio >= p2->persuasao){ 
	    		escolha = 1; 
	    		 
			} 
			else if(p2->tempo >= p2->apoio && p2->tempo >= p2->persuasao){ 
	    		escolha = 2; 
	     
			} 
			else{ 
	    		escolha = 3; 
	     
			}
		}
		
		//jogo
		
		switch(escolha){
			case 1: 
				if(p1->apoio > p2->apoio){
					printf("\nO jogador 1 ganhou a rodada pelo atributo apoio popular! \t\t %d > %d \n", p1->apoio, p2->apoio);
					p1 = inserir(p1, p2->letra, p2->nome, p2->apoio, p2->tempo, p2->persuasao);
					p1 = p1->p;
					p2 = remover(p2);
					x = 0;
				}
				else if(p1->apoio < p2->apoio){
					printf("\nO jogador 2 ganhou a rodada pelo atributo apoio popular! \t\t %d > %d \n", p2->apoio, p1->apoio);
					p2 = inserir(p2, p1->letra, p1->nome, p1->apoio, p1->tempo, p1->persuasao);
					p2 = p2->p;
					p1 = remover(p1);
					x = 1;
				}
				else{
					printf("\nEmpatou a rodada pelo atributo de apoio popular! \t\t %d = %d \n", p1->apoio, p2->apoio);
					p1 = p1->p;
					p2 = p2->p;
					x = 3;
				}
				break;
				
			case 2:
				if(p1->tempo > p2->tempo){
					printf("\nO jogador 1 ganhou a rodada pelo atributo tempo na politica! \t\t %d > %d \n", p1->tempo, p2->tempo);
					p1 = inserir(p1, p2->letra, p2->nome, p2->apoio, p2->tempo, p2->persuasao);
					p1 = p1->p;
					p2 = remover(p2);
					x = 0;
				}
				else if(p1->tempo < p2->tempo){
					printf("\nO jogador 2 ganhou a rodada pelo atributo tempo na politica! \t\t %d > %d \n", p2->tempo, p1->tempo);
					p2 = inserir(p2, p1->letra, p1->nome, p1->apoio, p1->tempo, p1->persuasao);
					p2 = p2->p;
					p1 = remover(p1);
					x = 1;
				}
				else{
					printf("\nEmpatou a rodada pelo atributo de tempo na politica! \t\t %d = %d \n", p1->tempo, p2->tempo);
					p1 = p1->p;
					p2 = p2->p;
					x = 3;
				}
				break;
			case 3:
				if(p1->persuasao > p2->persuasao){
					printf("\nO jogador 1 ganhou a rodada pelo atributo persuasao! \t\t %d > %d \n", p1->persuasao, p2->persuasao);
					p1 = inserir(p1, p2->letra, p2->nome, p2->apoio, p2->tempo, p2->persuasao);
					p1 = p1->p;
					p2 = remover(p2);
					x = 0;
				}
				else if(p1->persuasao < p2->persuasao){
					printf("\nO jogador 2 ganhou a rodada pelo atributo persuasao! \t\t %d > %d \n", p2->persuasao, p1->persuasao);
					p2 = inserir(p2, p1->letra, p1->nome, p1->apoio, p1->tempo, p1->persuasao);
					p2 = p2->p;
					p1 = remover(p1);
					x = 1;
				}
				else{
					printf("\nEmpatou a rodada pelo atributo de persuasao! \t\t %d = %d \n", p1->persuasao, p2->persuasao);
					p1 = p1->p;
					p2 = p2->p;
					x = 3;
				}
				break;	
		}
	}
	
	if(p1 != NULL && p2 != NULL){
	
		jogo(x);
	
	}
	
}

int main(){
	
	srand(time(NULL));
	
	b = criarbaralho(b);
	
	printf("Baralho: \n");
	imprimir(b);
	
	b = embaralhar(b);
	
	printf("Baralho depois de embaralhar: \n");
	imprimir(b);
	
	printf("Cartas Jogador 1: \n");
	imprimir(p1);
	
	printf("Cartas Jogador 2: \n");
	imprimir(p2);
	
	jogo(3);
	
	printf("\n \n Resultado final: \n\n\n");
	
	printf("Cartas Jogador 1: \n");
	imprimir(p1);
	
	printf("Cartas Jogador 2: \n");
	imprimir(p2);
	
	return 0;

}

struct lista *criarbaralho(struct lista *b){
	
	//Super Trunfo
	b = inserir(b, 'S', "Jorge Pozzobom", 8, 9, 7);
	
	//A
	b = inserir(b, 'A', "Valdeci Oliveira", 10, 9, 9);
	b = inserir(b, 'A', "Dr. Farret", 9, 10, 8);
	b = inserir(b, 'A', "Rodrigo Decimo", 8, 6, 8);
	
	//B
	b = inserir(b, 'B', "Roberta leitao", 9, 6, 10);
	b = inserir(b, 'B', "Riesgo", 7, 6, 7);
	b = inserir(b, 'B', "Professor Burmann", 7, 4, 6);
	b = inserir(b, 'B', "Alice Carvalho", 9, 6, 7);
	b = inserir(b, 'B', "Valdir Oliveira", 8, 7, 6);
	b = inserir(b, 'B', "Rudys Beer", 8, 6, 7);
	
	//C
	b = inserir(b, 'C', "Sergio Cechin", 6, 9, 7);
	b = inserir(b, 'C', "Alexandre Vargas", 6, 7, 5);
	b = inserir(b, 'C', "Admar Pozzobom", 7, 8, 5);
	b = inserir(b, 'C', "Tubias Calil", 7, 9, 5);
	b = inserir(b, 'C', "Sidi", 6, 5, 7);
	b = inserir(b, 'C', "Helen Cabral", 6, 8, 7);
	b = inserir(b, 'C', "Givago Canoa", 7, 6, 5);
	
	//D
	b = inserir(b, 'D', "Coronel Vargas", 6, 7, 5);
	b = inserir(b, 'D', "Marina Callegaro", 7, 5, 6);
	b = inserir(b, 'D', "Werner Rempel", 6, 7, 5);
	b = inserir(b, 'D', "Luiz Roberto", 5, 4, 7);
	b = inserir(b, 'D', "Lorenzo Pichinin", 6, 4, 7);
	b = inserir(b, 'D', "Tony Oliveira", 7, 6, 5);
	b = inserir(b, 'D', "Bisogno", 7, 8, 4);
	b = inserir(b, 'D', "Cuozzo", 5, 4, 8);
	b = inserir(b, 'D', "Fort", 5, 8, 4);
	b = inserir(b, 'D', "Adelar Vargas", 4, 7, 6);
	b = inserir(b, 'D', "Guilherme Badke", 6, 4, 7);
	
	return b;
}

