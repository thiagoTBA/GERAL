#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//goldTRABALHO 2.0.B
/*
LOG DE TAREFAS--
IMPLEMENTAR 'NOVO' EXCLUIR
IMPLEMENTAR 'CHECK' SE HA CADASTROS SALVOS
HABILITAR EXPIREMENTAL.EXE ao finalizar
*/

struct cadastro_paciente  // REGISTRO DO CADASTRO PACIENTE
{
    char nome[20],nomemedico[20],datanasc[20],gensexo[20]; //VARIAVEIS

};

struct cadastro_paciente cadastro[10]; // REGISTRO PARA SER UTILIZADO DE ATE 10 ESPAÇOS
int posicao,opcao,i; // DECLARAÇAO DAS VARIAVEIS POSICAO(UTILIZADO NO CONTADOR DA FUNCAO 'CADASTRAR'),OPCAO(UTILIZADO NO SWITCH DO MENU)E 'I'(contador em outras funçoes)
char nome_pac[40],nome_med[40];//DECLARAÇAO DE VARIAVEL nome_pac E nome_med(utilizado para salvar o que o ussuario digitar em funçoes selecionadas)



void cadastrar() //FUNCAO 'CADASTRAR',REALIZAR CADASTRO DA VARIAVES ABAIXO,NECESSARIO PARA AS OUTRAS FUNÇÕES
{

    if(posicao<=10) //Limita o numero de cadastro para 10
    {


        printf("Informe o Nome do paciente: ");
        scanf("%s",&cadastro[posicao].nome);//salvando o nome digitado
        fflush(stdin);
        printf("Informe o Nome do Medico do paciente: ");
        scanf("%s",&cadastro[posicao].nomemedico);//salvando o nome do medico
        fflush(stdin);
        printf("Informe a data de nascimento do paciente: ");
        scanf("%s",&cadastro[posicao].datanasc);//salvando a data de nascimento
        fflush(stdin);
        printf("Informe o genero do paciente: ");
        scanf("%s",&cadastro[posicao].gensexo);////salvando o genero
        fflush(stdin);
        printf("\n\n\DADOS CADASTRASDOS!!!\n\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU\n\n");//RETORNA O USUARIO O SUCESSO DO CADASTRADO E AGUARDA O USUARIO DIGITAR PARA IR PARA A PROXIMA TELA

        posicao++;//INCREMENTANDO O CONTADOR PARA QUE DA PROXIMA VEZ QUE O USUARIO CADASTRAR UM VALOR ELE PULAR PARA A PROXIMA POSICAO NO VETOR
    }
    else
    {
        printf("NUMERO MAXIMO DE CADASTRO PREENCHIDO");//CASO HAJA 10 CADASTROS PREENCHIDOS O PROGAMA INFORMA AO USUARIO QUE ESTA NO MAXIMO DE CADASTRO
    }
    getch();//SEGURA A TELA PARA O USUARIO VER A MENSAGEM ANTERIOR
    system("cls");//LIMPA TELA
}

void listar() //FUNCAO 'LISTAR',REALIZAR A EXIBIÇÃO DO ELEMENTO CADASTRADO
{

    if(posicao==0) //VERIFICA SE E ALGO CADASTRADO,CASO NAO AJA,ELE EXIBIRAR A MENSAGEM "NENHUM PACIENTE CADADASTRADO"
    {

        printf("NENHUM PACIENTE CADADASTRADO!\n\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU\n\n ");//ESSA MENSAGEM SERA EXIBIDA CASO NAO ACHA NENHUM CADASTRO


    }
    else
    {
        for(i=0; i<posicao; i++) //For limitado pelo numero de posciçoes preenchido no vetor cadastro
        {
            //exibicao do cadastro que se encontra no vetor
            printf("Numero do paciente:%d\n\n ",i);
            printf("Nome do Paciente: %s\n",cadastro[i].nome);
            printf("Nome do Medico do Paciente: %s\n",cadastro[i].nomemedico);
            printf("Data de Nascimento do Paciente : %s\n",cadastro[i].datanasc);
            printf("Genero do paciente: %s\n\n",cadastro[i].gensexo);

        }

    }
    getch();//SEGURA A TELA PARA O USUARIO VER A MENSAGEM ANTERIOR
    system("cls");//LIMPA TELA
}

