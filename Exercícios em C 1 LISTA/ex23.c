#include<conio.h>
#include<stdio.h>

int main()
{

float valorProduto, valorDesconto, novoValor;

printf("Digite o valor do produto: ");
scanf("%f", &valorProduto);

valorDesconto = (valorProduto*23)/100;

novoValor = valorProduto - valorDesconto;

printf("23%% de Desconto: %.2f\n", valorDesconto);
printf("\nO valor com desconto e: %.2f\n", novoValor);

getch();
return 0;
}
