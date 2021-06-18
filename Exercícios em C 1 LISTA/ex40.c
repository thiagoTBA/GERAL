#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

int Termo, razao;
float PG;

printf("Digite o primeiro termo da P.G: ");
scanf("%d", &Termo);
printf("Entre com a razao: ");
scanf("%d", &razao);

PG = Termo*pow(razao,6);

printf("O Setimo termo da PG e: %.2f", PG);

getch();
return 0;
}
