#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    printf("<<Vetor de Char>>\n\n");
    printf("Digite um nome: ");
    char nome[50];
    gets(nome);

    printf("\nO nome digitado e: ");
    for(int x=0; x<strlen(nome);x++){
    printf("%c",toupper(nome[x])); 
    }
     printf("\nO nome digitado e: ");
    for(int x=0; x<strlen(nome);x++){
    printf("%c",tolower(nome[x])); 
    }
}