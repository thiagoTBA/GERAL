#include<stdio.h>
#include<conio.h>
#include<math.h>// biblioteca de funcoes pre-definidas

int main(){

float num, quad,tri,raiz,soma;

// entrada de dados
printf("Digite um numero positivo: ");
scanf("%f", &num);

//processamentos
quad = pow(num,2); // formula da potencia
tri = num*3;
raiz = sqrt (num); //formula raiz quadrada
soma = quad+tri;

//saida de dados
printf("Numero digitado: %.f", num);
printf("\n Quadrado: %.f", quad);
printf("\n Triplo: %.f", tri);
printf("\n Raiz: %.2f", raiz);
printf("\n Soma do quadrado pelo seu triplo: %.f", soma);
getch();
return 0;
}
