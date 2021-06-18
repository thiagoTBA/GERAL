#include<conio.h>
#include<stdio.h>

int main()
{

 float prest,valor,taxa;
 int tempo;
 printf("Digite o valor da prestacao: ");
 scanf("%f", &valor);
 printf("Digite a taxa de juros: ");
 scanf("%f", &taxa);
 printf("Digite os dias de atraso: ");
 scanf("%d", &tempo);

 prest = valor+(valor*(taxa/100)*tempo);

 printf("O valor atualizado da prestacao e: R$ %.2f", prest);

 getch();
 return 0;
}
