//Exercício 8//

#include<stdio.h>
#include<math.h>

int main(){

    printf("<<Raiz Quadradas>>");
    printf("\nInsira o valor de a: ");
    int a,b,c,delta,delta_c;
    float raiz1,raiz2,raiz1_cr,raiz1_ci,raiz2_cr,raiz2_ci;
    scanf("%d",&a);
    printf("Insira o valor de b: ");
    scanf("%d",&b);
    printf("Insira o valor de c: ");
    scanf("%d",&c);

    delta = (pow(b,2)) - (4*a*c);
    raiz1 = ((b*-1) + sqrt(delta))/(2*a);
    raiz2 = ((b*-1) - sqrt(delta))/(2*a);
    delta_c = ((pow(b,2)) - (4*a*c))*-1;
    raiz1_cr = -b;
    raiz1_ci = +sqrt(delta_c);
    raiz2_cr = -b;
    raiz2_ci = -sqrt(delta_c);
 
    if(delta>0 || delta==0){
        printf("As raizes sao %f e %f",raiz1,raiz2);
    }
    if(delta<0){
        printf("As raizes sao %f %fi/%d e %f %fi/%d",raiz1_cr,raiz1_ci,2*a,raiz2_cr,raiz2_ci,2*a);
    }
    }