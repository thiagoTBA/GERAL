#include<stdio.h>
#include<conio.h>

int main()
{

int anosqfuma,cfumadosDia;
float  prCarteira, DG;

printf("Quantos anos que e Fumante?: ");
scanf("%d", &anosqfuma);
printf("Quantos cigarros fuma por dia?: ");
scanf("%d", &cfumadosDia);
printf("Valor da carteira de cigarros: ");
scanf("%f", &prCarteira);

DG = (365*cfumadosDia*anosqfuma)/prCarteira;

printf("Dinheiro gasto com cigarros e: R$ %.2f", DG);

getch();
return 0;
}
