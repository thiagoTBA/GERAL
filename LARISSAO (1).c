
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TAM 1 /*está sendo definido uma constante de nome TAM,cujo valor é 3*/

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

void CadLab(tRegistroClinica *Consulta){
	int ver;
	for(i=0;i<TAM;i++){
		printf("Digite os Diagnosticos do Paciente: ");
        scanf("%s",&Consulta[i].Diag);
        printf("Digite os Exames do Paciente: ");
        scanf("%s",&Consulta[i].Exame);
        printf("Digite a Receita do Paciente: ");
        scanf("%s",&Consulta[i].Receita);
    	printf("\n");
        printf("Cadastro Finalizado com sucesso!\n");
		printf("Deseja realizar novo cadastro?\n[1] Sim / [0] Nao\n");
	}
}

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

        //INSERIR IF

        // printf("deseja inserir dados a ficha do paciente?\ns=1 ou n=2 \n");
        // scanf("%d",&dec);
        // if(dec=1){
		
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
        printf("LISTANDO\n");
        printf("INFORMACOES do PACIENTE:\n\nCartao do SUS: %d\nNome: %s\nNumero do CPF: %d\nEndereco: %s\nTipo do Plano: %s\nDIAGNOSTICO: %s\nEXAMES: %s\nRECEITAS: %s\n",Consulta[i].Sus, Consulta[i].Nome, Consulta[i].Cpf, Consulta[i].Ende, Consulta[i].Plano, Consulta[i].Diag, Consulta[i].Exame, Consulta[i].Receita);
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
        fprintf(ArqClinica,"SUS:%d\n",Consulta[i].Sus);
        fprintf(ArqClinica,"Nome:%s\n",Consulta[i].Nome);
        fprintf(ArqClinica,"CPF:%d\n",Consulta[i].Cpf);
        fprintf(ArqClinica,"Endereço:%s\n",Consulta[i].Ende);
        fprintf(ArqClinica,"Plano:%s\n",Consulta[i].Plano);
        fprintf(ArqClinica,"Diagnostico:%s\n",&Consulta[i].Diag);
        fprintf(ArqClinica,"Exames%s\n",&Consulta[i].Exame);
        fprintf(ArqClinica,"Receita:%s\n",&Consulta[i].Receita);
    }
}

/*Bloco Principal*/
main()
{
	
    tRegistroClinica *primeiro;
    ArqClinica=fopen("DadosCLINICA.txt","w+");
    
    
	do{	
		printf ("******USE O MENU NUMERO PARA NAVEGAR PELAS OPCOES*******\n");
		printf ("Digite 1 para Cadastrar: \n");
		printf ("Digite 2 para listar Cadastros: \n");
		printf ("Digite qualquer outro valor para SAIR: \n");
		scanf("%d", &svalor);
		
	    switch ( svalor ){
		    case 1 :
		    	system("cls");
		        printf ("Cadastro paciente\n");		      
			    
			    
			    fclose(ArqClinica);
		        break;
		
		    case 2 :
		    	system("cls");
		    	printf("Cadastro laboratorial\n");
				
				
				
				fclose(ArqClinica);
		        break;
		    
		     case 3 :
		    	system("cls");
				printf("Listagem\n");
				
				
				fclose(ArqClinica);
		        break;
		
		    default :
		        printf ("SAINDO....\n");
		        fclose(ArqClinica);
		        break;
		        return 0;
			}
		fclose(ArqClinica);
		system("pause");
		system("cls");
	}while(1);
	ArqClinica=fopen("DadosCLINICA.txt","w+");
    tRegistroClinica UNIMORTE;
    leitura(&UNIMORTE);
    exibe_tela(&UNIMORTE);
    leitura_arquivo(&UNIMORTE);
    exibe_arquivo(&UNIMORTE);
    fclose(ArqClinica);


    return 0;
}

