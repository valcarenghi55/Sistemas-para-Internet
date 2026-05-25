#include<stdio.h>
#include<string.h>

int lerarquivo(char arquivo[256]){	
	
	int x, i, t, p, c;
	
	//os nomes de arquivo nao podem conter nenhum dos seguintes caracteres \ / : * ? " < > |
	do{
		
		x = 0;
		p = 0;
		c = 0;
	
		printf("Digite o nome e formato do seu arquivo(ex. trabalho-algoritmos.docx): \n");
		
		fflush(stdin);
		gets(arquivo);
		
		t = strlen(arquivo);
		
		for(i = t; i >= 0; i--){
		
			if(arquivo[i] == '.'){
			
				p++;
			
			}
			if (arquivo[i] == ' ' ||
				arquivo[i] == '\\'|| 
				arquivo[i] == '/' || 
				arquivo[i] == ':' || 
				arquivo[i] == '*' || 
				arquivo[i] == '?' || 
				arquivo[i] == '"' || 
				arquivo[i] == '<' || 
				arquivo[i] == '>' || 
				arquivo[i] == '|' ){
				
				c++;
				i = 0;
				
			}
		
		}
		
		if(c > 0 || p == 0){
		
			printf("Arquivo invalido! \n");
		
		}
		else{
			
			x++;
		
		}
	
	}while(x == 0);
	
	return t;

}

int formato(char arquivo[256], int t){
	
	char novo[256 - t];
	int i, x, p, c;
	
	for(i = t; i >= 0; i--){
		
		if(arquivo[i] == '.'){
			
			arquivo[i] = '\0';
			i = 0;
			
		}
	}
	
	do{
		
		x = 0;
		p = 0;
		c = 0;
	
		printf("\nDigite o novo formato(ex. .pdf): ");
		
		fflush(stdin);
		gets(novo);
		
		t = strlen(novo);
		
		for(i = t; i >= 0; i--){
		
			if(novo[i] == '.'){
			
				p++;
			
			}
			if (novo[i] == ' ' ||
				novo[i] == '\\'|| 
				novo[i] == '/' || 
				novo[i] == ':' || 
				novo[i] == '*' || 
				novo[i] == '?' || 
				novo[i] == '"' || 
				novo[i] == '<' || 
				novo[i] == '>' || 
				novo[i] == '|' ){
				
				c++;
				i = 0;
				
			}
		
		}
		
		if(c > 0 || p == 0){
		
			printf("Extensao invalida! \n");
		
		}
		else{
			
			x++;
		
		}
	
	}while(x == 0);
	
	strcat(arquivo, novo);
	
	puts(arquivo);
	
	t = strlen(arquivo);
	return t;

}

int nome(char arquivo[256], int t){

	char novo[256 - t];
	int i, x, c, p = 0;
	
	for(i = t; i > 0; i--){
		
		if(arquivo[i] == '.'){
			
			i = 0;
			
		}
				
		p++;
	}
	
	for(i = 0; i < p; i++){
		
		novo[i] = arquivo[i + 1 + t - p];	

	}
	
	do{
		
		x = 0;
		c = 0;
	
		printf("\nDigite o novo nome(ex. novo-nome): ");
		
		fflush(stdin);
		gets(arquivo);
		
		t = strlen(arquivo);
		
		for(i = t; i >= 0; i--){
			if (arquivo[i] == ' ' ||
				arquivo[i] == '\\'|| 
				arquivo[i] == '/' || 
				arquivo[i] == ':' || 
				arquivo[i] == '*' || 
				arquivo[i] == '?' || 
				arquivo[i] == '"' || 
				arquivo[i] == '<' || 
				arquivo[i] == '>' || 
				arquivo[i] == '|' ){
				
				c++;
				i = 0;
				
			}
		
		}
		
		if(c > 0){
		
			printf("Nome invalido! \n");
		
		}
		else{
			
			x++;
		
		}
	
	}while(x == 0);
	
	strcat(arquivo, novo);
	
	puts(arquivo);
	
	t = strlen(arquivo);
	return t;

}

int main(){
	
	//o Windows usa uma limitação de comprimento de caminho de 256 caracteres
	char arquivo[256];
	int t, y, x = 0;
	
	t = lerarquivo(arquivo);
	

	do{
	
		printf("\nDeseja fazer alguma alteracao? \n1-formato \n2-nome \n0-sair \n");
		scanf("%d", &y);
		
		switch(y){
		
			case 1:{
				
				t = formato(arquivo, t);
				break;
			
			}
			case 2:{
				
				t = nome(arquivo, t);
				break;
			
			}
			case 0:{
				
				x++;
				break;
			
			}
		
		}
		
		
	}while(x == 0);
	
	puts(arquivo);
	
	return 0;

}
