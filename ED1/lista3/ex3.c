//Exercício 3//

#include<stdio.h>

int main(){

    float a,b;

    printf("<<Valor do Produto com imposto>>");
    printf("\nDigite o valor do produto R$: ");
    scanf("%f",&a);
    printf("Digite a unidade da federacao: ");
    scanf("%f",&b);

    if(b==1){
        printf("Valor final com impostos R$: %.2f", a*1.07);    
    }
    if(b==2){
        printf("Valor final com impostos R$: %.2f", a*1.12);
    }
    if(b==3){
        printf("Valor final com impostos R$: %.2f", a*1.15);
    }
    if(b==4){
        printf("Valor final com impostos R$: %.2f", a*1.08);
    }
    if(b!=1 && b!=2 && b!=3 && b!=4){
        printf("Unidade de federacao invalida");
    }

    }