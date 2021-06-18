#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

float n1,n2,n3,soma,quadrado,mult,raiz;

printf("Digite tres numeros: ");
scanf("%f%f%f", &n1,&n2,&n3);

soma = n1+n2+n3;
quadrado = pow(n1,2);
mult = n1*n2*n3;
raiz = sqrt(mult);

printf("A soma dos tres numeros: %.f", soma);
printf("\nQuadrado do primeiro numero: %.f", quadrado);
printf("\nRaiz do produto dos tres numeros: %f", raiz);

getch();
return 0;
}
