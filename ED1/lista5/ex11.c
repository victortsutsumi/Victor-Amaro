#include<stdio.h>
 
int main(){

    int a=0,b=0,c=0;
    printf("<<Pares e Impares>>");
    int vetv[5],vetv1[5],vetv2[5];

    while(c<5){
        printf("Digite o valor %d:",c+1);
        scanf("%d",&vetv[c]);
        c++;
    }
    b=0;
    
    while(b<5){
        if(vetv[b]%2!=0){
            vetv1[b]=vetv[b];
            printf("Impares %d \n",vetv1[b]);
        }else if(vetv[b]%2==0){
            vetv2[b]=vetv[b];
            printf("Pares %d \n",vetv2[b]);
        }
        b++;
    }
}