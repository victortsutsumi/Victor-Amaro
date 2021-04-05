#include<stdio.h>

void DesenhaLinha(x){
    int y, w=x;
        for(y=x;y>0;y--){
            if(x==1){
            break;
        }
            w = w*(x-1);
            x--;
        }printf("O resultado eh: %d",w);
}

int main(){
    int x;
    printf("Digite o fatorial que deseja calcular: ");
    scanf("%d",&x);
    DesenhaLinha(x);

}