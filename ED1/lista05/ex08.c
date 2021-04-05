#include<stdio.h>
#include<math.h>

int main(){

    printf("<<Media e desvio-padrao>>\n");
    int vetor[5],x=0,soma=0,soma1=0;
    double dp,ma,media;

    for(x=0;x<5;x++){
        printf("Digite o valor %d: ",x+1);
        scanf("%d",&vetor[x]);
    }

    for(x=0;x<5;x++){
        soma = soma + vetor[x];
    }

    media = soma/5;
    
    for(x=0;x<5;x++){
        vetor[x] = vetor[x] - media;
        vetor[x] = pow(vetor[x],2);
        soma1 = soma1 + vetor[x];
    }

    ma = soma1/4;
    dp = sqrt(ma);

    printf("A media e %d e o desvio-padrao e %.13lf",media,dp);

}