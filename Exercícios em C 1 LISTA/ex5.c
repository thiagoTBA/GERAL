#include<stdio.h>
#include<conio.h>

int main(){

float n1,n2,n3,n4,n5, media;

printf("Digite as 5 notas: \n");
scanf("%f%f%f%f%f", &n1,&n2,&n3,&n4,&n5);

media = (n1*1+n2*2+n3*3+n4*4+n5*5)/15;

printf("A media das notas digitadas sao: %.1f", media);
getch();
return 0;
}
