#include<stdio.h>
#include<string.h>

int main(void){

    char buff[5];
    int pass = 0;
    
    printf("\n Entre com a senha: \n");
    fgets(buff,4,stdin);

    if(strcmp(buff,"1234")){
        printf("\n Senha Errada \n");
    } else {
        printf("\n Senha Correta \n");
        pass = 1;
    }

    if(pass){

        printf("\n Acesso liberado \n");
    }else{
        printf("\n Acesso negado \n");
    }

    printf("%c %c %c",buff[3],buff[4],buff[5]);
}