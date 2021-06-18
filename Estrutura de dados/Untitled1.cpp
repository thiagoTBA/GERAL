#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main ()
{
	
	int tam,i;
	int *num;
	
	printf("Digite o tamanho do vetor:");
	scanf("%d",&tam);
	
	num=(int*)malloc(tam*sizeof(int));
	
	for (i=0;i<tam;i++)
	{
		printf("\nPreencha o %d numero do vetor: ",i+1);
		scanf("%d",&num[i]);
	}
		printf("\nConteudo do vetor\n");
	for (i=0;i<tam;i++)
	{
		printf("%d ",num[i]);
	}
//desalocar da memoria
free(num);
getch();
}
