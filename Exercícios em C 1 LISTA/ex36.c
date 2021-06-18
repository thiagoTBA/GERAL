#include<stdio.h>
#include<conio.h>

int main()
{

float qtdeprestacao, quantidadespagas, vlprestacao,devedor,saldo;

printf("Digite a quantidade de prestaçao pagas: ");
scanf("%f", &quantidadespagas);
printf("Quantidade de prestacao que ainda faltam: ");
scanf("%f", &qtdeprestacao);
printf("Entre com o valor da prestacao: ");
scanf("%f", &vlprestacao);

saldo = quantidadespagas*vlprestacao;
devedor =  qtdeprestacao*vlprestacao;

printf("Voce pagou R$ %.2f em prestacao \n", saldo);
printf("\n Voce possui ainda um saldo devedor de R$ %.2f", devedor);

getch();
return 0;
}
