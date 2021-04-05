#include<stdio.h>
#include<stdlib.h>

struct ponto{
    int x,y;
};

void Cabecalho(){
   
    int area, calc_area;
   
    struct ponto p1;
    p1.x = 1;
    p1.y = 4;

    struct ponto p2;
    p2.x = 4;
    p2.y = 2;

    struct ponto p3;
    p3.x = p1.x - p2.x;
    p3.y = p2.y - p1.y;

    if(p3.x < 0 ){
        p3.x = p3.x*(-1);
    }
    if(p3.y < 0){
        p3.y = p3.y*(-1);
    }
    calc_area = p3.y * p3.x;
    area = calc_area;
    printf("A area do retangulo definido por (%d,%d) e (%d,%d) e %d",p1.x,p1.y,p2.x,p2.y,area);


}


int main(){

    Cabecalho();
}