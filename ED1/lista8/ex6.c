#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    printf("<<Compara nomes>>\n\n");
    printf("Digite o nome: ");
    char nome[50];
    gets (nome);
    printf("\n");

    for(int x=0;x<strlen(nome);x++){
        printf("\n%da Letra: %c",x+1,nome[x]);
    }
}