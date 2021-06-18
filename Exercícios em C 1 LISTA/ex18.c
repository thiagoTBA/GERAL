#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

 float raio, perimetro, area,PI;
 PI = 3.1415;

 printf("Digite o valor do Raio do circulo: ");
 scanf("%f", &raio);

 perimetro = 2*PI*raio;
 area = PI*pow(raio,2);

printf("O perimetro da circunferencia: %.2f", perimetro);
printf("\n A area do circulo e: %.2f", area);

getch();
return 0;
}
