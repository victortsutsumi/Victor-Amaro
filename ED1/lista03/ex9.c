//Exercício 9//

#include<stdio.h>

int main(){

    float x;
    printf("<<Valor Mensal>>");
    printf("\nInsira um valor de venda: ");
    scanf("%f",&x);

    if(x>=100000){
        printf("Comissão a ser paga eh: %.2f",0.16*x+700);
    }
    if(x<100000 && x>=80000){
        printf("Comissao a ser paga eh: %.2f",0.14*x+650);
    }
     if(x<80000 && x>=60000){
        printf("Comissao a ser paga eh: %.2f",0.14*x+600);
    }
     if(x<60000 && x>=40000){
        printf("Comissao a ser paga eh: %.2f",0.14*x+550);
    }
     if(x<40000 && x>=20000){
        printf("Comissao a ser paga eh: %.2f",0.14*x+500);
    } 
     if(x<20000){
        printf("Comissao a ser paga eh: %.2f",0.14*x+400);
    }
}