//Exercício 11//

#include<stdio.h>

int main(){

int x,y = 1,z = 0;
printf("<<Soma de n valores naturais>>");
printf("\nQuantos numeros deseja somar? ");
scanf("%d",&x);

do{
    z = z+y;
    y++;

}while(y<=x);
printf("A soma do 5 primeiros numeros naturais e :%d",z);

}