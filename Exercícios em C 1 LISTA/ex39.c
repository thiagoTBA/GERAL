#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

float x1,y1,x2,y2,dist;

printf("Entre com as coordenadas do ponto A: ");
scanf("%f%f", &x1,&y1);
printf("Entre com as coordenadas do ponto B: ");
scanf("%f%f", &x2,&y2);

dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

printf("A distancia entre os dois pontos: %.2f", dist);
getch();
return 0;
}
