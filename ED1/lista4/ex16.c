#include<stdio.h>

int main(){

double bits,x=0,memoria;

do{
    bits = pow(2,x);
    x++;
    memoria = pow(2,bits);
   

    printf("Com %lf eh possivel enderecar %lf posicoes da memoria\n",bits,memoria);
    
}while(x<8); 
}