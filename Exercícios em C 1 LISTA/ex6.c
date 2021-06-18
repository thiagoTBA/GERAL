#include<stdio.h>
#include<stdlib.h>

int main(){

int n1, A, S, sub,mult;

printf("Digite u numero inteiro e positivo: ");
scanf("%d", &n1);

A = n1-1; // sucessor do numero digitado
S = n1+1; // antecessor do numero digitado
sub = n1-A;
mult = n1*S;
printf("\nAntecessor: %d\n", A);
printf("\nSucessor: %d\n", S);
printf("\nSubtracao do numero com o seu antecessor: %d\n", sub);
printf("\n Multiplicacao do numero com o seu sucessor: %d\n",mult);
getch();
return 0;
}
