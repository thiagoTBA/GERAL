#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

float P,I,N,valorAcumulado;

printf("Entre com o valor da aplicacao: ");
scanf("%f", &P);
printf("Entre com o valor da Taxa: ");
scanf("%f", &I);
printf("Entre com numero de meses: ");
scanf("%f", &N);

valorAcumulado = P*(pow(1+I,N)-1)/I;

printf("O Valor acumulado e: %.2f", valorAcumulado);

getch();
return 0;
}
