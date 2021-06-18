#include <stdio.h>
#include <stdlib.h>



struct cadastro_paciente {
	int cod,visucad;
    char nome[35],nomemedico[35],datanasc[10],gensexo[20];
 };
 struct cadastro_paciente cadastro[10];
 int data_nasc[10],gen_sexo,cod_paci,achou,posicao,op,i;
 char nome_pac[40],nome_med[40];
 
 struct cadastro_paciente visualiza;
 int  visucad;

void cadastrar(){
       
	   printf("Informe o Nome do paciente: ");
	   scanf("%s",&cadastro[posicao].nome);
	   printf("Informe o Nome do Medico do paciente: ");
	   scanf("%s",&cadastro[posicao].nomemedico);
	   printf("Informe a data de nascimento do paciente: ");
	   scanf("%s",&cadastro[posicao].datanasc);
	   printf("Informe o genero do paciente: ");
	   scanf("%s",&cadastro[posicao].gensexo);
       
       
    }
 

void visualizar(){
     	  
	   
	   for(i=1;i<=3;i++){
	   
	   printf("Nome do Paciente: %s\n",cadastro[i].nome);
	   printf("Nome do Medico do Paciente: %s\n",cadastro[i].nomemedico);
	   printf("Data de Nascimento do Paciente : %s\n",cadastro[i].datanasc);
	   printf("Genero do paciente: %s\n",cadastro[i].gensexo);
     }
      
}




void menu(){
  do
  { 
   printf("Menu de Opcoes:\n");
   printf("1 - Cadastrar pacientes\n");  //a) Cadastrar pacientes;
   printf("2 - Visualizar Cadastros\n"); //b) Mostrar elementos na ordem de cadastramento;
   //printf("3 - Excluir pacientes individualmente\n"); //c) Excluir pacientes individualmente;
   //printf("4 - Alterar pacientes individualmente\n"); //d) Alterar pacientes individualmente;
  // printf("5 - Excluir pacientes por Medico\n"); //e) Excluir pacientes por médico. 
   //printf("6 - Alterar pacientes por Medico\n"); //f) Alterar pacientes por médico.
   printf("7 - Sair\n\n");
  printf("Digite a sua Opcao: ");
  scanf("%d",&op);
  if (op < 1 || op > 7)
     printf("\n\nOpcao Invalida\n\n");
     switch (op){
     case 1: cadastrar();    break; //a) Cadastrar pacientes;
     case 2: visualizar();   break; //b) Mostrar elementos na ordem de cadastramento;
     //case 3: excluirpaciente();      break; //c) Excluir pacientes individualmente;
    // case 4: alterarpaciente();      break; //d) Alterar pacientes individualmente;
    // case 5: excluirpormedico();      break; //e) Excluir pacientes por médico. 
     //case 6: alterarpormedico();      break; //f) Alterar pacientes por médico.
    }
 }while (op != 7);
}





main (){
 

 menu();
 return 0;
}
