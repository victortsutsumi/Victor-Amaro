#include<stdio.h>

int main(){

    printf("<< Nomes >>");
    printf("\n\nDigite o primeiro nome e ultimo nome: ");
    char vetor[40];
    int x=0;
    gets(vetor);

    while(vetor[x]!=' '){
        *vetor = *(vetor+(x));
        printf("%c",*vetor);
        x++;
    }
    printf(" ");
    while(vetor[x]!='\0'){
        *vetor = *(vetor+(x+1));
        printf("%c",*vetor);
        x++;
    }
}

