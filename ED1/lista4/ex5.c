//Exercício 5//

#include<stdio.h>

int main(){

int x;
printf("<<Contagem Regressiva>>");
printf("\nQual e o numero inicial? ");
scanf("%d",&x);
    do{
        printf("%d.. ",x);
        x--;

}while(x>-1);
printf("FIM!");

}