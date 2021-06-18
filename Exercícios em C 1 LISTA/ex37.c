
#include<conio.h>
#include<stdio.h>

int main()
{

int idade, qtdededias;

printf("Digite a sua idade: ");
scanf("%d", &idade);

qtdededias = idade*12*30;

printf("Sua idade em dias e: %d", qtdededias);

getch();
return 0;
}
