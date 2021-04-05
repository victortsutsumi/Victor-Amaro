#include<stdio.h>
#include<stdlib.h>

struct ponto{
    int x, y;
};

int imprime_ponto(p){

    struct ponto ponto;
    ponto.x = 10;
    ponto.y = 20;
    printf("(%d,%d)",ponto.x,ponto.y);

}

int main(){

    int p;
    imprime_ponto(p);

}

