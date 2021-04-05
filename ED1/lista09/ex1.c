#include<stdio.h>

int main(){

    struct numero {
        int ddd, telefone;
    };

    struct numero n1;
       scanf("%d",&n1.ddd);
       scanf("%d",&n1.telefone);

    struct numero n2;
       scanf("%d",&n2.ddd);
       scanf("%d",&n2.telefone);

    struct numero n3;
       scanf("%d",&n3.ddd);
       scanf("%d",&n3.telefone);   

    printf("%d %d",n1.ddd,n1.telefone);
    printf("\n%d %d",n2.ddd,n2.telefone);
    printf("\n%d %d",n3.ddd,n3.telefone);
}
