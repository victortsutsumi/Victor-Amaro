#include<stdio.h>

int main(){

    int a = 40;
    unsigned int *p;
    p = &a;

    printf("%u",&a);
    printf("\n%u",p);

}