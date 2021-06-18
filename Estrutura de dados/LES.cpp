#include<stdio.h>
#include<stdlib.h>
#define TAM 5

void remocao(int *a)
{
int i;
  for (i=0;i<(TAM);i++)
  {
   a[i] = a[i+1];
  
    } 
   a[i+1] = 0;

}
void insercao(int *a)
{
  int i,j,x;
  for (i=1;i<TAM;i++)
  {
  x = a[i];
  j = i-1;
  a[0] = x; //posicao sentinela
  while (x < a[j]) {
   a[j+1] = a[j];
   j--;
  }
  a[j+1] = x;
    }
}
int main()
{
  int op;   
  int lista[TAM],i;
  while (op >= 1) 
  {
  system("cls");
  printf("\n*****MENU******");
  printf("\n1 - INSERCAO");
  printf("\n2 - LISTAGEM");
  printf("\n3 - ORDENACAO PELO METODO INSERCAO");
  printf("\n4 - REMOCAO");
  printf("\n0 - SAIR");
  printf("\nDigite sua Opcao: ");
  scanf("%d",&op);
  if (op == 1)
  {
    for (i=1;i<TAM;i++) 
    {
      printf("\nDigite o %do numero: ",i);
      scanf("%d",&lista[i]);
    }
  }
  
  if (op == 2)
  {
      for (i=1;i<TAM;i++)
      {
        printf("%d ",lista[i]);
      }
  }
  
  if (op == 3)
  {
    insercao(lista);
    printf("\n\nLISTA ORDENADA COM SUCESSO...");     
  }
  
    if (op == 4)
  {
    remocao(lista);
    printf("\n\PRIMEIRO ELEMENTO REMOVIDO SUCESSO...");     
  }
    
  system("pause");
}
}
