#include<stdio.h>
#include<math.h>

void Raiz(num){
    int raiz,prop,x;
    prop = 1;
    raiz = sqrt(num);
    x=1;
    if(prop<num){
        while(prop<num){
        prop = prop+2;
        x = x + prop;
            if(x==num){
                printf("True");
            }
        }
    }
}
int main(){

    printf("Digite um numero inteiro: ");
    int num;
    scanf("%d",&num);   
    Raiz (num);

    }
