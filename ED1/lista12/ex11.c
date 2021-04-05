#include<stdio.h>
#include<stdlib.h>

struct ponto{
    int x,y;
};
int imprime_ponto(){
    struct ponto p1;
    p1.x = 1;
    p1.y = 2;

    struct ponto p2;
    p2.x = 3;
    p2.y = 4;

    struct ponto p3;
    p3.x = p2.x + p1.x;
    p3.y = p2.y + p1.y;

    printf("A soma de (%d,%d) com (%d,%d) e (%d,%d)",p1.x,p1.y,p2.x,p2.y,p3.x,p3.y);
}

int main(){

    imprime_ponto();
   
}