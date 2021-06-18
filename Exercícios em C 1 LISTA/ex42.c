#include<stdio.h>
#include<conio.h>

int main()
{

float pes, polegadas,Milhas, jardas;

printf("Informa a medida em Pes: ");
scanf("%f", &pes);

polegadas = pes*12;
jardas = pes*0.333333;
Milhas = pes*0.000189;


printf("\nPes para polegadas: %.6f",polegadas);
printf("\nPes para jardas: %.6f",jardas);
printf("\nPes para milhas: %.6f",Milhas);

getch();
return 0;
}
