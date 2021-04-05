//Exercício 8//

#include<stdio.h>
 
int main(){
  
  
  printf("\n<<Pagamento encanador>>");
  printf("\nDigite o numero de dias trabalhados: ");
  int x;
  scanf("%d",&x);
  printf("Valor bruto R$: %d", x*30);
  printf("\nValor liquido R$: %.2f", (x*30)-((x*30)-(x*30*0.04))*0.08-(x*30*0.04));
  printf("\nISS R$: %.2f", x*30*0.04);
  printf("\nIR R$: %.2f", ((x*30)-(x*30*0.04))*0.08);

  }