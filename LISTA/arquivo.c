#include <stdio.h>
#include <stdlib.h>

/*
Outras Fun��es para manupula��o de arquivos

FPUTC - Grava 1 Caracter no arquivo
FGETC - L� 1 Caracter do arquivo

FPUTS - Grava uma sequ�ncia de Caracteres no arquivo
FGETS - L� uma sequ�ncia de Caracteres do arquivo

FWRITE - Grava certa quantidade de bytes no arquivo
FREAD - L� certa quantidade de bytes do arquivo

www.cplusplus.com/reference/

*/

int main(){
	
	char vetor[20];
	int valor;
	
	FILE *arquivo;
	
	arquivo = fopen("teste.txt","wt");
	
	if(arquivo==NULL){
		printf("Nao foi possivel abrir o arquivo");
		exit(0);
	}
	else{
		printf("DADOS ESCRITOS COM SUCESSO\n");
		}
	
	fprintf(arquivo,"DIIB 123");
	
	
	fclose(arquivo);
	
	arquivo = fopen("teste.txt","rt");
	
	if(arquivo==NULL){
		printf("Nao foi possivel abrir o arquivo");
		exit(0);
	}
	else{
		printf("DADOS LIDOS COM SUCESSO\n");
		}
		
	fscanf(arquivo,"%s %d",&vetor,&valor);
	printf("\n\nDADOS DO ARQUIVO\n\n");
	printf("%s %d\n",vetor,valor); 
	
	fclose(arquivo);
	
	return 0;
	
	
}
