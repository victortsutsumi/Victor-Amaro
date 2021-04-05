#include<stdio.h>
ERRADO PRA KRL
void Neperiano(nep){

    int y, w=nep,z,x=0;
        for(y=nep;y>0;y--){
            if(nep==1){
            break;
            }else
            w = w*(nep-1);
            z = 1/w;
            x = x+z;
            nep--;
            printf("%f\n",w);
            printf("%f\n",z);
            printf("%f\n\n",x);
        }printf("ACABOU");

}

int main(){

    int nep=5;
    Neperiano(nep);
}