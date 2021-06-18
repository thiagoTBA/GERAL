#include<stdio.h>
#include<conio.h>

int main(){

float compri,largura,preco,total, tamanho;

printf("Digite o comprimento: ");
scanf("%f", &compri);
printf("Digite a Largura: ");
scanf("%f", &largura);
printf("Digite o valor do metro quadrado do carpete: ");
scanf("%f", &preco);

tamanho = compri*largura;
total = tamanho*preco;

printf("O valor a ser gasto e: R$ %.2f", total);

getch();
return 0;
}
