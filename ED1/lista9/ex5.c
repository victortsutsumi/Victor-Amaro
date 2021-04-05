#include<stdio.h>

struct alunos{
    char matricula[20],nome[50];
    int faltas;
    double prova1,prova2,prova3,media;
};


int main(){

    int x,d,maior_prova1=0,maior_media=0,menor_media=999999999;

    struct alunos aluno[4];
    printf("======Alunos de graduacao======\n");
    for(x=0;x<3;x++){
        printf("Digite a matricula do aluno %d: ",x+1);
        setbuf(stdin,NULL);
        gets(aluno[x].matricula); 
        printf("Digite o nome do aluno %d: ",x+1);
        setbuf(stdin,NULL);
        gets(aluno[x].nome);
        printf("Digite a nota da prova 1: ");
        scanf("%lf",&aluno[x].prova1);
        printf("Digite a nota da prova 2: ");
        scanf("%lf",&aluno[x].prova2);
        printf("Digite a nota da prova 3: ");
        scanf("%lf",&aluno[x].prova3);
        aluno[x].media = (aluno[x].prova1+aluno[x].prova2+aluno[x].prova3)/3;
        printf("Media geral do aluno %d: %lf",x+1,aluno[x].media);
        printf("\nNumero de faltas do aluno %d: ",x+1);
        scanf("%d",&aluno[x].faltas);
    }

    for(x=0;x<3;x++){
        if(aluno[x].prova1>maior_prova1){
            maior_prova1 = aluno[x].prova1;
            strcpy(aluno[4].matricula,aluno[x].matricula);
            strcpy(aluno[4].nome,aluno[x].nome);
            aluno[4].prova1 = aluno[x].prova1;
            aluno[4].prova2 = aluno[x].prova2;
            aluno[4].prova3 = aluno[x].prova3;
            aluno[4].media = aluno[x].media;
            aluno[4].faltas = aluno[x].faltas;

        }
    }
        printf("\n====Maior nota na primeira prova====\n");
        printf("\nMatricula: %s",aluno[4].matricula);
        printf("\nNome: %s",aluno[4].nome);
        printf("\nProva1: %lf",aluno[4].prova1);
        printf("\nProva2: %lf",aluno[4].prova2);
        printf("\nProva3: %lf",aluno[4].prova3);
        printf("\nMedia: %lf",aluno[4].media);
        printf("\nFaltas: %d",aluno[4].faltas);


    for(x=0;x<3;x++){
        if(aluno[x].media>maior_media){
            maior_media = aluno[x].media;
            strcpy(aluno[4].matricula,aluno[x].matricula);
            strcpy(aluno[4].nome,aluno[x].nome);
            aluno[4].prova1 = aluno[x].prova1;
            aluno[4].prova2 = aluno[x].prova2;
            aluno[4].prova3 = aluno[x].prova3;
            aluno[4].media = aluno[x].media;
            aluno[4].faltas = aluno[x].faltas;
        }
    }
    printf("\n====Maior media geral====\n");
        printf("\nMatricula: %s",aluno[4].matricula);
        printf("\nNome: %s",aluno[4].nome);
        printf("\nProva1: %lf",aluno[4].prova1);
        printf("\nProva2: %lf",aluno[4].prova2);
        printf("\nProva3: %lf",aluno[4].prova3);
        printf("\nMedia: %lf",aluno[4].media);
        printf("\nFaltas: %d",aluno[4].faltas);




    for(x=0;x<3;x++){
        if(aluno[x].media<menor_media){
            menor_media = aluno[x].media;
            strcpy(aluno[4].matricula,aluno[x].matricula);
            strcpy(aluno[4].nome,aluno[x].nome);
            aluno[4].prova1 = aluno[x].prova1;
            aluno[4].prova2 = aluno[x].prova2;
            aluno[4].prova3 = aluno[x].prova3;
            aluno[4].media = aluno[x].media;
            aluno[4].faltas = aluno[x].faltas;
        }
    }
    printf("\n====Menor media geral====\n");
        printf("\nMatricula: %s",aluno[4].matricula);
        printf("\nNome: %s",aluno[4].nome);
        printf("\nProva1: %lf",aluno[4].prova1);
        printf("\nProva2: %lf",aluno[4].prova2);
        printf("\nProva3: %lf",aluno[4].prova3);
        printf("\nMedia: %lf",aluno[4].media);
        printf("\nFaltas: %d",aluno[4].faltas);

    }//int main