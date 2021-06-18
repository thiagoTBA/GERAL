#include<stdio.h>
#include<conio.h>

int main()
{

int AnoNasc,idade,idadeMes,idade2;

    printf("Entre com o ano do seu nascimento: ");
    scanf("%d", &AnoNasc);

  idade=2014-AnoNasc;
  idadeMes = idade*12;
  idade2 = 2050-AnoNasc;

  printf("Voce tem %d anos", idade);
  printf("\n Voce tem %d meses de idade", idadeMes);
  printf("\n Em 2050 voce tera %d anos",idade2);

getch();
return 0;
}