void excluirpaciente()//'FUNCAO EXCLUIRPACIENTE',REALIZAR A EXCLUSAO DE UM ELEMENTO DO CADASTRADO USANDO O NOME DE UM ELEMENTO COMO PARAMETRO
{
      
    

        printf("Digite o nome do Paciente a ser Excluido:  ");//PEDE PARA O USUARIO DIGITAR UM NOME PARA A EXCLUSAO DO PACIENTE
        scanf("%s",&nome_pac);
        fflush(stdin);
 		
        
            if (strcmp(nome_pac,cadastro[i].nome)==0) //COMPARANDO O NOME DIGITADO COM O VETOR QUE DE CADASTRO USANDO 'STRINGCOMPARE'
            {

                for(i=0; i<=10; i++){
                	
                
				
                printf("PACIENTE EXCLUIDO\n\n ");
                cadastro[i].nome[i] =  NULL;
                cadastro[i].nomemedico[i] = NULL;
                cadastro[i].datanasc[i] = NULL;
                cadastro[i].gensexo[i] = NULL;
              	} 
                
            }else{
            	printf("NAO CADASTRADO\n\n ");
			}
            
    posicao=posicao-1;//decrementando uma poscisao no vetor para ser possivel a reutilização do cadastro naquela posciao copiada apos a exclusao
    getch();
    system("cls");
	}

void excluirpormedico()//'FUNCAO EXCLUIRPORMEDICO',POSSUI A MESMA FUNCIONALIADES DA FUNCAO ANTERIOR,POREM USANDO O NOME DO MEDICO COMO PARAMETRO PARA EXCLUSAO
{
	

    if(posicao!=0)
    {

        printf("Digite o nome do Paciente a ser Excluido:  ");
        scanf("%s",&nome_med);
        fflush(stdin);


        for(i=0; i<posicao; i++)
        {
            if(strcmp(cadastro[i].nomemedico,nome_med))
            {

                printf("MEDICO NAO CADASTRO\n\n");

            }
            else
            {
                printf("MEDICO ENCONTRADO PACIENTE SERA EXCLUIDO; %d\n\n",posicao);
                 
                if(cadastro[i].nomemedico==nome_med){
			
                int i=0;
                cadastro[i].nome[i] = NULL;
                cadastro[i].nomemedico[i] = NULL;
                cadastro[i].datanasc[i] = NULL;
                cadastro[i].gensexo[i] = NULL;
              	} 
            }
			/*
            if(posicao==2)
            {

                for(i=0; i<posicao; i++)
                {


                    strcpy(cadastro[i].nome, cadastro[i+1].nome);
                    strcpy(cadastro[i].nomemedico, cadastro[i+1].nomemedico);
                    strcpy(cadastro[i].datanasc, cadastro[i+1].datanasc);
                    strcpy(cadastro[i].gensexo, cadastro[i+1].gensexo);

                }
            }
            if(posicao==3)
            {
                for(i=0; i<posicao; i++)
                {


                    strcpy(cadastro[i].nome, cadastro[i,i+i].nome);
                    strcpy(cadastro[i].nomemedico, cadastro[i,i+i].nomemedico);
                    strcpy(cadastro[i].datanasc, cadastro[i,i+i].datanasc);
                    strcpy(cadastro[i].gensexo, cadastro[i,i+i].gensexo);

                }
            }
        */}	
 }
    else
    {
        printf("NENHUM PACIENTE CADADASTRADO!\n\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU\n\n ");
    }

    posicao=posicao-1;
    getch();
    system("cls");
}

void alterarpaciente()//FUNCAO 'ALTERARPACIENTE',REALIZAR A ALTERAÇAO DE UM CADASTRO NO VETOR COM BASE NO NOME QUE O USUARIO DIGITAR
{

    if(posicao!=0)//caso nao haja nenhum paciente cadastrado,o progama nao acessara esta funcionalidade
    {

        printf("Digite o nome do Paciente a ser Alterado:  ");//pegando o nome na qual o usuario deseja alterar
        scanf("%s",&nome_pac);
        fflush(stdin);


        for(i=0; i<posicao; i++)
        {
            if(strcmp(cadastro[i].nome,nome_pac))//comparando o nome digitado com os que contam no vetor
            {

                printf("PACIENTE NAO CADASTRO\n\n");//caso nao haja esta mensagem e exibida

            }
            else
            {
                //caso ele encontre,o ususario pode verificar as informaçoes que contam sobre o paciente no vetor
                printf("Informacoes do Paciente; %d\n\n",posicao);
                printf("Nome do Paciente: %s\n",cadastro[i].nome);
                printf("Nome do Medico do Paciente: %s\n",cadastro[i].nomemedico);
                printf("Data de Nascimento do Paciente : %s\n",cadastro[i].datanasc);
                printf("Genero do paciente: %s\n\n",cadastro[i].gensexo);

                //Nesta parte ele altera o cadastro do paciente,funcao e semelhante ao cadastrar
                printf("AlTERE AS INFORMACOES\n\n");
                printf("Informe o Nome do paciente: ");
                scanf("%s",&cadastro[i].nome);
                fflush(stdin);
                printf("Informe o Nome do Medico do paciente: ");
                scanf("%s",&cadastro[i].nomemedico);
                fflush(stdin);
                printf("Informe a data de nascimento do paciente: ");
                scanf("%s",&cadastro[i].datanasc);
                fflush(stdin);
                printf("Informe o genero do paciente: ");
                scanf("%s",&cadastro[i].gensexo);
                fflush(stdin);
                printf("PACIENTE ALTERADO COM SUCESSO\n\n");//ao finalizar a ateração esta mensagem e exibida
            }
        }
    }
    else
    {
        printf("NENHUM PACIENTE CADADASTRADO!\n\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU\n\n ");//caso nao haja nenhum paciente cadastro no vetor esta mensagem e exibida
    }
    getch();
    system("cls");
}

