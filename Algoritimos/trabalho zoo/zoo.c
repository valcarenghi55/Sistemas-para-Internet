#include<stdio.h>
#include<string.h>

int i = 0; //variavel global para lacos de repeticao
int n = 0; //variavel global com o numero de animais cadastrados

struct cadastro{

	int id;
	char raca[40];
	char data[10]; // xx/xx/xxxx
	char sexo;
	int idade;

}animais[100];

void cadastrar(){
	
	printf("\nCadastrar animal: \n\n");
	
	printf("Digite o codigo identificador do novo animal: ");
	int x = 0;
	while(x == 0){
		
		scanf("%d", &animais[n].id);
		
		for(i = 0; i < n; i++){
		
			if(animais[n].id == animais[i].id){
			
				i = n; //para o laco de repeticao for
				
				printf("codigo identificador ja existente, tente novamente: \n");
				
			
			}
			else{
			
				x++;

			}
			
		}
		
		if(n == 0){ x++; } //caso o laco seja executado pela primeira vez
	
	}
	
	printf("Digite a raca do animal %d: ", animais[n].id);
	fflush(stdin);
	gets(animais[n].raca);
	
	printf("Digite a data de entrada do animal %d (xx/xx/xxxx): ", animais[n].id);
	fflush(stdin);
	gets(animais[n].data);
	
	printf("Digite o sexo do animal %d: ", animais[n].id);
	x = 0;
	while(x == 0){
		
		scanf("%c", &animais[n].sexo);
		
		if(animais[n].sexo == 'F' || animais[n].sexo == 'f' || animais[n].sexo == 'M' || animais[n].sexo == 'm'){
			
			if(animais[n].sexo == 'f'){ animais[n].sexo = 'F'; }
			if(animais[n].sexo == 'm'){ animais[n].sexo = 'M'; }
			
			x++;
		
		}
		else{
			
			printf("Sexo nao reconhecido, Digite F para femea ou M para macho: \n");

		}
	
	}
	
	printf("Digite a idade do animal %d: ", animais[n].id);
	scanf("%d", &animais[n].idade);
	
	printf("\nAnimal %d cadastrado com sucesso! \n\n", animais[n].id);
	
	n++;

}

void relatorio(){
	
	if(n == 0){
	
		printf("\nNenhum animal cadastrado \n");
	
	}
	
	printf("\n");
	
	for(i = 0; i < n; i++){
	
		printf("Animal %d: \n", animais[i].id);
		printf("Raca: %s \n", animais[i].raca);
		printf("Data de entrada: %s \n", animais[i].data);
		if(animais[i].sexo == 'M'){ 
		
			printf("Sexo: macho \n");
		}
		else{ 
		
			printf("Sexo: femea \n");
		
		}
		printf("Idade: %d \n\n", animais[i].idade);
	
	}

}

void pesquisaraca(char raca[40]){
	
	printf("\n");
	
	int x = 0;
	
	for(i = 0; i < n; i++){
	
		if(strcmp(animais[i].raca, raca) == 0){
			
			printf("Animal %d: \n", animais[i].id);
			printf("Data de entrada: %s \n", animais[i].data);
			if(animais[i].sexo == 'M'){ 
		
				printf("Sexo: macho \n");
			}
			else{ 
			
				printf("Sexo: femea \n");
			
			}
			printf("Idade: %d \n\n", animais[i].idade);
			
			x++;
			
		}
	}
	
	if(x == 0){
	
		printf("Nenhum animal com essa raca cadastrado \n\n");
	
	}


}

void pesquisasexo(char sexo){
	
	printf("\n");
	
	int x = 0;
	
	for(i = 0; i < n; i++){
	
		if(animais[i].sexo == sexo){
			
			printf("Animal %d: \n", animais[i].id);
			printf("Data de entrada: %s \n", animais[i].data);
			printf("Raca: %s \n", animais[i].raca);
			printf("Idade: %d \n\n", animais[i].idade);
			
			x++;
			
		}
	}
	
	if(x == 0){
	
		printf("Nenhum animal com esse sexo cadastrado \n\n");
	
	}

}	

void pesquisar(){
	
	if(n == 0){
	
		printf("Nenhum animal cadastrado \n\n");
	
	}
	else{
		
		printf("a- Pesquisar por raca \nb- Pesquisar por sexo \n");
		
		int s = 0;
		char z;
		char raca[40];
		char sexo;
		fflush(stdin);
		scanf("%c", &z);
					
		switch(z){
			
			case 'a':{
							
				printf("Digite a raca a pesquisar: \n");
				fflush(stdin);
				gets(raca);
				
				pesquisaraca(raca);
				
				break;
							
			}
			case 'b':{
					
				printf("Digite o sexo a pesquisar: \n");
				fflush(stdin);
				scanf("%c", &sexo);
				pesquisasexo(sexo);	
				
				break;
							
			}
			default:{
					
				printf("Opcao nao encontrada, tente novamente. \n\n");
				break;
						
			}
						
		}
		
	}
	
}

totalsexo(char sexo){
	
	printf("\n");
			
	int x = 0;
	
	for(i = 0; i < n; i++){
			
		if(animais[i].sexo == sexo){
			
			x++;
			
		}
	}
		
	if(x == 0){
		
		printf("Nenhum animal com esse sexo cadastrado \n\n");
		
	}
	else{
		
		printf("%d animais com esse sexo cadastrado \n\n", x);
		
	}

}

mediasexo(char sexo){

	printf("\n");
	
	int x = 0, total = 0;
	float media;
	
	for(i = 0; i < n; i++){
	
		if(animais[i].sexo == sexo){
			
			total += animais[i].idade;
			x++;
			
		}
	}
	
	media = total / x;
	
	if(x == 0){
	
		printf("Nenhum animal com esse sexo cadastrado \n\n");
	
	}
	else{
	
		printf("a media de idade deste sexo e %.2f \n\n", media);
	
	}

}

void porsexo(){
	
	if(n == 0){
	
		printf("Nenhum animal cadastrado \n\n");
	
	}
	else{
		
		printf("a- Apresentar total de animais por sexo \nb-Apresentar a média de idade de animais por sexo \n");
		
		int s = 0;
		char z;
		char sexo;
		fflush(stdin);
		scanf("%c", &z);
					
		switch(z){
			
			case 'a':{
							
				printf("Digite o sexo(M ou F): \n");
				fflush(stdin);
				scanf("%c", &sexo);
				totalsexo(sexo);
				
				break;
							
			}
			case 'b':{
					
				printf("Digite o sexo(M ou F): \n");
				fflush(stdin);
				scanf("%c", &sexo);
				mediasexo(sexo);	
				
				break;
							
			}
			default:{
					
				printf("Opcao nao encontrada, tente novamente. \n\n");
				break;
						
			}
						
		}
		
	}
	
}

int main(){
	
	printf("AHA'S ZOOLOGICO \n\n");
	
	int x = 0, y;
	while(x == 0){
	
		printf("Menu: \n\n1- Cadastrar animal \n2- Pesquisar \n3- Relatorio \n4- Animais por sexo \n5- Sair \n");
		scanf("%d", &y);

		switch(y){
		
			case 1:{
				
				cadastrar();
				break;
			
			}
			case 2:{
				
				pesquisar();
				break;
			
			}
			case 3:{
				
				relatorio();
				break;
			
			}
			case 4:{
				
				porsexo();
				break;
			
			}
			case 5:{
				
				x = 1;
				break;
			
			}
			default:{
				
				printf("Opcao nao encontrada, tente novamente. \n\n");
				break;
			
			}
		
		}
	
	}
	
	return 0;

}
