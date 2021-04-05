#include<stdio.h>

int main(){

    int val[5] = {2,4,5,8,10};
    unsigned int *p;
    p = &val[4];
    printf("Antes da mudanca: %d \n%u\n",val[4],p);
    
    scanf("%d",val[4]=20);


    printf("\nDepois da mundaca: %d",val[4]);
    printf("\n%u",p);

}