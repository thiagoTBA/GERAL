#include<stdio.h>
#include<conio.h>

int main()
{

float pesoSaco,gato1, gato2,resto, R1,R2, Qtde;

printf("Entre com o peso do saco de racao em KG: ");
scanf("%f", &pesoSaco);
printf("Quantidade de Racao para o Gato 1: ");
scanf("%f", &gato1);
printf("Quantidade de Racao para o Gato 2: ");
scanf("%f", &gato2);

R1 = gato1/1000;
R2 = gato2/1000;

Qtde = (R1+R2)*5;
resto = pesoSaco-Qtde;

printf("\n Vai restar no saco apos 5 dias %.3f KG", resto);
getch();
return 0;
}
