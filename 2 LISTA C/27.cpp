#include<stdio.h>
#include<stdlib.h>

int main(){

float poup, frf, npoup, nfrf;

printf("Informe o valor na poupanca: ");
scanf("%f", &poup);
printf("Informe o valor do fundo de renda fixa : ");
scanf("%f", &frf);

npoup = poup*1.030;
nfrf  = frf*1.040;

printf("O saldo da poupanca com  3%%: %.2f\n", npoup);
printf("O saldo do fundo com 4%%: %.2f\n", nfrf);
system("pause");
return 0;
}
