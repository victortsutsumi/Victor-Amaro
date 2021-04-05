#include<stdio.h>
#include<stdlib.h>


int main(){

    printf("<<5 valores>>\n");
    int x,y=0,z=0;
    int vetor[5];
    float soma,media;
    

    while(y<5){
        printf("Entre com o numero %d: ",y+1);
        scanf("%d",&vetor[y]);
        y++;
    }
    
    y=0;
    while(y<5){
        soma = soma+vetor[y];
        y++;
        
    }
    media = (soma/5);
     
    x=vetor[0];
    y=0;
    while(y<5){
        if(vetor[y]>z){
            z = vetor[y];
        }
        if(vetor[y]<x){
            x = vetor[y];
        }
        y++;
    }

    printf("\nOs numeros digitados sao: %d %d %d %d %d",vetor[0],vetor[1],vetor[2],vetor[3],vetor[4]);
    printf("\nO maior valor e: %d",z);
    printf("\nO menor valor e: %d",x);
    printf("\nA media e: %.1f",media);
    

}