#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void reajusta20(float*,float*);

int main ()
{	
	float val_preco,val_real;
	
	do
	{
		printf("\n\nInsira o preco atual:");
		scanf("%f",&val_preco);
		//funcao
		reajusta20(&val_preco,&val_real);
		printf("\n O preco novo e: %.2f",val_preco);
		printf("\n O aumento e: %.2f",val_real);
		
	} while(val_preco != 0.0);
	
	system("Pause");
	return 0;
}

void reajusta20(float*preco,float*reajuste)
{
	*reajuste=*preco * 0.2;
	*preco *= 1.2;
}
