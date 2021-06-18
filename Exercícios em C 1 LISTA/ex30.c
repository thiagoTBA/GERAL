#include<stdio.h>
#include<conio.h>

int main()
{

    int tipo1,tipo2,tipo3,QuantidadeVendidos;
    float total, vl1,vl2,vl3;


printf("Digite a quantidade vendida do tipo 1: ");
scanf("%d", &tipo1);
printf("Digite a quantidade vendida do tipo 2: ");
scanf("%d", &tipo2);
printf("Digite a quantidade vendida do tipo 3: ");
scanf("%d", &tipo3);

QuantidadeVendidos = tipo1+tipo2+tipo3;

vl1 = tipo1*1.25;
vl2 = tipo2*1.30;
vl3 = tipo3*0.75;
total = vl1+vl2+vl3;
printf("Total de Picoles vendidos: %d",QuantidadeVendidos);
printf("\nTipo 1: R$ %.2f. Quantidade: %d",vl1,tipo1);
printf("\nTipo 2: R$ %.2f. Quantidade: %d",vl2, tipo2);
printf("\nTipo 3: R$ %.2f. Quantidade: %d",vl3,tipo3);
printf("\nTotal Arrecadado: R$ %.2f", total);
getch();
return 0;
}
