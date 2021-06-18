#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

float num1, num2, diferenca, quad1, quad2, QDiferenca,QDiferenca2;

printf("Digite dois numeros: ");
scanf("%f%f", &num1, &num2);

diferenca = num1-num2;
QDiferenca = pow(diferenca,2);
quad1 = pow(num1,2);
quad2 = pow(num2,2);
QDiferenca2 = quad1-quad2;

printf("Diferenca entre os numeros: %.2f", diferenca);
printf("\n Quadrado da diferenca entre os numeros: %.2f",QDiferenca);
printf("\n Quadrado do primeiro numero %.2f e quadrado do segundo numero %.2f", quad1,quad2);
printf("\n Diferenca entre os quadrados dos numeros: %.2f",QDiferenca2);

getch();
return 0;
}
