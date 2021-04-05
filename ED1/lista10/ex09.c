#include<stdio.h>

int main(){

    double vetor[10] = {2,2,4,4,5,6,7,8,9,10};
    
    for(int x=0;x<10;x++){
        *vetor = *(vetor+(x));
        printf("%.0lf\n",*vetor);
    }
}