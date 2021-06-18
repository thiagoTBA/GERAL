#include<conio.h>
#include<stdio.h>

int main(){

float n1,n2,n3,n4,n5, media;

printf("Digite os cinco numeros: ");
scanf("%f%f%f%f%f", &n1,&n2,&n3,&n4,&n5);

media = (n1*2+n2*4,n3*6,n4*8,n5*10)/30;

printf("A media ponderado dos numeros digitados Sao: %f", media);
getch();
return 0;
}
