#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

BETA TRABALHO

LOG DE ERROS
EXCLUIR PARCIENTES DE MEDICOS 

*/

struct cadastro_paciente {
//(nome do paciente, nome do médico, data de nascimento e sexo)
 char nome[20],nomemedico[20],datanasc[10],gensexo[20];
};
 struct cadastro_paciente cadastro[10];
 int posicao,opcao,i;
 int data_nasc[10],gen_sexo,cod_paci,posicao;
 char nome_pac[40],nome_med[40];
 

void cadastrar()
{
       
	   printf("Informe o Nome do paciente: ");
	   scanf("%s",&cadastro[posicao].nome);
	   printf("Informe o Nome do Medico do paciente: ");
	   scanf("%s",&cadastro[posicao].nomemedico);
	   printf("Informe a data de nascimento do paciente: ");
	   scanf("%s",&cadastro[posicao].datanasc);
	   printf("Informe o genero do paciente: ");
	   scanf("%s",&cadastro[posicao].gensexo);
	   
	   posicao++;
       
    }
    
    
 void listar()
 {
     	  
     	  for(i=0;i<=2;i++){
	   printf("Nome do Paciente: %s\n",cadastro[i].nome);
	   printf("Nome do Medico do Paciente: %s\n",cadastro[i].nomemedico);
	   printf("Data de Nascimento do Paciente : %s\n",cadastro[i].datanasc);
	   printf("Genero do paciente: %s\n",cadastro[i].gensexo);
     
  
  }
}

void excluirpaciente(){
	
	printf("Digite o nome do Paciente a ser Excluido:  ");
       scanf("%s",&nome_pac);
       
       
	 for(i=0;i<=2;i++){  
     if (strcmp(cadastro[i].nome,nome_pac)){
	 
	    printf("PACIENTE NAO CADASTRO\n\n");
   
     }else{
       printf("PACIENTE ENCONTRADO NO LUGAR; %d\n\n",posicao);
       
	   cadastro[i].nome[0] = '\0';
	   cadastro[i].nomemedico[0] = '\0';
	   cadastro[i].datanasc[0] = '\0';
	   cadastro[i].gensexo[0] = '\0';
	   printf("PACIENTE EXCLUIDO\n\n");
	   
	 }
	 
	 strcpy(cadastro[i].nome, cadastro[i+1].nome);
	 strcpy(cadastro[i].nomemedico, cadastro[i+1].nomemedico);
     strcpy(cadastro[i].datanasc, cadastro[i+1].datanasc);
     strcpy(cadastro[i].gensexo, cadastro[i+1].gensexo);
     printf("PACIENTE EXCLUIDO\n\n");
       
       
	   }
	    
	    posicao=posicao-1;
	}


void excluirpormedico(){
	
	printf("Digite o nome do Paciente a ser Excluido:  ");
       scanf("%s",&nome_med);
       
       
	 for(i=0;i<=2;i++){  
     if (strcmp(cadastro[i].nomemedico,nome_med)){
	 
	    printf("MEDICO NAO CADASTRO\n\n");
   
     }else{
       printf("MEDICO ENCONTRADO PACIENTE SERA EXCLUIDO; %d\n\n",posicao);
       
	   cadastro[i].nome[0] = '\0';
	   cadastro[i].nomemedico[0] = '\0';
	   cadastro[i].datanasc[0] = '\0';
	   cadastro[i].gensexo[0] = '\0';
	   
	      }
	 
	 strcpy(cadastro[i].nome, cadastro[i+1].nome);
	 strcpy(cadastro[i].nomemedico, cadastro[i+1].nomemedico);
     strcpy(cadastro[i].datanasc, cadastro[i+1].datanasc);
     strcpy(cadastro[i].gensexo, cadastro[i+1].gensexo);
     printf("CADASTRO EXCLUIDO\n\n");
       
       
	   }
	    posicao=posicao-1;
	    
}


