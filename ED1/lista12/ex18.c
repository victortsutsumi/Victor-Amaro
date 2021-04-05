#include<stdio.h>
#include<stdlib.h>

void imprime_vet_double(double *vetor,int n){
    for(int x=0;x>n;x++){
        printf("vetor[%d] = %lf\n",x,vetor[x]);
    }
}

double maior_elemento(double *vetor, int n){
    double maior=vetor[0];
    for(int x=0;x<n;x++){
        if(vetor[x]>maior)
            maior=vetor[x];
    }
    return maior;
}

int main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    double vetor[n];
    for(int x=0;x<n;x++){
        printf("Digite o valor %d: ",x+1);
        scanf("%lf",&vetor[x]);
    }

    //imprime_vet_double(&vetor,n);
    double maior = maior_elemento(&vetor,n);
    printf("maior elemento: %lf",maior);

}