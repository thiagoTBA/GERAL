#include<stdio.h>
#include<conio.h>

int main(){

float salario, percentual, valorAumento,novosalario;

printf("Digite o seu salario: ");
scanf("%f", &salario);
printf("Digite o percetual de aumento: ");
scanf("%f", &percentual);

valorAumento = (salario*percentual)/100;
novosalario = salario+valorAumento;

printf("Valor do Aumento: %.2f", valorAumento);
printf("\n Novo salario: %.2f", novosalario);
getch();
return 0;
}
