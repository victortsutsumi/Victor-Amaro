//Exercicio 11//

#include<stdio.h>
#include<math.h>

int main(){

    printf("<<Numero Complexo>>");
    printf("\nInforme a partel real de z: ");
    int a,b,c,d;
    scanf("%d",&a);
    printf("Informe a parte imaginaria de z: ");
    scanf("%d",&b);
    printf("Informe a parte real de w: ");
    scanf("%d",&c);
    printf("Informe a parte imaginaria de w:");
    scanf("%d",&d);
     
    float sum_real,sum_imag,sub_real,sub_imag,mult_real,mult_imag;
     
    sum_real = a+c;
    sum_imag = b+d;
    sub_real = a-c;
    sub_imag = b-d;
    mult_real = (a*c)-(b*d);
    mult_imag = (a*d)+(b*c);

    printf("\nz + w = %.1f + %.1fi", sum_real, sum_imag);
    printf("\nz - w = %.1f + %.1fi", sub_real, sub_imag);
    printf("\nz * w = %.1f+%.1fi", mult_real,mult_imag);
    printf("\n|z| = %.4f", sqrt((a*a)+(b*b)));
    printf("\n|w| = %.4f", sqrt((c*c)+(d*d)));
    
}