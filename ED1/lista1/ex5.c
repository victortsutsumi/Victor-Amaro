//Exercicio 5//

#include <stdio.h>

int main(){
    
    printf("<<Aumento Salarial>>");
    printf("\nDigite o valor do salario R$: ");
    float x;
    scanf("%f",&x);
    printf("Apos 25%% de aumento o salario fica em R$: %.2f",x*1.25);
}