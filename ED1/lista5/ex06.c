#include<stdio.h>
#include<stdlib.h>

int main(){

    printf("<<5 valores>>\n");
    int x,y=0,z=0,media,soma=0,a,b;
    int vetor[5];
    
    while(y<5){
        soma = soma+vetor[y];
        y++;
    }

    media = soma/5;
    y=0;
    while(y<5){
        printf("Entre com o numero: %d ",y+1);
        scanf("%d",&vetor[y]);
        y++;
    }

    x=vetor[0];
    y=0;
    while(y<5){
        if(vetor[y]>z){
            z = vetor[y];
            a = y;
        }
        if(vetor[y]<x){
            x = vetor[y];
            b = y;
        }
        y++;
    }
    printf("\nOs numeros digitados sao: %d %d %d %d %d",vetor[0],vetor[1],vetor[2],vetor[3],vetor[4]);
    printf("\nO maior valor e: %d, localizado na posicao %d do vetor",z,a);
    printf("\nO menor valor e: %d localizado na posicao %d do vetor",x,b);
    printf("\nA media e: %d",media);
    

}