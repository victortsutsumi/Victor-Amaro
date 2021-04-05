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
        if(nome1[i]>=97 && nome1[i]<=122){
            nome1[i]=nome1[i]-32;
        }
        if(nome2[i]>=97 && nome2[i]<=122){
            nome2[i]=nome2[i]-32;
        }
        i++;
    }

    i=0;

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