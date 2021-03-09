//Exercício 7//

#include<stdio.h>
#include<math.h>

int main(){

    float A,B,C,A2,C2;
    printf("Insira 3 valores\n");
    scanf("%f%f%f",&A,&B,&C);

    A2 = pow(A,2);
    C2 = pow(B,2)+pow(C,2);

    if(A<0 || B<0 || C<0){ 
    printf("\nNumero invalido. Apenas numeros positivos");
    return 0;
    }

    if(A>B+C || B>A+C || C>A+B){
        printf("\nNao forma triangulo");
    }
    if(A2==C2){
        printf("\nTriangulo retangulo");
    }
    if(A2>C2){
        printf("\nTriangulo obtusangulo");
    }
    if(A2<C2){
        printf("\nTriangulo acutangulo");
    }

    }