#include<stdio.h>
#include<stdlib.h>

struct nasc
{
	char ano;
	char mes;
	char dia;
};
struct cadastro
{
	char nome[20];
	float sal;
;
};


int main()
{
	struct cadastro dados;
	
	printf("Digite o nome: ");
	scanf("%s",dados.nome);
	printf("Digite o salario: ");
	scanf("%f",dados.sal);
	
	struct nasc End;
	printf("Nascimento");
	printf("\n Dia: ");
	scanf("%d",End.dia);
	printf("Mes: ");
	scanf("%d",End.mes);
	printf("Ano: ");
	scanf("%d",End.ano);
	return 0;
}
