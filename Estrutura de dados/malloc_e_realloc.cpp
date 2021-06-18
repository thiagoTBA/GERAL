#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int *p;
	int i,k,n;
	
	//iniciando malloc
	printf("\nDigite a quantidade de numeros que serao digitados: ");
	scanf("%d",&i);
	
	p=(int*)malloc(i*sizeof(int));
	
	if (p==NULL)
	{
		printf("\n Erro de alocacao de memoria");
		exit(1);
	}
	
	for(k=1;k<=i;k++)
	{
		printf("Digite o numero para o indice %d ",k);
		scanf("%d",&p[k]);
	}
	
	for(k=1;k<=i;k++)
	{
		printf("O Numero do indice %d e %d\n",k,p[k]);
	}
	
	//iniciando realloc
	printf("\n Digite quantos elementos quer adicionar ao vetor: ");
	scanf("%d",&n);
	
	p=(int*)realloc(p,(i+n)*sizeof(int));
	
	if(p==NULL)
	{
		printf("\nErro de re-alocacao de memoria");
		exit(1);
	}
	
	for(k=1;k<=(n+i);k++)
	{
		printf("Digite o numero para o indice %d ",k);
		scanf("%d",&p[k]);
	}
	
	for(k=1;k<=(i+n);k++)
	{
		printf("O numero do indice %d e %d\n",k,p[k]);
	}
	
	free(p);
	
	return 0;
}
