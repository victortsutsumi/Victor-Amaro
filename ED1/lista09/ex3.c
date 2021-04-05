#include<stdio.h>
#include<string.h>

struct endereco{
    char rua[50],cidade[20],estado[10],complemento[20],cep[20];
    int numero;
};

int main(){

    struct endereco ad[3];
    int x = 0;
    for(x=0;x<3;x++){
        
        printf("Digite o nome da sua rua: ");
        setbuf(stdin,NULL);
        gets (ad[x].rua);
        printf("Digita sua cidade: ");
        setbuf(stdin,NULL);
        gets (ad[x].cidade);
        printf("Digite o seu estado: ");
        setbuf(stdin,NULL);
        gets (ad[x].estado);
        printf("Digite o complemento: ");
        setbuf(stdin,NULL);
        gets (ad[x].complemento);
        printf("Digite seu CEP: ");
        setbuf(stdin,NULL);
        gets (ad[x].cep);
        printf("Digite o numero: ");
        scanf("%d",&ad[x].numero);
        
        }
        printf("\n%s\n\n",ad[3].estado);
        for(x=0;x<3;x++){
            printf("Rua %s, %s, numero %d, %s-%s, CEP:%s\n",
            ad[x].rua,ad[x].complemento,ad[x].numero,ad[x].cidade,ad[x].estado,ad[x].cep);
        }
    
    
    
    }
