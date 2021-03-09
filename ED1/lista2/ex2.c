//Exercicio 2//

#include<stdio.h>

int main(){
    
    printf("<<Calculo da Media>>");
    printf("\nDigite o nome do aluno: ");
    char ini;
    scanf("%c",&ini);
    printf("Digite a nota da prova 1: ");
    float x,y,z;
    scanf("%f",&x);
    printf("Digite a nota da prova 2: ");
    scanf("%f",&y);
    
    z = (x+y)/2;
    
    printf("A nota media do aluno %c. e %.1f",ini, z);

    }