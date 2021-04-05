//Exercício 4//

#include<stdio.h>

int main(){
    
    printf("\n<<Media aritmetica>>");
    printf("\nDigite a 1a nota: ");
    float a,b,c,d;
    scanf("%f",&a);
    printf("Digite a 2a nota: ");
    scanf("%f",&b);
    printf("Digite a 3a nota: ");
    scanf("%f",&c);
    printf("Digite a 4a nota: ");
    scanf("%f",&d);

    printf("===Notas===");
    printf("\nNota 1: %.1f; Nota 2: %.1f; Nota 3: %.1f; Nota 4: %.1f",a,b,c,d);
    printf("\nMedia: %.1f",(a+b+c+d)/4);

    }