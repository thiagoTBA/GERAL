#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//goldTRABALHO 1.0
/*
LOG DE TAREFAS
ESTRUTURA CODIGO
FINALIZA COMENTARIOS
LIMITAR OS CADASTROS
VERIFICAR O EXCLUIR(AGAIN!)

HABILITAR EXPIREMENTAL.EXE ao finalizar
*/

struct cadastro_paciente{ // REGISTRO DO CADASTRO PACIENTE 
	char nome[20],nomemedico[20],datanasc[10],gensexo[20]; //VARIAVEIS
	
};

struct cadastro_paciente cadastro[10]; // REGISTRO PARA SER UTILIZADO DE ATE 10 ESPAÇOS
    int posicao,opcao,i; // DECLARAÇAO DAS VARIAVEIS POSICAO(UTILIZADO NO CONTADOR DA FUNCAO 'CADASTRAR'),OPCAO(UTILIZADO NO SWITCH DO MENU)E 'I'(contador em outras funçoes)
    char nome_pac[40],nome_med[40];//DECLARAÇAO DE VARIAVEL nome_pac E nome_med(utilizado para salvar o que o ussuario digitar em funçoes selecionadas)
    
    posicao=0;//ZERANDO O CONTADOR DO CADASTRO
    i=0;//ZERANDO O CONTADOR

void cadastrar(){//FUNCAO 'CADASTRAR',REALIZAR CADASTRO DA VARIAVES ABAIXO,NECESSARIO PARA AS OUTRAS FUNÇÕES
	    
	   if(posicao<10){//LIMITA O NUMERO DE CADASTROS QUE PODEM SER REALIZADOS,ATE DEZ
	    
	    
	   printf("Informe o Nome do paciente: ");//PEDINDO O NOME DO USUARIO A SER CADASTRADO
	   scanf("%s",&cadastro[posicao].nome);//SALVANDO O NOME DO USUARIO DIGITADO
	   printf("Informe o Nome do Medico do paciente: ");//PEDINDO O NOME DO MEDICOA SER CADASTRADO
	   scanf("%s",&cadastro[posicao].nomemedico);//SALVANDO O NOME DO MEDICO DIGITADO
	   printf("Informe a data de nascimento do paciente: ");//PEDINDO A DATA DE NASCIMENTO A SER CADASTRADO
	   scanf("%s",&cadastro[posicao].datanasc);//SALVANDO A DATA DE NASCIMENTO A SER DIGITADA
	   printf("Informe o genero do paciente: ");//PEDINDO O GENERO DO USUARIO A SER CADASTRADO
	   scanf("%s",&cadastro[posicao].gensexo);//SALVANDO O GENERO DO USUARIO DIGITADO
	   printf("\n\n\DADOS CADASTRASDOS!!!\n\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU\n\n");//RETORNA O USUARIO O SUCESSO DO CADASTRADO E AGUARDA O USUARIO DIGITAR PARA IR PARA A PROXIMA TELA
	   
	   posicao++;//INCREMENTANDO O CONTADOR PARA QUE DA PROXIMA VEZ QUE O USUARIO CADASTRAR UM VALOR ELE PULAR PARA A PROXIMA POSICAO
	   }else{
	   	printf("NUMERO MAXIMO DE CADASTRO PREENCHIDO");
	   }
	   getch();//SEGURA A TELA PARA O USUARIO VER A MENSAGEM ANTERIOR 
	   system("cls");//LIMPA TELA
	}
     
void listar(){//FUNCAO LISTAR,REALIZAR A EXIBIÇÃO DO ELEMENTO CADASTRADO 

	if(posicao!=0){//VERIFICA SE E ALGO CADASTRADO,CASO NAO AJA,ELE EXIBIRAR A MENSAGEM "NENHUM PACIENTE CADADASTRADO"
	
	
	for(i=0;i<posicao;i++){//FOR PARA INCREMENTAR COM BASE NO NUMERO DE USUARIO CADASTRADOS,A EXIBIÇÃO E LIMITADA PELO NUMERO DE USUARIO CADASTRADO(POR EXEMPLO:SE OUVER 1 CADASTRO,POSICAO ASSUMIRA O VALOR 1 E O 'FOR' LIMITARA A EXIBICAO EM 1
	   printf("Numero do paciente:%d\n\n ",i+1);//EXIBI O NUMERO DO CADASTRO DO PACIENTE,VIA DE REGRA SERIA '0'JA QUE O 'FOR' COMEÇA EM '0',POREM POR QUESTOES DE ESTETICA ELE SERA INCREMENTANDO COM '+1',DESTA FORMA,O PRIMEIRO USUARIO SERA O '1' E NAO '0' 
	   printf("Nome do Paciente: %s\n",cadastro[i].nome);//EXIBI O NOME PACIENTE CADASTRADO
	   printf("Nome do Medico do Paciente: %s\n",cadastro[i].nomemedico);//EXIBI O MEDICO CADASTRADO
	   printf("Data de Nascimento do Paciente : %s\n",cadastro[i].datanasc);//EXIBI DATA DE NASCEMENTO CADASTRADO
	   printf("Genero do paciente: %s\n\n",cadastro[i].gensexo);//EXIBI O GENERO CADASTRADO
     
  	   }
    }else{
     printf("NENHUM PACIENTE CADADASTRADO!\n\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU\n\n ");//ESSA MENSAGEM SERA EXIBIDA CASO NAO ACHA NENHUM CADASTRO 
	}
    getch();//SEGURA A TELA PARA O USUARIO VER A MENSAGEM ANTERIOR 
    system("cls");//LIMPA TELA
}

