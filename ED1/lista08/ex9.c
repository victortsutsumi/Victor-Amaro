#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    printf("<<invertendo>>\n\n");
    printf("Digite a string: ");
    int x=0;
    char nome[50];
    gets (nome);
    
    while(nome[x]!='\0'){
        x++;
    }
    printf("\nSaida invetida:");
    while(x>=0){
        printf("%c",nome[x]);
        x--;
    }
}