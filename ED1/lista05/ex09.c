#include<stdio.h>

int main(){

    int x,y=0;
    float media=0;
    printf("<<Media de n alunos. Maximo 100 alunos>>");
    printf("\nEntre com o numero de alunos: ");
    scanf("%d",&x);
    int notalu[x];
   
    if(x>100){
        printf("Erro! O numero maximo de alunos permitidos e 100.");
        return 0; 
    }else
    while(y<x){
        printf("Digite a nota do aluno %d: ",y+1);
        scanf("%d",&notalu[y]);
        y++;
    }

    printf("\nRelatorio de notas");
    y=0;

    while(y<x){
        printf("\nA nota do aluno %d e: %d",y,notalu[y]);
        media = media + notalu[y];
        y++;
        
    }
    media = media/x;
    printf("\nA media da turma e: %.1f", media);
}