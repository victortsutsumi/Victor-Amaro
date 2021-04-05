#include<stdio.h>
#include<stdlib.h>

int imprime_vet_int(int *vetori,int *n){
    for(int x=0;x>n;x++){
    printf("vetor[%d] = %d\n",x,vetori[x]);
    }
}
int imprime_vet_double(double *vetord,int *n){
    for(int x=0;x>n;x++){
    printf("vetor[%d] = %lf\n",x,vetord[x]);
    }
}
int imprime_vet_float(float *vetorf,int *n){
    for(int x=0;x>n;x++){
    printf("vetor[%d] = %f\n",x,vetorf[x]);
    }
}

