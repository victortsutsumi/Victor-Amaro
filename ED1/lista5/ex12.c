#include<stdio.h>
#include<stdlib.h>

int main(){

    printf("<<Probabilidade>>");
    double bol[4],soma,y=0;
    int x=0;
    printf("\nVerde: ");
    scanf("%lf",&bol[0]);
    printf("Azul: ");
    scanf("%lf",&bol[1]);
    printf("Amarela: ");
    scanf("%lf",&bol[2]);
    printf("Vermelha: ");
    scanf("%lf",&bol[3]);
    
    printf("Probabilidades\n");
    
    for(x=0;x<4;x++){
        soma = soma + bol[x];
    }//soma

    for(x=0;x<4;x++){
        bol[x] = (bol[x]*100)/soma;
    }
    
    
    x=0;
    while(x<4){
        if(bol[x]>y){
            y = bol[x];
        }
    x++;
    }
    printf("\nVerde: %.1lf%%",bol[0]);
        if(bol[0]==y){
            printf("<< Maior probabilidade\n");
        }
    printf("\nAzul: %.1lf%%",bol[1]);
        if(bol[1]==y){
            printf("<< Maior probabilidade");
        }
    printf("\nAmarela: %.1lf%%",bol[2]);
        if(bol[2]==y){
            printf("<< Maior probabilidade");
        }
    printf("\nVermelha: %.1lf%%",bol[3]);
        if(bol[3]==y){
            printf("<< Maior probabilidade");
        }
    }

