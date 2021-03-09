#include<stdio.h>

int main(){
    
    printf("<<Pagamento encanador>>");
    printf("\nDigite o numero de dias trabalhados: ");
    float x;
    scanf("%f",&x);
    printf("Valor bruto R$: %.2f", x*30);
    printf("\nValor liquido R$: %.2f", x*30*0.88);
    printf("\nISS R$: %.2f",x*30*0.04);
    printf("\nIR R$: %.2f",x*30*0.08);
}