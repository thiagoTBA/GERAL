#include<stdio.h>

void soma (int,int,int*);

int main ()
{
	int valora,valorb,resul;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &valora);
	printf("Digite o segundo valor: ");
	scanf("%d",&valorb);
	
	printf("\nEndereco: %d\n",&resul);
	
	soma(valora,valorb,&resul);
	
	printf("\nSoma:%d ",resul);
	
	return 0;
}

void soma(int valora, int valorb, int* resul)
{
	printf("Endereco: %d\n",resul);
	*resul=valora+valorb;
	return;	
}
