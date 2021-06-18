#include<stdio.h>
#include<conio.h>

int main(){

float num, deno,decimal;

printf("Digite o numerador: ");
scanf("%f", &num);
printf("Digite o denominador: ");
scanf("%f", &deno);
decimal = num/deno;
printf("O numero decimal da fracao e: %f", decimal);
getch();
return 0;
}
