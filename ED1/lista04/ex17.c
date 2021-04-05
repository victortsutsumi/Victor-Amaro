#include<stdio.h>

int main(){

char c = 'q', letra;
int i,j=4;
printf("<<Forca de uma letra so>>");

for(i=0;i<5;i++){
    printf("\nQual a letra? ");
    setbuf(stdin,NULL);
    scanf("%c",&letra);

    if(letra == c){ 
        printf("ACERTOU!");
        return 0;
    }
    if(letra != c){
        if(j==1){
            printf("Ultima chance!!!\n");
        }else
        if(j==0){
            printf("Acabaram suas chances. A letra correta e '%c'",c);
        }else
     printf("Errado! Voce tem mais %d chances\n",j);
    j--;
    }
    }
}
