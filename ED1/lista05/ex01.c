#include<stdio.h>

int main(){

    int vetor[5];
    printf("<<Listando um vetor>>");
    printf("\nEntre com o numero 1: ");
    scanf("%d",&vetor[0]);
    printf("Entre com o numero 2: ");
    scanf("%d",&vetor[1]);
    printf("Entre com o numero 3: ");
    scanf("%d",&vetor[2]);
    printf("Entre com o numero 4: ");
    scanf("%d",&vetor[3]);
    printf("Entre com o numero 5: ");
    scanf("%d",&vetor[4]);
    printf("Entre com o numero 6: ");
    scanf("%d",&vetor[5]);

    printf("Os valores lidos sao: %d %d %d %d %d %d",vetor[0],vetor[1],vetor[2],vetor[3],vetor[4],vetor[5]);
}