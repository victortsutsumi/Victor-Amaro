//Exercicio 3//

#include<stdio.h>

int main(){

    printf("<<Calculo da Media>>");
    printf("\nDigite o nome do aluno: ");
    char aluno;
    scanf("%c",&aluno);
    printf("Digite a nota da prova 1: ");
    int p1,p2,p3,mp;
    scanf("%d",&p1);
    printf("Digite a nota da prova 2: ");
    scanf("%d",&p2);
    printf("Digite a nota da prova 3: ");
    scanf("%d",&p3);
    
    mp = (p1+p2+(p3*2))/4;
    
    printf("A nota media do aluno %c. e %d", aluno,mp);

    }