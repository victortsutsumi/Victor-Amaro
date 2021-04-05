#include<stdio.h>
#include<string.h>
struct datas{
    int dia;
    int mes;
    int ano;
};


int main(){ 
    int x;
    struct datas data[3];
    for(x=0;x<3;x++){
    printf("Insira o dia %d: ",x+1);
    scanf("%d",&data[x].dia);
    printf("Insira o mes %d: ",x+1);
    scanf("%d",&data[x].mes);
    printf("Insira o ano %d: ",x+1);
    scanf("%d",&data[x].ano);
    }

    if(data[1].ano > data[2].ano && data[1].ano > data[3].ano){
        printf("\n%d/%d/%d",data[1].dia,data[1].mes,data[1].ano);
    }else
    if(data[2].ano > data[1].ano && data[2].ano > data[2].ano){
         printf("\n%d/%d/%d",data[2].dia,data[2].mes,data[2].ano);
    }
    else  printf("\n%d/%d/%d",data[3].dia,data[3].mes,data[3].ano);

}