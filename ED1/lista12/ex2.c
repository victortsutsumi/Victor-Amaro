#include<stdio.h>

void DesenhaLinha(x){
    int y = 0;
    for(y=0;y<x;y++){
        printf("=");
    }
}

int main(){
    int x;
    scanf("%d",&x);
    DesenhaLinha(x);
}