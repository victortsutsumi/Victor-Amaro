#include<stdio.h>

int main(){

    unsigned int *a,*b,*c,*d,*e;
    int val[5] = {2,4,5,8,10};
    a = &val[0];
    b = &val[1];
    c = &val[2];
    d = &val[3];
    e = &val[4];

    printf("%d %d %d %d %d \n",*a,*b,*c,*d,*e);
    printf("%u %u %u %u %u \n",a,b,c,d,e);

}