void alterarpormedico()//FUNCAO 'ALTERARPORMEDICO',REALIZAR A ALTERAÇAO DE UM CADASTRO NO VETOR COM BASE NO NOME DO MEDICO QUE O USUARIO DIGITAR
{

    if(posicao!=0)
    {

        printf("Digite o nome do Medico:  ");
        scanf("%s",&nome_med);//salvando o nome do medico


        for(i=0; i<posicao; i++)
        {
            if(strcmp(cadastro[i].nomemedico,nome_med))//comparando o nome digitado com o que consta no vetor
            {

                printf("NAO EXISTE MEDICO CADASTRADO PARA ESTE PACIENTE \n\n");//caso o nome do medico digitado nao coincidada com o cadastro cadastrado a mensagem e exibida

            }
            else
            {
                printf("MEDICO ENCONTRADO NO CADASTRO NUMERO %d\n\n",posicao);
                printf("Nome do Paciente: %s\n",cadastro[i].nome);
                printf("Nome do Medico do Paciente: %s\n",cadastro[i].nomemedico);
                printf("Data de Nascimento do Paciente : %s\n",cadastro[i].datanasc);
                printf("Genero do paciente: %s\n\n",cadastro[i].gensexo);

                //funcionaliade parecidada com a 'alterarpaciente',porem o camo nomemedico nao podera ser alterado
                printf("AlTERE AS INFORMACOES DO PACIENTE\n\n");
                printf("Informe o Nome do paciente: ");
                scanf("%s",&cadastro[i].nome);
                fflush(stdin);
                printf("Informe a data de nascimento do paciente: ");
                scanf("%s",&cadastro[i].datanasc);
                fflush(stdin);
                printf("Informe o genero do paciente: ");
                scanf("%s",&cadastro[i].gensexo);
                fflush(stdin);

            }
        }
    }
    else
    {
        printf("NENHUM PACIENTE CADADASTRADO!\n\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU\n\n ");
    }
    getch();
    system("cls");
}

void menu()//FUNCAO 'MENU',AQUI O USUARIO ESCOLHA AS OPÇOES QUE ELE DESEJA REALIZAR
{

    do
    {
        //menu de opçoes(auto explicativo)
        printf("Menu de Opcoes:\n");
        printf("1 - Cadastrar pacientes\n");
        printf("2 - Listar Cadastros\n");
        printf("3 - Excluir paciente individualmente\n");
        printf("4 - Alterar paciente individualmente\n");
        printf("5 - Excluir pacientes por Medico\n");
        printf("6 - Alterar pacientes por Medico\n");
        printf("7 - Sair\n\n");
        printf("Digite a sua Opcao: ");
        scanf("%d",&opcao);
        fflush(stdin);
        system("cls");//apos o usuario escolher sua opcao,a tela limpara e progama carregara a opcao escolhida
        if (opcao < 1 || opcao > 7)
            printf("\n\nOpcao Invalida\n\n");
        switch (opcao)
        {
        case 1:
            cadastrar();
            break; //a) Cadastrar pacientes;
        case 2:
            listar();
            break; //b) Mostrar elementos na ordem de cadastramento;
        case 3:
            excluirpaciente();
            break; //c) Excluir pacientes individualmente;
        case 4:
            alterarpaciente();
            break; //d) Alterar pacientes individualmente;
        case 5:
            excluirpormedico();
            break; //e) Excluir pacientes por médico.
        case 6:
            alterarpormedico();
            break; //f) Alterar pacientes por médico.
        }

    }
    while (opcao != 7);//caso aperte 7 o prompt fechara

}

main ()
{

    menu();
    return 0;
}
