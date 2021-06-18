#include<stdio.h>
#include<conio.h>

int main(){
float quociente,resto;
int n1,n2;

printf("Digite dois numeros inteiros: ");
scanf("%d%d", &n1, &n2);

quociente = n1/n2;
resto = n1%n2;

printf("Dividendo: %d",n1);
printf("\n Divisor: %d ", n2);
printf("\n Quociente: %.2f", quociente);
printf("\n Resto: %d", resto);

getch();
return 0;
}
