//Exercício 4//

#include<stdio.h>

int main(){

int x;
printf("<<Contagem Regressiva>>");
printf("\nQual e o numero inicial? ");
scanf("%d",&x);

while(x>-1){
    printf("%d.. ",x);
    x--;
}
printf("FIM!");

}