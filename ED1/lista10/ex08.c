#include<stdio.h>

int main(){

    int a;
    double b;
    scanf("%d ",&a);
    scanf("%lf",&b);
    void *p,*x;
    p = &a;
    x = &b;
    printf("%d",*(int *)p);
    printf(" %f",*(double *)x);
}