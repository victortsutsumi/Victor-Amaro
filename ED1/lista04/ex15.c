#include<stdio.h>
#include<math.h>
int main(){

    printf("<<Conversor binario-decimal>>");
    printf("\nEntre com o numero de bits: ");
    int a,z,x,y=0,potencia=0;
    scanf("%d",&a);
    int vetor[a];

    for(z=0;z<a;z++){
    printf("Digite o bit #%d: ",z+1);
    scanf("%d",&vetor[z]);
    }
    x=a-1;
    
    while(y<a){
        potencia = potencia + pow(2,x)*vetor[y];
        x--;
        y++;
      
       }
     
      printf("O binario ");
    for(z=0;z<a;z++){
        printf("%d",vetor[z]);
    }
    printf(" em decimal eh %d", potencia);
}