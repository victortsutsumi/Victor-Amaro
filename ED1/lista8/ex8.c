#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    printf("Digite seu nome: ");
    char nome[50],endereco[50],cidade[20],estado[2];
    char cpf[15],rg[12],cep[9],x=0;
    int numendereco[4];
    fgets (nome,40,stdin);
    setbuf(stdin,NULL);
    printf("Digite seu CPF: ");
    scanf("%s",&cpf);
    printf("Digite seu RG: ");
    scanf("%s",&rg);
    printf("Digite seu endereco: ");
    fgets (endereco,40,stdin);
    setbuf(stdin,NULL);
    printf("Digite a cidade: ");
    scanf("%s",&cidade);
    printf("Digite o estado: ");
    scanf("%s",&estado);
    printf("Digite o CEP: ");
    scanf("%s",&cep);

    printf("Eu, ");
    for(x=0;nome[x]!='\0';x++){
        if(nome[x]=='\n'){
            break;
        }
        printf("%c",nome[x]);
    }
    printf(", RG ");
    for(x=0;rg[x]!='\0';x++){
        printf("%c",rg[x]);
    }
    printf(", CPF ");
    for(x=0;cpf[x]!='\0';x++){
        printf("%c",cpf[x]);
    }
    printf(",\nresidente a ");
    for(x=0;endereco[x]!='\0';x++){
        if(endereco[x]=='\n'){
            break;
        }
        printf("%c",endereco[x]);
    }
    printf(",");
    for(x=0;cidade[x]!='\0';x++){
        printf("%c",cidade[x]);
    }
    printf("-");
    for(x=0;estado[x]!='\0';x++){
        printf("%c",estado[x]);
    }
    printf(",\nCEP ");
    for(x=0;cep[x]!='\0';x++){
        printf("%c",cep[x]);
    }
    printf(" venho por meio desta declarar que vou estudar para a prova");



}