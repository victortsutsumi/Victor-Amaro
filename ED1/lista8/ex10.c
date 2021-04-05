#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    printf("<<Palindromo>>\n\n");
    printf("Digite o palindromo: ");
    int x=0,y=0;
    char nome[50],invertido[50];
    gets (nome);
    
    while(nome[x]!='\0'){
        
        x++;
    }
    while(x>=0){
        invertido[y] = nome[x];
        x--;
        y++;
    }

    if(strcmp(nome,invertido)){
        printf("\nE palindromo");
    }else printf("Nao e palindromo");

}

