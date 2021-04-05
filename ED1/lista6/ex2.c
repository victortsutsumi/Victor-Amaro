#include<stdio.h>

int main(){

    char nome[50],x;
    int z=0,y;
    printf("<<Vetor de char>>");
    printf("\nDigite um nome: ");
    x = getchar();
    
    while(x!='\n'){
        nome[z]=x;
        z++;
        x = getchar();
    }
    while(y<z){
        printf("%c",nome[y]);
        y++;
    }
    }
