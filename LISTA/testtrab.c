#include <stdio.h>
#include <stdlib.h>


struct cadastro_paciente {
    int num,datanasc,gensexo;
    float saldo;
    char nome[35],nomemedico[35];
 };
 struct cadastro_paciente cadastrar[10];
 int data_nasc[10],gen_sexo,cod_paci,achou,posicao,op;
 float saldo_cli,menor_saldo;
 char nome_pac[40],nome_med[40];

void cadastro()
 {
     achou = 0;
     printf("Digite um codigo para o paciente: ");
     scanf("%d",&cod_paci);

     if (cadastro[cod_paci-1].num != 0)
      achou = 1;

if (achou == 1)
       printf(" Ja existe um codigo cadastrada com esse numero\n ");
      else
      { posicao = cod_paci-1;
	   printf("Informe o Nome do Cliente: ");
	   scanf("%s",&cadastro[posicao].nome);
	   printf("Informe o Nome do Medico do paciente: ");
	   scanf("%s",&cadastro[posicao].nomemedico);
	   printf("Informe a data de nascimento do paciente: ");
	   scanf("%s",&cadastro[posicao].datanasc);
	   printf("Informe o genero do paciente: ");
	   scanf("%s",&cadastro[posicao].gensexo);



void menu()
 {
  do
  { 
   printf("Menu de Opcoes:\n");
   printf("1 - Cadastrar pacientes\n");  //a) Cadastrar pacientes;
   printf("2 - Mostrar elementos na ordem de cadastramento\n"); //b) Mostrar elementos na ordem de cadastramento;
   printf("3 - Excluir pacientes individualmente\n"); //c) Excluir pacientes individualmente;
   printf("4 - Alterar pacientes individualmente\n"); //d) Alterar pacientes individualmente;
   printf("5 - Excluir pacientes por médico\n"); //e) Excluir pacientes por médico. 
   printf("6 - Alterar pacientes por médico\n"); //f) Alterar pacientes por médico.
   printf("7 - Sair\n\n");
  printf("Digite a sua Opcao: ");
  scanf("%d",&op);
  if (op < 1 || op > 7)
     printf("Opcao Invalida");
     switch (op){
     case 1: cadastrar();    break; //a) Cadastrar pacientes;
     case 2: visualizar();   break; //b) Mostrar elementos na ordem de cadastramento;
     case 3: excluirpaciente();      break; //c) Excluir pacientes individualmente;
     case 4: alterarpaciente();      break; //d) Alterar pacientes individualmente;
     case 5: excluirpormedico();      break; //e) Excluir pacientes por médico. 
     case 6: alterarpormedico();      break; //f) Alterar pacientes por médico.
    }
 }while (op != 7);
}

main (){
 /*for(i=0;i<=9;i++)
 {   cadastro[i].num = 0;
     cadastro[i].saldo = 0;
 }
*/
 menu();
 return 0;
}
