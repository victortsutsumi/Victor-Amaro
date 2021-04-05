#include<stdio.h>

int main(){

    printf("<< Nomes >>");
    printf("\n\nDigite o primeiro nome e ultimo nome: ");
    char vetor[40], nome[40],sobrenome[40];
    int x=0,y=0;
    gets(vetor);

    while(vetor[x]!=' '){
        nome[x] = vetor[x];
        x++;
    }
    printf("Nome: %s",nome);
    printf("\nSobrenome:");

    while(vetor[x]!='\0'){
        sobrenome[x] = vetor[x];
        
        printf("%c",sobrenome[x]);
        x++;
    }
}

