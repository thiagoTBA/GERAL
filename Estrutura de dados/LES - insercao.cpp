#include<stdio.h>
#include<stdlib.h>
#define tam 5

void insercao (int*a)
{
	int i,j,x;
	for(i=1;i<tam;i++)
	{
		x=a[i];
		j=i-1;
		a[0]=x;
			while (x<a[j])
			{
				a[j+1]=a[j];
				j--;
			}
		a[j+1]=x;
	}
}

int main ()
{
	system("cls");
	
	printf("\n Metodo de insercao\n");
	
	int lista[tam],i;
	for(i=1;i<tam;i++)
	{
		printf("\n Digite o %d numero: ",i);
		scanf("%d",&lista[i]);
	}
	printf("\n\n Lista original ");
	
	for (i=1;i<tam;i++)
	{
		printf(" %d",lista[i]);
	}
	insercao(lista);//chamada pra ordenacao dos valores
	
	printf("\n\n Lista Ordenada ");
	for(i=1;i<tam;i++)
	{
		printf(" %d",lista[i]);
	}
	system("pause");
	
}
