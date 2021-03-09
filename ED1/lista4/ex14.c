#include<stdio.h>

int main(){

   printf("<<Numeros Primitivos>>");
   printf("\nEntre com o valor: ");
   int x,primo = 2;
   scanf("%d",&x);

   while(primo<x){
      if(x%primo==0){
         printf("O numero %d nao eh primo",x);
         return 0;
      }
      primo++;
      
   }
   printf("O numero %d eh primo",x);

}