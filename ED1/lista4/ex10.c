//Exercício 10//

#include<stdio.h>

int main(){

int x,y = 1,z = 0;
printf("<<Soma de n valores naturais>>");
printf("\nQuantos numeros deseja somar? ");
scanf("%d",&x);

while(y<=x){
    z = z+y;
    y++;

}printf("A soma do 5 primeiros numeros naturais e :%d",z);

}