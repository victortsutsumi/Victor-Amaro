#include<stdio.h>

int main(){

    double vetor[10] = {2,2,4,4,5,6,7,8,9,10};
    
    for(int x=10;x>0;x--){
        if(x==1){
            printf("%.0lf",*vetor);
            return 0;
        }
        *vetor = *(vetor+(x-1));
        printf("%.0lf\n",*vetor);
    }
}