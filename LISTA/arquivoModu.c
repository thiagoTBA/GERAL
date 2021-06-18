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

FILE* AbreArquivo(char modo,char caminho[50]){
	FILE *arquivo;
	switch(modo){
		case 'g':
			arquivo = fopen(caminho,"wt");
			break;
		case 'l':
			arquivo = fopen(caminho,"rt");
			break;
		case 'a':
			arquivo = fopen(caminho,"a"); 
		 	break;
		
	}
	if(arquivo==NULL){
		printf("Nao foi possivel abrir o arquivo");
		exit(0);
	}
	return arquivo;
	
	
}
void FecharArquivo(FILE *arquivo){
	fclose(arquivo);
	
	
}

int main(){
	
	char vetor[20];
	int valor;
	FILE *arquivo;
	
	arquivo = AbreArquivo('g',"teste.txt");

	
	fprintf(arquivo,"DIIB 111");
	
	
	FecharArquivo(arquivo);
	
	arquivo = AbreArquivo('l',"teste.txt");
	
		
	fscanf(arquivo,"%s %d",&vetor,&valor);
	printf("\n\nDADOS DO ARQUIVO\n\n");
	printf("%s %d\n",vetor,valor); 
	
	FecharArquivo(arquivo);
	
	return 0;
	
	
}
