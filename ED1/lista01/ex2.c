//Exercício 2//

#include<stdio.h>

int main(){

    printf("\n<<Conversor Temperatura>>");
    printf("\nDigite a temperatura (em Celsius): ");
    float x;
    scanf("%f", &x);
    printf("%.1f graus Celsius correspondem a %.1f Fahrenheit", x, ((x*9)/5)+32);

    }