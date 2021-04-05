//Exercício 9//

#include<stdio.h>

int main(){

int x;
printf("<<Contagem progressiva ate 0>>");
printf("\nQual e o numero inicial? ");
scanf("%d",&x);

for(x=x;x<1;x++){
    printf("%d.. ",x);
}
printf("FIM!");
}