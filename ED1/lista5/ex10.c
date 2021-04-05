#include<stdio.h>

int main(){

int a=3,x=0,y=0,z=0;
printf("<<Subtracao de vetores>>");
int vetA[a],vetB[a],vetC[a];

while(x<a){
    printf("\nDigite o valor %d de A: ",x+1);
    scanf("%d",&vetA[x]);
    x++;
}
while(y<a){
    printf("\nDigite o valor %d de B: ",y+1);
    scanf("%d",&vetB[y]);
    y++;
}
vetC[0] = vetA[0]-vetB[0];
vetC[1] = vetA[1]-vetB[1];
vetC[2] = vetA[2]-vetB[2];

printf("\nO vetor C, definido como C = A-B e (%d,%d,%d)",vetC[0],vetC[1],vetC[2]);
}