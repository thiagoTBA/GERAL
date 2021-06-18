#include<stdio.h>
#include<conio.h>

int main(){

int va,vb,vc,aux, aux2;

printf("Digite um numero para VA: ");
scanf("%d", &va);
printf("Digite um numero para VB: ");
scanf("%d", &vb);
printf("Digite um numero para VC: ");
scanf("%d", &vc);

aux=va;
va=vb;
vb=aux;
vb=vc;


printf("O numero informado %d agora e: %d", vb,va);
printf("\nO numero informado %d agora e: %d", va,vb);
printf("\n O numero informado %d agora e: %d", vc,vb);

getch();
return 0;
}
