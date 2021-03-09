//Exercício 10//

#include<stdio.h>
#include<math.h>

int main(){

     printf("<<Loteria>>");
     printf("\nBolao jogador 1 R$: ");
     float x,y,z,a;
     scanf("%f",&x);
     printf("Bolao jogador 2 R$: ");
     scanf("%f",&y);
     printf("Bolao jogador 3 R$: ");
     scanf("%f",&z);
     printf("\nInforme o valor do premio: ");
     scanf("%f",&a);
     printf("\nJogador 1 recebera R$: %.1f", (a/(x+y+z))*x);
     printf("\nJogador 2 recebera R$: %.1f", (a/(x+y+z))*y);
     printf("\nJogador 3 recebera R$: %.1f", (a/(x+y+z))*z);

 }