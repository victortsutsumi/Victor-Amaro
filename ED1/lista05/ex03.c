#include<stdio.h>

int main(){

    printf("<<Listando um vetor em ordem inversa>>\n");
    int vetor[5],x=1,z=0;
    

     while(z<6){
        printf("Entre com o numero %d: ",x);
        scanf("%d",&vetor[z]);
        x++;
        z++;
    }
    printf("Os valores lidos sao: %d %d %d %d %d %d",vetor[5],vetor[4],vetor[3],vetor[2],vetor[1],vetor[0]);
}