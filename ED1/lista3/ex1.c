//Exercício 1//

#include<stdio.h>
#include<math.h>

int main(){

    int n1,n2,n3,media;
    char letra;
    setbuf(stdin,NULL);

    printf("<<Calculo da Media>>");
    printf("\nDigite a inicial do nome do aluno: ");
    scanf("%c",&letra);
    printf("Digite a nota da prova 1: ");
    scanf("%d",&n1);
    printf("Digite a nota da prova 2: ");
    scanf("%d",&n2);
    printf("Digite a nota da prova 3: ");
    scanf("%d",&n3);

    media = (n1+n2+(n3*2))/4;

    if(media>=60){
        printf("\nA nota media do aluno %c. e %d ==> APROVADO!",letra,media);
    }else printf("\nA nota media do aluno %c. e %d ==> REPROVADO!",letra,media);

    }