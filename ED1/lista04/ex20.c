#include<stdio.h>
#include<stdlib.h>

int main(){

    printf("Insira o numero de linhas do Triangulo de Floyd: ");
    int x,i,j,z=0;
    scanf("%d",&x);

    for(i=1;i<=x;i++){
    for(j=1;j<=i;j++){
        z++;
        printf("%d ",z);    
        }printf("\n");
    }
    }