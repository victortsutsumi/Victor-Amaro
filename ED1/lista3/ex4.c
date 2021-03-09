//Exercício 4 REFAZERRRRRRRRRRR//

#include<stdio.h>

int main(){

    float nota1,nota2,nota3;
    char aluno1,aluno2,aluno3;

    printf("<<Notas da Turma>>");
    printf("\nEntre com o nome do aluno #1: ");
    scanf("%c",&aluno1);
    printf("Entre com a nota do aluno #1: ");
    scanf("%d",&nota1);
    printf("Entre com o nome do aluno #2: ");
    setbuf(stdin,NULL);
    scanf("%c",&aluno2);
    printf("Entre com a nota do aluno #2: ");
    scanf("%f",&nota2);
    printf("Entre com o nome do aluno #3: ");
    setbuf(stdin,NULL);
    scanf("%c",&aluno3);
    printf("Entre com a nota do aluno #3: ");
    scanf("%f",&nota3);

    if(nota1>nota2 && nota1>nota3 && nota2>nota3){
        printf("\n%c. tem a maior nota (%.1f) e %c; a menor (%.1f)", aluno1,nota1,aluno2,nota2);
    }else printf("\n%c. tem a maior nota (%.1f) e %c; a menor (%.1f)",aluno1,nota1,aluno3,nota3);

    if(nota2>nota3 && nota2>nota1 && nota1>nota3){
        printf("\n%c. tem a maior nota (%.1f) e %c; a menor (%.1f)",aluno2,nota2,aluno1,nota1);
    }else printf("\n%c. tem a maior nota (%.1f) e %c; a menor (%.1f)",aluno2,nota2,aluno3,nota3);

    if(nota3>nota2 && nota3>nota1 && nota1>nota2){
        printf("\n%c. tem a maior nota (%.1f) e %c; a menor (%.1f)",aluno3,nota3,aluno1,nota1);
    }else printf("\n%c. tem a maior nota (%.1f) e %c; a menor (%.1f)",aluno3,nota3,aluno2,nota2);

    }