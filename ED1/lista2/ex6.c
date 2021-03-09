//Exercício 6//
#include<stdio.h>
#include<math.h>

int main(){

    printf("==Troca do conteudo de variaveis==");
    printf("\nEntre com o valor de A: ");
    int A,B,C;
    scanf("%d",&A);
    printf("Entre com o valor de B: ");
    scanf("%d",&B);
    
    C=A;
    A=B;
    B=C; 
    
    printf("Apos a troca, o valor de A e %d e o de B e %d", A,B);


}