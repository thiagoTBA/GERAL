
#include<stdio.h>
#include<conio.h>

int main()
{

float peso,novopeso1, novopeso2, novopeso3;

printf("Informe o seu peso: ");
scanf("%f", &peso);

novopeso1 = peso*1.25;
novopeso2 = (peso*15)/100;
novopeso3 = peso - novopeso2;


printf("O seu peso com 25%% a mais: %.2f KG", novopeso1);
printf("\n Seu peso com menos 15%%: %.2f KG",novopeso3);
getch();
return 0;
}
