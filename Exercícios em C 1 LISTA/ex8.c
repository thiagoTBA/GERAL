#include<stdio.h>
#include<conio.h>

int main(){

char nome1[15],nome2[15];
int id1, id2, mult;

printf("Digite o primeiro nome: ");
scanf("%s", &nome1);
printf("Digite o segundo nome: ");
scanf("%s", &nome2);

printf("Digite a primeira idade: ");
scanf("%d", &id1);
printf("Digite a segunda idade: ");
scanf("%d", &id2);

mult = id1*id2;
printf("A multiplicacao das idades e: %d", mult);
getch();
return 0;
}
