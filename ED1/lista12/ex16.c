#include<stdio.h>
#include<stdlib.h>

struct ponto{
    int x,y;
};

void Direcao(){

    
    struct ponto p1;
    p1.x = 1;
    p1.y = 3;
    printf("(%d,%d) sudeste => (%d,%d)",p1.x,p1.y,p1.x+1,p1.y-1);
    p1.x = 2;
    p1.y = 4;
    printf("\n(%d,%d) sudoeste => (%d,%d)",p1.x,p1.y,p1.x-1,p1.y-1);
}

int main(){

    Direcao();

}