#include<stdio.h>

int main(){

    int x,y=0,z=0,a=0;
    printf("<<Universidade X>>");
    printf("\nQuantos alunos serao cadastros: ");
    scanf("%d",&x);
    int craaluno[x],numaluno[x];
    char classaluno[x];

    while(y<x){
        printf("\nEntre com o numero do aluno: ");
        scanf("%d",&numaluno[z]);
        printf("Entre com a classe social do aluno %d: ",numaluno[z]);
        setbuf(stdin,NULL);
        scanf("%c",&classaluno[z]);
        printf("Entre com o CRA do aluno %d: ",numaluno[z]);
        scanf("%d",&craaluno[z]);
        y++;
        z++;
    }

    z=0;
    printf("\n==== Alunos Cadastrados ====");
    while(a<x){
        printf("\nNumero: %d Classe Social: %c CRA: %d",numaluno[z],classaluno[z],craaluno[z]);
        a++;
        z++;
    }
}