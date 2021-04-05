#include<stdio.h>

int main(){

    printf("<<Vetor de char>>");
    printf("\nDigite um nome: ");
    char nome[50]; 
    int i=0;
    scanf("%s",&nome);
    
    while(nome[i]!='\0'){
        if(nome[i]>=97 && nome[i]<=122){
        nome[i]=nome[i]-32; 
    }i++;
    }
    printf("O nome digitado eh: %s.",nome);
}       