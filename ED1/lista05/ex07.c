#include<stdio.h>

int main(){

    printf("<<Normalizando as notas>>\n");
    int vetor[5],x=0,y=0,z=0,vet[5];
    
    while(x<5){
        printf("Entre com a nota do aluno %d: ",x+1);
        scanf("%d",&vetor[x]);
        x++;
    }
    for(x=0;x<5;x++){
        vet[x]=vetor[x];
    }


    printf("\nNotas normalizadas\n");

    for(x=0;x<5;x++){
        vetor[x] = vetor[x]*2;
        vet[x] = vet[x]*2;
    }

    
    y=0; z=0;
    while(y<5){
        if(vetor[y]>=z){
            vetor[y]=100;
            vetor[y-1]=vet[y-1];
            z = vet[y];
        }
        y++;
    }
    
    x=0;
    while(x<5){
        printf("\nA nota do aluno %d e %d",x+1,vetor[x]);
        x++;
    }
}