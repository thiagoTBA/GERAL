#include<stdlib.h>
#include<stdio.h>

int main(){

float saldo, novoSaldo;

printf("Digite o saldo: ");
scanf("%f", &saldo);

novoSaldo = saldo*1.062;

printf("O saldo atualizado com 6,2%%: %.2f\n", novoSaldo);
system("pause");
return 0;
}
