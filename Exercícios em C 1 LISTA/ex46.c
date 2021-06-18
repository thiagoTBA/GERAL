#include<stdio.h>
#include<conio.h>

int main()
{

float valorSalm, qtdedeKW,valorKW,total, CalDesconto,desconto;

printf("Entre com o valor do Salario minimo: ");
scanf("%f", &valorSalm);
printf("Entre com a quantidade de KW consumidos: ");
scanf("%f", &qtdedeKW);

valorKW = valorSalm/6;
total = valorKW*qtdedeKW;
CalDesconto = (total*15)/100;
desconto = total - CalDesconto;

printf("Valor de cada KiloWatts: R$ %.2f", valorKW);
printf("\nValor a ser pago: R$ %.2f", total);
printf("\n O valor a ser pago com 15%% de desconto: R$ %.2f", desconto);

getch();
return 0;
}
