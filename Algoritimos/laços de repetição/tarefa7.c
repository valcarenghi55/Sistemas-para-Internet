#include<stdio.h>

int main(){

	int pessoa = 1;
	char sexo;
	float altura, media, media_mulheres, maior, menor;
	
	media_mulheres = 0;
	media = 0;
	maior = 0;
	menor = 100;

	while(pessoa <= 10){
		
		printf("Digite o genero pessoa %d (M ou F) \n", pessoa);
		scanf("%c", &sexo);
		printf("Digite a altura pessoa %d (em metros) \n", pessoa);
		scanf("%f", &altura);
		
		if (sexo == 'f' || sexo == 'F'){
			
			if (media_mulheres != 0){
				media_mulheres = (media_mulheres + altura)/2;
			}
			else{
				media_mulheres = media_mulheres + altura;
			}
		
		}
		
		if (media != 0){
			media = (media + altura)/2;
		}
		else{
			media = media + altura;
		}
		
		if (maior < altura){
			maior = altura;
		}
		if (menor > altura){
			menor = altura;
		}
		
		printf("A pessoa %d e do genero %c e tem %.2f m de altura \n \n", pessoa, sexo, altura);
		scanf("%c", &sexo);
		
		pessoa++;
		
	}
	
	printf("A maior altura e: %.2f \n", maior);
	printf("A menor altura e: %.2f \n", menor);
	printf("A media das altura do grupo e: %.2f \n", media);
	printf("A media das altura das mulheres e: %.2f \n", media_mulheres);

	return 0;

}