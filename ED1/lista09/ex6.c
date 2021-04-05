#include<stdio.h>
#include<string.h>

struct eletrodomesticos{
    char nome[50];
    int potencia;
    int tempo;
};

int main(){

    int x,dia;
    struct eletrodomesticos eletrodomestico[5];
    for(x=0;x<5;x++){
        printf("Digite o nome do eletrodomestico %d: ",x+1);
        gets(eletrodomestico[x].nome);
        printf("Digite a potencia do eletrodomestico %d: ",x+1);
        scanf("%d",&eletrodomestico[x].potencia);
        printf("Digite o tempo ativo por dia em horas: ");
        scanf("%d",&eletrodomestico[x].tempo);
    }
    printf("Insira o numero de dias que as maquinas ficam ligadas: ");
    scanf("%d",&dia);
    


}