void alterarpaciente()
{
       printf("Digite o nome do Paciente a ser Alterado:  ");
       scanf("%s",&nome_pac);
       
       
	 for(i=0;i<=2;i++){  
     if (strcmp(cadastro[i].nome,nome_pac)){
	 
	    printf("PACIENTE NAO CADASTRO\n\n");
   
     }else{
       printf("PACIENTE ENCONTRADO NO LUGAR; %d\n\n",posicao);
       printf("Informacoes do Paciente; %d\n\n",posicao);
       printf("Nome do Paciente: %s\n",cadastro[i].nome);
	   printf("Nome do Medico do Paciente: %s\n",cadastro[i].nomemedico);
	   printf("Data de Nascimento do Paciente : %s\n",cadastro[i].datanasc);
	   printf("Genero do paciente: %s\n\n",cadastro[i].gensexo);
       
	   
	   printf("AlTERE AS INFORMACOES\n\n");
       printf("Informe o Nome do paciente: ");
	   scanf("%s",&cadastro[i].nome);
	   printf("Informe o Nome do Medico do paciente: ");
	   scanf("%s",&cadastro[i].nomemedico);
	   printf("Informe a data de nascimento do paciente: ");
	   scanf("%s",&cadastro[i].datanasc);
	   printf("Informe o genero do paciente: ");
	   scanf("%s",&cadastro[i].gensexo);
	 
	 }
	 
	}


}


void alterarpormedico()
{
	
	printf("Digite o nome do Medico:  ");
       scanf("%s",&nome_med);
       
       
	 for(i=0;i<=2;i++){  
     if (strcmp(cadastro[i].nomemedico,nome_med)){
	 
	    printf("NAO EXISTE MEDICO CADASTRADO \n\n");
   
     }else{
       printf("MEDICO ENCONTRADO NO CADASTRO NUMERO %d\n\n",posicao);
       printf("Nome do Paciente: %s\n",cadastro[i].nome);
	   printf("Nome do Medico do Paciente: %s\n",cadastro[i].nomemedico);
	   printf("Data de Nascimento do Paciente : %s\n",cadastro[i].datanasc);
	   printf("Genero do paciente: %s\n\n",cadastro[i].gensexo);
       
	   
	   printf("AlTERE AS INFORMACOES DO PACIENTE\n\n");
       printf("Informe o Nome do paciente: ");
	   scanf("%s",&cadastro[i].nome);
	   printf("Informe a data de nascimento do paciente: ");
	   scanf("%s",&cadastro[i].datanasc);
	   printf("Informe o genero do paciente: ");
	   scanf("%s",&cadastro[i].gensexo);
	 
	 }
	 
	}
	
}


void menu(){
  do
  { 
   printf("Menu de Opcoes:\n");
   printf("1 - Cadastrar pacientes\n");  //a) Cadastrar pacientes;
   printf("2 - Listar Cadastros\n"); //b) Mostrar elementos na ordem de cadastramento;
   printf("3 - Excluir pacientes individualmente\n"); //c) Excluir pacientes individualmente;
   printf("4 - Alterar pacientes individualmente\n"); //d) Alterar pacientes individualmente;
   printf("5 - Excluir pacientes por Medico\n"); //e) Excluir pacientes por médico. 
   printf("6 - Alterar pacientes por Medico\n"); //f) Alterar pacientes por médico.
   printf("7 - Sair\n\n");
   printf("Digite a sua Opcao: ");
  scanf("%d",&opcao);
  if (opcao < 1 || opcao > 7)
     printf("\n\nOpcao Invalida\n\n");
     switch (opcao){
     case 1: cadastrar();    break; //a) Cadastrar pacientes;
     case 2: listar();   break; //b) Mostrar elementos na ordem de cadastramento;
     case 3: excluirpaciente();      break; //c) Excluir pacientes individualmente;
     case 4: alterarpaciente();      break; //d) Alterar pacientes individualmente;
     case 5: excluirpormedico();      break; //e) Excluir pacientes por médico. 
     case 6: alterarpormedico();      break; //f) Alterar pacientes por médico.
    }
 }while (opcao != 7);
}





main (){
 

 menu();
 return 0;
}
