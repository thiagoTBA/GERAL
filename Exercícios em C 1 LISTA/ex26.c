#include<conio.h>
#include<stdio.h>

int main()
{
 float A1,A2,A3,A4,A5,D1,D2,D3,D4,D5;
 char n1[15],n2[15],n3[15],n4[15],n5[15];
 float pcd1,pcd2,pcd3,pcd4,pcd5, somaTotal;

printf("Digite o nome do produto: ");
scanf("%s", &n1);
printf("Digite o preco: ");
scanf("%f", &A1);
printf("Digite o desconto: ");
scanf("%f", &D1);

pcd1 = (A1*D1)/100;

printf("Produto: %s\n", n1);
printf("Preco: %.2f\n", A1);
printf("Desconto: %.2f\n", D1);
printf("Preco com desconto: %.2f\n", A1-pcd1);
//produto 2
printf("Digite o nome do produto: ");
scanf("%s", &n2);
printf("Digite o preco: ");
scanf("%f", &A2);
printf("Digite o desconto: ");
scanf("%f", &D2);

pcd2 = (A2*D2)/100;

printf("Produto: %s\n", n2);
printf("Preco: %.2f\n", A2);
printf("Desconto: %.2f\n", D2);
printf("Preco com desconto: %.2f\n", A2-pcd2);
//produto 3
printf("Digite o nome do produto: ");
scanf("%s", &n3);
printf("Digite o preco: ");
scanf("%f", &A3);
printf("Digite o desconto: ");
scanf("%f", &D3);

pcd3 = (A3*D3)/100;

printf("Produto: %s\n", n3);
printf("Preco: %.2f\n", A3);
printf("Desconto: %.2f\n", D3);
printf("Preco com desconto: %.2f\n", A3-pcd3);
//produto 4
printf("Digite o nome do produto: ");
scanf("%s", &n4);
printf("Digite o preco: ");
scanf("%f", &A4);
printf("Digite o desconto: ");
scanf("%f", &D4);

pcd4 = (A4*D4)/100;

printf("Produto: %s\n", n4);
printf("Preco: %.2f\n", A4);
printf("Desconto: %.2f\n", D4);
printf("Preco com desconto: %.2f\n", A4-pcd4);
//produto 5
printf("Digite o nome do produto: ");
scanf("%s", &n5);
printf("Digite o preco: ");
scanf("%f", &A5);
printf("Digite o desconto: ");
scanf("%f", &D5);

pcd5 = (A5*D5)/100;

printf("Produto: %s\n", n5);
printf("Preco: %.2f\n", A5);
printf("Desconto: %.2f\n", D5);
printf("Preco com desconto: %.2f\n", A5-pcd5);

somaTotal = (A1-pcd1)+(A2-pcd2)+(A3-pcd3)+(A4-pcd4)+(A5-pcd5);

printf("Valor Total da Compra R$ %.2f", somaTotal);
getch();
return 0;
}
