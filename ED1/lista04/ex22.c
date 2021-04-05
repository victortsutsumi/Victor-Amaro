#include<stdio.h>

int main(){

    printf("<<Fatorial>>\n");
    int x = 11,fatorial = 3628800;

    while(x<16){
        fatorial = x * fatorial;
        printf("%d! = %d\n",x,fatorial);
        x++;
    }
}

/* O a saída não apresenta os resultados corretos
 pois estouro o tamanho dos inteiros, necessitando usar 
 float*/