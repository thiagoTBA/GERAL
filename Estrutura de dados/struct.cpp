#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//Usando estrutura para armazenar informaçoes

struct tipoendereco
{
	char rua[50];
	char nr[8];
	char bairro[50];
	char cidade [50];
	char sigla [50];
	char cep[12];
};
//ponto e virgula por que continua a estrutura
struct cadastro
{
	char idt[20];
	char nome[60];
	char tel[30];
	struct tipoendereco End;
};

int main ()
{
	system ("cls");
	struct cadastro dados;
	printf("Digite nome: ");
	scanf("%s",dados.nome);
	printf("Digite telefone: ");
	scanf("%s",dados.tel);
	printf("Digite Identidade: ");
	scanf("%s",dados.idt);
	
	printf("Digite Rua: ");
	scanf("%s",dados.End.rua);
	printf("Digite o N da casa: ");
	scanf("%s",dados.End.nr);
	printf("Digite o Bairro: ");
	scanf("%s",dados.End.bairro);
	printf("Digite a cidade: ");
	scanf("%s",dados.End.cidade);
	printf("Digite a Sigla Estado: ");
	scanf("%s",dados.End.sigla);
	printf("Digite o CEP: ");
	scanf("%s",dados.End.cep);
	
	printf("\n\n Nome: %s",dados.nome);
	printf("\n\n Identidade: %s",dados.idt);
	printf("\n\n Telefone: %s",dados.tel);
	printf("\n\n-------Endereco------");
	printf("\nEndereco: %s %s %s %s %s %s",
	dados.End.rua,dados.End.nr,dados.End.bairro,
	dados.End.cidade,dados.End.sigla,dados.End.cep);
	
	getch();
}
