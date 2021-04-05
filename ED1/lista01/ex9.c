//Exercício 9//

#include<stdio.h>
#include<math.h>

int main(){

    printf("<<Distancia>>");
    printf("\nEntre com a coordenada x: ");
    int x, y;
    scanf("%d",&x);
    printf("Entre com a coordenada y: ");
    scanf("%d",&y);
    printf("\nA distancia entre os pontos (%d,%d) e (0,0) eh %.1f",x,y, sqrt((x*x)+(y*y)));

}