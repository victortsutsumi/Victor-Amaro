//Exercício 2//

#include<stdio.h>
#include<math.h>

int main(){

    float x,cf,fc;
    char unidade;

    printf("<<Conversor de Temperatura>>");
    printf("\nDigite a temperatura: ");
    scanf("%f",&x);
    printf("Digite a unidade: ");
    setbuf(stdin,NULL);
    scanf("%c",&unidade);

    cf = ((x*9)/5)+32;
    fc = ((x-32)*5)/9;

    if(unidade != 'c' && unidade != 'f'){
        printf("Erro");
    }

    if(unidade == 'c'){
        printf("\n%f graus Celsius equivale a %f graus Fahrenheit",x,cf);
    }else if(unidade == 'f') printf("\n%f graus Fahrenheit equivale a %f graus Celsius",x,fc);

    }