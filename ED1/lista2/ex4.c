//Exercicio 4//

#include<stdio.h>

int main(){

    printf("<<Calculo da Media>>");
    printf("\nDigite o nome do aluno: ");
    char aluno;
    scanf("%c",&aluno);
    printf("Digite a nota da prova 1: ");
    float p1,p2,p3;
    float mp,a,b,c;
    scanf("%f",&a);
    printf("Digite a nota da prova 2: ");
    scanf("%f",&b);
    printf("Digite a nota da prova 3: ");
    scanf("%f",&c );
    printf("Digite o peso da prova 1: ");
    scanf("%f",&p1);
    printf("Digite o peso da prova 2: ");
    scanf("%f",&p2);
    printf("Digite o peso da prova 3: ");
    scanf("%f",&p3);
   
    mp = ((a*p1)+(b*p2)+(c*p3))/(p1+p2+p3);
   
    printf("A nota media do aluno %c. e: %.2f", aluno,mp);

    }