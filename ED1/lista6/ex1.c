#include<stdio.h>

int main(){

    int i,j,z;
    for(i=0;i<14;i++){
        for(j=0;j<7;j++){
            z = (32+j)+i*7; 
            if(z>=127){
                return 0;
            }
        printf("%d %c\t",z,z);
        }printf("\n");

}
}