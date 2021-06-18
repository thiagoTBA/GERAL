#include<stdio.h>
#include<conio.h>

int main()
{
    float SA, TP, TS;

    printf("Informe o seu salario: ");
    scanf("%f", &SA);
    printf("Informe quanto tempo trabalhou na empresa: ");
    scanf("%f", &TP);

    TS = (SA*0.05)+(SA/TP)+SA;

printf("O seu salario ao sair da empresa e: R$ %.2f",TS);

getch();
return 0;

}
