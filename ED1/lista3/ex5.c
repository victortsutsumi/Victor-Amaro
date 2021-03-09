//Exercício 5//

#include<stdio.h>

int main(){

    float massa,altura,IMC;
    printf("Digite o valor da massa: ");
    scanf("%f",&massa);
    printf("Digite o valor da altura: ");
    scanf("%f",&altura);

    IMC = massa/(altura*altura);

    if(IMC<18.5){
        printf("Magreza");
    }
    if(IMC>=18.5 && IMC<25){
        printf("Saudavel");
    }
    if(IMC>=25.0 && IMC<30){
        printf("Sobrepeso");
    }
    if(IMC>=30.0 && IMC<35){
        printf("Obesidade Grau 1");
    }
    if(IMC>=35.0 && IMC<40){
        printf("Obesidade Grau 2 (severa)");
    }
    if(IMC>=40){
        printf("Obesidade Grau 3 (morbida)");
    }

    }