#include<stdio.h>
#include<conio.h>

int main()
{

float altdegrau, metros,calculo;

printf("Digite a altura do Degrau(M): ");
scanf("%f",&altdegrau);
printf("Entre com a altura que deseja chegar: ");
scanf("%f", &metros);

calculo = metros/altdegrau;

printf("Voce vai subir %.f degraus", calculo);


getch();
return 0;
}
