//Exercício 12//

#include<stdio.h>

int main(){

int x,y = 1,z = 0;
printf("<<Soma de n valores naturais>>");
printf("\nQuantos numeros deseja somar? ");
scanf("%d",&x);

for(y=1;y<=x;y++){
    z = z+y;

}
printf("A soma do 5 primeiros numeros naturais e :%d",z);

}