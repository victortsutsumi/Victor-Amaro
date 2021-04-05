#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    printf("<<Compara nomes>>\n\n");
    printf("Digite a string: ");
    char nome[50];
    int x=0,y=0;
    gets (nome);

    for(x=0;x<strlen(nome);x++){
        if(nome[x] != 'a' &&
           nome[x] != 'e' &&
           nome[x] != 'i' &&
           nome[x] != 'o' && 
           nome[x] != 'u' && 
           nome[x] != 'A' && 
           nome[x] != 'E' && 
           nome[x] != 'I' &&
           nome[x] != 'O' && 
           nome[x] != 'U'){
           printf("%c",nome[x]);
        }
    }
}