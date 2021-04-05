//Exercício 10//

#include<stdio.h>

int main(){

    printf("== Operadores Booleanos ==");
    printf("\nDigite 0 para falso e nao 0 para verdadeiro");
    printf("\nEntre com o primeiro valor(A): ");
    int A, B;
    scanf("%d",&A);
    printf("Entre com o segundo valor(B): ");
    scanf("%d",&B);

    if(A==0 || B==0){
        printf("A and B: FALSO");
    }else printf("A and B: VERDADEIRO");

    if(A==0 && B==0){
        printf("\nA or B: FALSO");
    }else printf("\nA or B: VERDADEIRO");

    if(A!=0 && B!=0 || A==0 && B==0){
        printf("\nA xor B: FALSO");
    }else printf("\nA xor B: VERDADEIRO");

    if(A==0){
        printf("\nnot A: VERDADEIRO");
    }else printf("\nnot A: FALSO");
}