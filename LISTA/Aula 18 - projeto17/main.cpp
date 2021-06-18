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
    char vetor[6];
    int valor;
    FILE *arquivo;

    arquivo = fopen("teste.txt","wt"); //wt = Grava��o
                                       //rt = Leitura
                                       //a  = append

    if(arquivo==NULL){      //Se houver algum erro, o ponteiro apontar� para NULL
        printf("Nao foi possivel abrir o arquivo");
        exit(0);
    }

    fprintf(arquivo,"Teste 456");

    fclose(arquivo);

    arquivo = fopen("teste.txt","rt"); //wt = Grava��o
                                       //rt = Leitura
                                       //a  = append

    if(arquivo==NULL){      //Se houver algum erro, o ponteiro apontar� para NULL
        printf("Nao foi possivel abrir o arquivo");
        exit(0);
    }

    fscanf(arquivo,"%s %d", &vetor, &valor);
    printf("\n\n%s %d\n\n", vetor, valor);

    fclose(arquivo);

    system("pause");
    return 0;
}
