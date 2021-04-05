#include<stdio.h>

int main(){

    printf("<< Compara nomes >>");
    printf("\n\nDigite o nome 1: ");
    char nome1[50],nome2[50];
    scanf("%s",nome1);
    printf("Digite o nome 2: ");
    scanf("%s",nome2);
    int i=0;
        
    while(nome1[i]!='\0'){
        if(nome1[i]!=nome2[i]){
            printf("Os nomes sao diferentes");
            return 0;
        }
        i++;
    }if(nome2[i]!='\0'){
        printf("Os nomes sao diferentes");
    }else
    printf("Os nome digitados sao iguais");
}