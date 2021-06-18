#include <stdio.h>
#include <stdlib.h>

//PROJETO "Marcaçao de consulta"
//DESENVOLVIDO POR THIAGO BRITO DE ASSIS 
//VERSAO:ALFHA 1.0
//DATA - 04/11/2017

/*
Faça um programa que manipule uma lista contendo informações 
sobre dez pacientes (nome do paciente, nome do médico, data de nascimento e sexo). 
Esse programa deverá implementar as seguintes rotinas (funções).
a) Cadastrar pacientes;
b) Mostrar elementos na ordem de cadastramento;
c) Excluir pacientes individualmente;
d) Alterar pacientes individualmente;
e) Excluir pacientes por médico. 
f) Alterar pacientes por médico.
"Os elementos podem ser inseridos sem qualquer ordenação (utilizar um vetor e observar que não poderão ser cadastrados mais de dez pacientes);
"Para realizar a exclusão de pacientes individualmente deve-se informar o nome do paciente que se deseja remover;
"Para realizar a exclusão de pacientes por médico, deve-se informar o nome do médico cujos pacientes serão excluídos da lista.
*/

struct conta_cliente {
    int num;
    float saldo;
    char nome[35];
 };
 struct conta_cliente conta[15];
 int i,op,posicao,achou,num_conta;
 float saldo_cli,menor_saldo;
 char nome_cli[40];

void cadastrar()
 {
     achou = 0;
     printf("Digite o numero da conta a ser incluida: ");
     scanf("%d",&num_conta);

     if (conta[num_conta-1].num != 0)
      achou = 1;

if (achou == 1)
       printf(" Ja existe conta cadastrada com esse numero\n ");
      else
      {    posicao = num_conta-1;
	   printf("Informe o Nome do Cliente: ");
	   scanf("%s",&conta[posicao].nome);

printf("Informe o Saldo do Cliente: ");
	scanf("%f",&conta[posicao].saldo);
	conta[posicao].num = num_conta;
	printf(" Conta Cadastrada com   Sucesso\n ");
      }
 }

void visualizar()
 {
       printf("Digite o nome do Cliente a ser Consultado: ");
       scanf("%s",&nome_cli);
       achou = 0;

for(i=0;i<=9;i++)
  { if (strcmp(conta[i].nome,nome_cli)==0)
	 {
	   printf("Numero da Conta: %1d\n",conta[i].num);
	   printf("Nome...........: %s\n",conta[i].nome);
	   printf("Saldo..........: %2.2f\n",conta[i].saldo);
achou = 1;
   break; /*Comando C para sair incondicionalmente de instruções         
    for...while, switche e do ...while*/
	 }
   }
   if (achou == 0)
	  printf(" Nao existe Conta Cadastrada para este cliente\n");
 }

void excluir()
 {
       i = 0;
       achou = 0;
       menor_saldo=1000000000;
       while (i <= 9)
{ 
if (conta[i].num != 0) 
	 { if (conta[i].saldo < menor_saldo)
	     {menor_saldo = conta[i].saldo;
		  achou = 1;
		  posicao = i;
	     }
	 }
	  i = i + 1;
    }
    if (achou == 0)
	  printf(" Nenhuma Conta foi Cadastrada\n");
	else
	{  conta[posicao].num = 0;
	   conta[posicao].saldo = 0;
	   printf("Conta excluida com sucesso\n");
	}
 }

void menu()
 {
  do
  { 
   printf("Menu de Opcoes:\n");
   printf("1 - Cadastrar Contas\n");
   printf("2 - Visualizar Contas Cliente\n");
   printf("3 - Excluir Conta de menor saldo\n");
   printf("4 - Sair\n\n");
  printf("Digite a sua Opcao: ");
  scanf("%d",&op);
  if (op < 1 || op > 4)
     printf("Opcao Invalida");
     switch (op){
     case 1: cadastrar(); break;
     case 2: visualizar(); break;
     case 3: excluir();      break;
    }
 }while (op != 4);
}

main ()
{
 for(i=0;i<=9;i++)
 {   conta[i].num = 0;
     conta[i].saldo = 0;
 }

 menu();
 return 0;
}



