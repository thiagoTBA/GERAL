#include<stdio.h>
#include<conio.h>

int main()
{

float salMinimo, sal, qtdeSal;

printf("Entre com o seu salario: ");
scanf("%f", &sal);
printf("Entre com o valor do salario minimo: ");
scanf("%f", &salMinimo);

qtdeSal = sal/salMinimo;

printf("Voce ganha aproximadamente %.2f salarios Minimos", qtdeSal);

getch();
return 0;
}
