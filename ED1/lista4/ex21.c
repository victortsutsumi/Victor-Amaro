#include<stdio.h>

int main(){

    printf("<<Fatorial>>\n");
    int x = 1,fatorial = 1;

    while(x<11){
        fatorial = x * fatorial;
        printf("%d! = %d\n",x,fatorial);
        x++;
    }
}