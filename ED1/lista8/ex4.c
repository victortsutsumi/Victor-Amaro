#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    printf("<<Compara nomes>>\n\n");
    printf("Digite o nome 1: ");
    char nome1[50],nome2[50];
    int x=0;
    scanf("%s",&nome1);
    printf("Digite o nome 2: ");
    scanf("%s",&nome2);

    for(x=0;nome1[x]!='0';x++){
        if(nome1[x]<91 && nome1[x]>64){
            nome1[x] = nome1[x] + 32;
        }
    }
    for(x=0;nome2[x]!='0';x++){
        if(nome2[x]<91 && nome2[x]>64){
            nome2[x] = nome2[x] + 32;
        }
    }
    printf("\n%s",nome1);
    printf("\n%s",nome2);

    if(strcmp(nome1,nome2)==0){
        printf("\nOs nomes digitados sao iguais");
    }else printf("\nOs nomes digitados sao diferentes");



}