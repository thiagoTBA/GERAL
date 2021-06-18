
#include<stdio.h>
#include<conio.h>

int main()
{

 float salarioBase,grati,imposto;

 printf("Digite o seu salario base: ");
 scanf("%f", &salarioBase);

 grati = salarioBase*1.09;

 imposto = (grati*6.5)/100;

 printf("Salario com gratificacao: R$ %.2f", grati);
 printf("\nSalario com desconto do imposto: R$ %.2f",grati-imposto);

getch();
return 0;
}
