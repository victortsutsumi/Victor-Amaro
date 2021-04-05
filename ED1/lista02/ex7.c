//Exercício 7 VAERIGUARRRRRRRRRRRRR//

#include<stdio.h>
#include<math.h>

int main(){

    int A,B;

    printf("== Operadores Booleanos ==");
    printf("\nDigite 0 para falso e nao 0 para verdadeiro");
    printf("\nEntre com o primeiro valor (A): ");
    scanf("%d",&A);
    printf("Entre com o segundo valor (B): ");
    scanf("%d",&B);

    if(A==0 || B==0){
    printf("A and B: 0");
    }else printf("A and B: 1");

    if(A==0 && B==0){
    printf("\n A or B: 0");
    }else printf("\nA or B: 1");

    if(A!=0 && B!=0){
    printf("\nA xor B: 0");
    }else printf("\nA xor B: 1");

    if(A==0 && B==0){
    printf("\nA xor B: 0");
    }

    if(A==0){
    printf("\nnot A: 1");
    }else printf("\nnot A: 0");

    
}