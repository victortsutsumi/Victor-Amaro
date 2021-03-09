#include<stdio.h>

int main(){

    float din_jose, din_carlos, poupa_jose, poupa_carlos, real, realx;
    din_jose = 50000;
    din_carlos = 25000;
    poupa_jose = 800;
    poupa_carlos = 3000;
    real = din_jose - din_carlos;
    realx = poupa_carlos - poupa_jose;

    printf("Quantos anos levarão para que Carlos fique com mais dinheiro que jose?");
    printf("\nLevara %f anos", (real/realx)/12);

}