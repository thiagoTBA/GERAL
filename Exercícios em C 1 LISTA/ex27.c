#include<stdio.h>
#include<conio.h>

int main()
{
 float valor,total;

    printf("Digite o valor da comanda: ");
    scanf("%f", &valor);

   total = valor*1.11;
    printf("Acrescimo %.2f\n", total-valor);
    printf("Sua conta com + 11%% e: %.2f", total);
 getch();
 return 0;
}
