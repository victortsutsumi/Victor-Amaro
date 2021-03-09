//Exercício 6//

#include<stdio.h>
#include<math.h>

int main(){

    printf("Digite um numero inteiro: ");
    int num,raiz,prop,x;
    scanf("%d",&num);
    prop = 1;
    raiz = sqrt(num);
    x=1;

    if(prop<num){
     
     while(prop<num){
        prop = prop+2;
        x = x + prop;

        if(x==num){
            printf("%d eh raiz quadrada perfeita. Sua raiz eh: %d",num,raiz);
        }
     
    }

}else printf("1 eh raiz quadrada perfeita. Sua raiz eh: 1");

}