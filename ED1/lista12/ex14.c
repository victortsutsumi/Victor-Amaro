#include<stdio.h>
#include<stdlib.h>

tem algo errrado

struct ponto{
    int x,y;
};

void procedimento(int *constante,int *p1){
printf("Resultado: (%d,%d) * %d = (%d,%d)",p1.x,p1.y,constante,p1.x*constante,p1.y*constante);

}


int main(){

int constante;
struct ponto p1;
printf("Digite o ponto: ");
scanf("%d %d",&p1.x,&p1.y);
printf("Digite a constante: ");
scanf("%d",&constante);

    procedimento(&constante);


}