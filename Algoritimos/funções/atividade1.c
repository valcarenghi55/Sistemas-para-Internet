#include<stdio.h>

void categoria(int idade){
     
     if (idade < 5){     
        printf("Nao esta apto a nadar");     
     }
     else if (idade < 8){     
        printf("Participa da categoria Infantil A");     
     }
     else if (idade < 11){     
        printf("Participa da categoria Infantil B");     
     }
     else if (idade < 14){     
        printf("Participa da categoria Juvenil A ");     
     }
     else if (idade < 18){     
        printf("Participa da categoria Juvenil B ");     
     }
     else{     
        printf("Participa da categoria Adulto");     
     }
     
}

int main(){
    
    int idade;
    
    printf("Digite a idade do nadador: \n");
    scanf("%d", &idade);
    
    categoria(idade);
    
    return 0;    
    
}