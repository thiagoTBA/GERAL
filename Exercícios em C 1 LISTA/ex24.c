#include<stdio.h>
#include<conio.h>

int main()
{
    float C,F;

    printf("Digite o valor em Graus Celsius: ");
    scanf("%f", &C);

    F = (9*C)/5+32;

  printf("A Temperatuda %.2f Celsius, equivale a %.2f Fahrenheit",C,F);
  getch();
  return 0;
}
