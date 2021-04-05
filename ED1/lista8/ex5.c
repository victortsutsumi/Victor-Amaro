#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    printf("<<Vetor de Char>>\n\n");
    printf("Digite um nome e sobrenome: ");
    int x=0;
    char nome[50];
    gets (nome);

    printf("\nNome: ");
    for(x=0;nome[x]!=' ';x++){
        printf("%c",nome[x]);
    }
    printf("\nSobrenome:");
    while(nome[x]!='\0'){
        printf("%c",nome[x]);
        x++;
    }
    }