void excluirpaciente(){
	  
	   if(posicao!=0){//VERIFICA SE E ALGO CADASTRADO,CASO NAO AJA,ELE EXIBIRAR A MENSAGEM "NENHUM PACIENTE CADADASTRADO"
	   
	   printf("Digite o nome do Paciente a ser Excluido:  ");//PEDE PARA O USUARIO DIGITAR UM NOME PARA A EXCLUSAO DO PACIENTE 
       scanf("%s",&nome_pac);//GUARDANDO NOME DIGITADO
      
	 for(i=0;i<posicao;i++){//'FOR'LIMITANDO O NUMERO DE PACIENTE CADASTRADO
     if (strcmp(cadastro[i].nome,nome_pac)){//COMPARANDO O NOME DIGITADO COM O VETOR QUE DE CADASTRO
	 
	    printf("PACIENTE NAO CADASTRO\n\n");//CASO O NOME DO PACIENTE DIGITADO NAO ESTEJA NO VETOR ESTA MENSAGEM E EXIBIDA
   
     }else{
       //printf("PACIENTE ENCONTRADO NO LUGAR; %d\n\n",posicao);//PARA FINS DE RASTREIO
       
	   cadastro[i].nome[0] = '\0';//ZERANDO A POSICAO QUE SE ENCONTRA O PACIENTE NA AREA NOME 
	   cadastro[i].nomemedico[0] = '\0';//ZERANDO A POSICAO QUE SE ENCONTRA O PACIENTE NA AREA NOME DO MEDICO 
	   cadastro[i].datanasc[0] = '\0';//ZERANDO A POSICAO QUE SE ENCONTRA O PACIENTE NA AREA DATA DE NASCIMENTO
	   cadastro[i].gensexo[0] = '\0';//ZERANDO A POSICAO QUE SE ENCONTRA O PACIENTE NA AREA DE GENERO
	   //printf("PACIENTE EXCLUIDO\n\n"); // PARA FINS DE RASTREIO
	   
	 }
	   for(i=0;i<=9;i++){ //'FOR' PARA COPIAR OS DADOS DO PROXIMO CADASTRO(CASO AJA)PARA O ATUAL,DESTE MODO  A LISTA DE PACIENTES SERA ATUALIZADA
	   //funcao strcpy,funcao copia dados de um local para outro(caso aja),neste caso ele copia os dados do proximo cadastrado para o apagado
	   strcpy(cadastro[i+1].nome, cadastro[i+2].nome);//COPIA O NOME DO CADATRA SEGUINTE PARA O ATUAL
	   strcpy(cadastro[i+1].nomemedico, cadastro[i+2].nomemedico);//COPIA O NOMEMEDICO DO CADASTRO SEGUINTE PARA O ATUAL
	   strcpy(cadastro[i+1].datanasc, cadastro[i+2].datanasc);//COPIA O DATANASC SEGUINTE PARA O ATUAL
	   strcpy(cadastro[i+1].gensexo, cadastro[i+2].gensexo);//COPIA O GENSEXO SEGUINTE PARA O ATUAL
       printf("PACIENTE EXCLUIDO\n\n");//INFORMA A EXCLUSAO
          
		  }
		  
         }
	   }else{
	   	printf("NENHUM PACIENTE CADADASTRADO!\n\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU\n\n ");
	   
	   }
	    
	    posicao=posicao-1;
	    getch();
	    system("cls");
}
  
void excluirpormedico(){
	
	 if(posicao!=0){
	 
	 printf("Digite o nome do Paciente a ser Excluido:  ");
     scanf("%s",&nome_med);
       
       
	 for(i=0;i<posicao;i++){  
     if(strcmp(cadastro[i].nomemedico,nome_med)){
	 
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
      }else{
       printf("NENHUM PACIENTE CADADASTRADO!\n\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU\n\n ");
	  } 
	   
	    posicao=posicao-1;
	    getch();
	    system("cls");
}

void alterarpaciente(){
	
     if(posicao!=0){	
	
	 printf("Digite o nome do Paciente a ser Alterado:  ");
     scanf("%s",&nome_pac);
       
       
	 for(i=0;i<posicao;i++){  
     if(strcmp(cadastro[i].nome,nome_pac)){
	 
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
	   printf("PACIENTE ALTERADO COM SUCESSO\n\n");
	     }
       }
     }else{
      printf("NENHUM PACIENTE CADADASTRADO!\n\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU\n\n ");
  }
      getch();
	  system("cls");    
}

void alterarpormedico(){
	
	 if(posicao!=0){
	
	   printf("Digite o nome do Medico:  ");
       scanf("%s",&nome_med);
       
       
	 for(i=0;i<posicao;i++){  
     if(strcmp(cadastro[i].nomemedico,nome_med)){
	 
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
    }else{
      printf("NENHUM PACIENTE CADADASTRADO!\n\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU\n\n ");
 }
        getch();
	    system("cls");
}

void menu(){
	
	do
  { 
   printf("Menu de Opcoes:\n");
   printf("1 - Cadastrar pacientes\n");  //a) Cadastrar pacientes;
   printf("2 - Listar Cadastros\n"); //b) Mostrar elementos na ordem de cadastramento;
   printf("3 - Excluir paciente individualmente\n"); //c) Excluir pacientes individualmente;
   printf("4 - Alterar paciente individualmente\n"); //d) Alterar pacientes individualmente;
   printf("5 - Excluir pacientes por Medico\n"); //e) Excluir pacientes por médico. 
   printf("6 - Alterar pacientes por Medico\n"); //f) Alterar pacientes por médico.
   printf("7 - Sair\n\n");
   printf("Digite a sua Opcao: ");
   scanf("%d",&opcao);
   system("cls");  
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
