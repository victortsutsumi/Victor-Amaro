#include<stdio.h>

int main(){
    
    char opcoes;
    float km,ms;
     printf("<<Conversor>>");
        printf("\n Digite uma opcao");
        printf("\n  1 - para converter de km/h para m/s");
        printf("\n  2 - para converter de m/s para km/h");
        printf("\n  q - para sair\n");
        scanf("%c",&opcoes);

    while(opcoes!='q'){
            if(opcoes=='1'){
                printf("Digite a velocidade (km/h): ");
                scanf("%f",&km);
                printf("A velocidade em m/s eh %f",km/3.6);
                printf("\n<<Conversor>>");
                printf("\n Digite uma opcao");
                printf("\n  1 - para converter de km/h para m/s");
                printf("\n  2 - para converter de m/s para km/h");
                printf("\n  q - para sair\n");
                

            } if(opcoes=='2'){
                    printf("Digite a velocidade (m/s): ");
                    scanf("%f",&ms);
                    printf("A velocidade em km/h eh %f",ms*3.6);
                    printf("\n<<Conversor>>");
                    printf("\n Digite uma opcao");
                    printf("\n  1 - para converter de km/h para m/s");
                    printf("\n  2 - para converter de m/s para km/h");
                    printf("\n  q - para sair\n");
                    
            } scanf("%c",&opcoes);
          
            }return 0 ;


}