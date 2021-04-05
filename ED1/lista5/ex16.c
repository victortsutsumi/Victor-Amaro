#include<stdio.h>
#include<stdlib.h>

int main(){

    printf("<<Valores Iguais>>");
    int vet[8],x=0,y=0,z=0,rep[4];

    while(x<8){
        printf("Entre com o numero %d: ",x+1);
        scanf("%d",&vet[x]);
        x++;
    }
    printf("\n\nValores repetidos: ");
   

    for(x=0;x<=8;x++){
        for(y=x+1;y<8;y++){
            if(vet[y]==vet[x]){
                 rep[x] = vet[x];
                printf("%d, ",rep[x]);
            }
        }

    }
    }
    