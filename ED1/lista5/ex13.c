#include<stdio.h>
#include<stdlib.h>

int main(){

    printf("<<Zerando negativos>>\n");
    int a=0,b=0,vet[5];

    while(a<5){
        printf("Entre com o numero %d: ",a+1);
        scanf("%d",&vet[a]);
        a++;
    }

    while(b<5){
        if(vet[b]<0){
            vet[b]=0;
        }
        b++;
    }

    printf("Zerando os negativos, obtem-se: %d %d %d %d %d",vet[0],vet[1],vet[2],vet[3],vet[4]);

}