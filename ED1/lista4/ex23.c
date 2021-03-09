#include<stdio.h>

int main(){

    printf("<<Numero neperiano>>");
    printf("\nEntre com o numero de termos: ");
    double n,fatorial = 1,x=1,nep = 1;
    scanf("%lf",&n);

    while(x<n+1){

        fatorial = x * fatorial;
        nep = (1/fatorial)+nep;

        
        x++;

    }printf("e ~ %.14lf",nep);
    return 0;


}