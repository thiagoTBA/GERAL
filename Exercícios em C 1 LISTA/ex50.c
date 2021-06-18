#include<stdio.h>
#include<conio.h>

int main()
{

float DinReais,dolar,Marco,libra,c1,c2,c3;

dolar = 1.78;
Marco = 2.15;
libra = 3.21;

printf("Entre com o valor em Reais: ");
scanf("%f", &DinReais);

c1 = DinReais/dolar;
c2 = DinReais/Marco;
c3 = DinReais/libra;

printf("\nDolares: %.2f", c1);
printf("\nMarco: %.2f", c2);
printf("\nLibra: %.2f", c3);

getch();
return 0;
}
