//Exercicio 5//

#include<stdio.h>
#include<math.h>

int main(){

    printf("== Conversor de numeros binarios ==");
    printf("\nDigite o 1o. bit: ");
    int b1,b2,b3,b4,dec;
    scanf("%d",&b1);
    printf("Digite o 2o. bit: ");
    scanf("%d",&b2);
    printf("Digite o 3o. bit: ");
    scanf("%d",&b3);
    printf("Digite o 4o. bit: ");
    scanf("%d",&b4);
    
    dec = (pow(2,0)*b4)+(pow(2,1)*b3)+(pow(2,2)*b2)+(pow(2,3)*b1);
    
    printf("O numero binario %d%d%d%d corresponde ao numero decimal %d", b1,b2,b3,b4,dec);

    }