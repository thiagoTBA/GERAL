#include<conio.h>
#include<stdio.h>
#include<math.h>

int main()
{

    float C,J,F,M;


    printf("Digite o Capital: ");
    scanf("%f", &C);
    printf("Digite a taxa de juros Mensal: ");
    scanf("%f", &J);
    printf("Digite o periodo de aplicacao em Meses: ");
    scanf("%f", &M);

    F = C * pow(1+J/100,M);

    printf("O Montante arrecadado e: %.2f", F);
    getch();
    return 0;
}
