#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    printf("<<Compara nomes>>\n\n");
    printf("Digite o nome 1: ");
    char nome1[50],nome2[50];
    scanf("%s",&nome1);
    printf("Digite o nome 1: ");
    scanf("%s",&nome2);

    if(strcmp(nome1,nome2)==0){
        printf("\nOs nomes digitados sao iguais");
    }else printf("Os nomes digitados sao diferentes");

}