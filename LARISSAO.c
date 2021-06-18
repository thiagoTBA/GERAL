
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TAM 3 /*está sendo definido uma constante de nome TAM,cujo valor é 3*/
int i,choice,svalor,dec;/*está sendo feita a declaração de uma variável de tipo inteiro, de nomenclatura i*/
//char dec;
FILE *ArqClinica;/*está sendo feita a declaração/criação de um ponteiro do tipo FILE(arquivo)*/

typedef struct RegistroClinica /*está sendo feita a criação/declaração de um tipo de uma estrutra do tipo registro cujo nome é : RegistroFamilia*/
{
    int Sus;
    char Nome[50];
    int Cpf;
    char Ende[50];    //endereço    /*está sendo feita a declaração de 3 variáveis distintas: nome(do tipo char), idade(inteiro), altura(d tipo float)*/
    char Plano[50];
    char Diag[50];   //diagnostico
    char Exame[100];
    char Receita[50];

} tRegistroClinica; /*finalizando a criação da estrutura do tipo registro e realizando a renomeação da estrutura*/

tRegistroClinica Membro[TAM]; /*definindo um vetor de tipo registro, cujo tamanho é definido pela constante TAM*/
/*1º function*/



void leitura(tRegistroClinica *Consulta)
{
    int ver;
	for(i=0; i<TAM; i++)
    {

        printf("Digite o numero codigo do  SUS : ");
        scanf("%d",&Consulta[i].Sus);
		
		fflush(stdin);
        printf("Digite o nome do paciente: ");
        scanf("%s", &Consulta[i].Nome);
		
		fflush(stdin);
        printf("Digite o CPF do paciente: ");
        scanf("%d", &Consulta[i].Cpf);
        
		fflush(stdin);
        printf("Digite o endereco do paciente: ");
        scanf("%s", &Consulta[i].Ende);
		
		fflush(stdin);
        printf("Digite o tipo de plano: ");
        scanf("%s", &Consulta[i].Plano);
		
		
        printf("Digite os Diagnosticos do Paciente: ");
        scanf("%s",&Consulta[i].Diag);
        printf("Digite os Exames do Paciente: ");
        scanf("%s",&Consulta[i].Exame);
        printf("Digite a Receita do Paciente: ");
        scanf("%s",&Consulta[i].Receita);
		
		printf("\n");
        //}
        printf("Cadastro Finalizado com sucesso!\n");
        
		printf("Deseja realizar novo cadastro?\n[1] Sim / [0] Nao\n");
        scanf("%d", &ver);
        if(ver == 0) break;
		system("pause");
		system("cls");
        
	}
}

/*2º function*/
void exibe_tela(tRegistroClinica *Consulta)
{
    for(i=0; i<TAM; i++)
    {
       printf("LISTANDO");
        printf("Informações do paciente \n,Cartão do SUS: %d \n,Nome: %s\n,Numero do CPF: %d\n,Endereço: %s\n,Tipo do Plano: %s\n,DIAGNOSTICO :%s \n,EXAMES :%s\n,RECEITAS :%s \n",Consulta[i].Sus,Consulta[i].Nome,Consulta[i].Cpf,Consulta[i].Ende,Consulta[i].Plano,Consulta[i].Diag,Consulta[i].Exame,Consulta[i].Receita);
    }
}

/*3º function*/
void leitura_arquivo(tRegistroClinica *Consulta)
{
    for(i=0; i<TAM; i++)
    {
        fscanf(ArqClinica,"%d", &Consulta[i].Sus);
        fscanf(ArqClinica,"%s", &Consulta[i].Nome);
        fscanf(ArqClinica,"%d", &Consulta[i].Cpf);
        fscanf(ArqClinica,"%s", &Consulta[i].Ende);
        fscanf(ArqClinica,"%s", &Consulta[i].Plano);
        fscanf(ArqClinica,"%s", &Consulta[i].Diag);
        fscanf(ArqClinica,"%s", &Consulta[i].Exame);
        fscanf(ArqClinica,"%s", &Consulta[i].Receita);
    }
}

/*4º laço*/
void exibe_arquivo(tRegistroClinica *Consulta)
{
    for(i=0; i<TAM; i++)
    {
        fprintf(ArqClinica,"Nome:%d",Consulta[i].Sus);
        fprintf(ArqClinica,"Idade:%s",Consulta[i].Nome);
        fprintf(ArqClinica,"Idade:%d",Consulta[i].Cpf);
        fprintf(ArqClinica,"Idade:%s",Consulta[i].Ende);
        fprintf(ArqClinica,"Altura:%s",Consulta[i].Plano);
        fprintf(ArqClinica,"Diagnostico:%s",&Consulta[i].Diag);
        fprintf(ArqClinica,"Exames:%s",&Consulta[i].Exame);
        fprintf(ArqClinica,"Receitas:%s",&Consulta[i].Receita);
    }
}

/*Bloco Principal*/
main()
{


    tRegistroClinica *primeiro;
    printf ("******USE O MENU NUMERO PARA NAVEGAR PELAS OPCOES*******\n");
    printf ("Digite 1 para Cadastrar: \n");
    printf ("Digite 2 para listar Cadastros: \n");
    printf ("Digite qualquer outro valor para SAIR: \n");
    scanf("%d", &svalor);

    switch ( svalor )
    {
    case 1 :
        printf ("CADASTRO\n");


        break;

    case 2 :
//printf ("CADASTRO\n");

        break;

    default :
        printf ("SAINDO....\n");
        break;

    }
    ArqClinica=fopen("DadosCLINICA.txt","w+");
    tRegistroClinica UNIMORTE;
    leitura(&UNIMORTE);
    exibe_tela(&UNIMORTE);
    leitura_arquivo(&UNIMORTE);
    exibe_arquivo(&UNIMORTE);
    fclose(ArqClinica);


    return 0;
}

