#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

    float raio,PI = 3.1415,V;

    printf("Digite o valor do Raio da Esfera: ");
    scanf("%f", &raio);

    V = (4*PI*pow(raio,3))/3;

    printf("A Esfera Possui %.2f de volume \n", V);

    getch();
    return 0;
}
