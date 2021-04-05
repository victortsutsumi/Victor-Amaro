#include<stdio.h>

void Expoente(x,y){

    int z,w=x;
    for(z=y;z>1;z--){
       
        w = w*x;
        y--;
    }
    printf("O valor eh: %d",w);

}

int main(){
    
    int x,y;
    printf("Digite um valor: ");
    scanf("%d",&x);
    printf("Digite o expoente: ");
    scanf("%d",&y);
    if(y==0 || x==1){
           printf("O valor eh: 1");
       }else
    Expoente(x,y);

}