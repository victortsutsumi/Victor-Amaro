#include<stdio.h>

int Troca(int *A,int *B){
    int C;
    C = *A;
    *A = *B;
    *B = C;
}

int main(){

    int A=12,B=13;
    Troca(&A,&B);
    printf("%d %d",A,B);
}