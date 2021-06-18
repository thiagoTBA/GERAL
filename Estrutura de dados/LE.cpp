#include<stdio.h>
#include<stdlib.h>

struct LISTA
{
	char string[41];
	int numero;
	struct LISTA *NEXT;
};
int main(void)
{
	int i;
	struct LISTA *lista;
	struct LISTA *inicio;
	
	lista=calloc(1,sizeof(struct LISTA));
	if (lista== NULL)
	{
		printf("\nErro de alocacao de memoria");
		exit(-1);
	}
	lista->NEXT = NULL;
	
	//guardando o inicio da lista
	inicio = lista;
	for(i=0;i<25;i++)
	{
		lista->numero = i;
		sprintf(lista->string, "Numero %2d",i);
		
		//aloca o poximo elemento da lista
		lista->NEXT=calloc(1,sizeof(struct LISTA));
		if (lista->NEXT = NULL)
		{
			printf("\nEro de alocacao de memoria");
			exit(-1);
		}
		//posiciona no proximo elemento
		lista = lista->NEXT;
		lista->NEXT = NULL;
	}
	
	//volta para o inicio da lista
	lista=inicio;
	while(lista->NEXT!=NULL);
	{
		printf("\nNumero = %d,String = %s", lista->numero,lista->string);
		
		//caminha elemento a elemento da lista
		lista=lista->NEXT;
	}
	
	lista=inicio;
	while(lista->NEXT!=NULL)
	{
		struct LISTA *next; 
		next=lista->NEXT;
		
		//libera o espaco do endereco aual e limpa o endereco atribuindo o NULL
		free(lista);
		lista=NULL;
		lista=next;
	}
	
 return 0;
}
