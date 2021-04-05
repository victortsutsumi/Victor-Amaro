#include <stdio.h>

int main() {
  
    int i,j,n,m=0,x=0;    
    printf("<<Multiplos>>");
    printf("\nEntre com o valor de n: ");
    scanf("%d", &n);
    printf("Entre com o valor de i: ");
    scanf("%d", &i);
    printf("Entre com o valor de j: ");
    scanf("%d",&j);
    printf("Os %d primeiros multiplos de i ou j sao: ", n, i, j);
    
    while (x < n){
        if (m%i == 0 || m%j == 0){
        printf("%d,", m);
            x++;
            }
        m++; 
        }
    }

