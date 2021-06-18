//Bibliotecas utilizadas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Máximo de bytes para uma String
#define BUFFER 64



//Estrutura da lista que será criada
typedef struct lista {
    char *nome;
    int idade;
    struct lista *proximo;
} Dados;

//Funções para manusear os dados (irão retornar dados)
Dados *inicia_dados  (char *nome, int idade);
Dados *insere_dados  (Dados *dados, char *nome, int idade);
Dados *delbusca_dados(Dados *dados, char *chave);
Dados *deleta_dados  (Dados *dados, int nTipo);
int   checa_vazio    (Dados *dados);

//Funções para mostrar dados
void  exibe_dados    (Dados *dados);
void  exibe_tamanho  (Dados *nova);
void  busca_dados    (Dados *dados, char *chave);

//Funções do Menu
void criavazia(void);    //1
void insereinicio(void); //2
void inserefim(void);    //3
void listavazia(void);   //4
void prielemento(void);  //5
void ultelemento(void);  //6
void exibe(void);        //7
void exibetam(void);     //8
void deletapri(void);    //9
void deleta(void);       //a
void delbusca(void);     //b
void busca(void);        //c

//Inicializando os dados da lista
Dados *principal = NULL;

//---------------------------------
//     Opção '1'
//---------------------------------

//Criando uma lista vazia
void criavazia(void){
    char *nome;
    int idade;
    //Alocando dados para uma String
    nome = (char *)malloc(BUFFER);
    //Lendo String Nome
    printf("\n\nDigite o Nome: \n----> ");
    scanf("%s", nome);
    printf("\n");
    //Lendo int Idade
    printf( "Digite a Idade: \n----> ");
    scanf("%d", &idade);
    printf("\n");
    //Lançando os dados lidos na lista Principal
    free(principal);
    principal = inicia_dados(nome, idade);
}

//Iniciando os dados da lista vazia
Dados *inicia_dados(char *nome, int idade) {
    Dados *novo;
    //Alocando memória para a posição atual da lista
    novo = (Dados *)malloc(sizeof(Dados));
    //Lançando os dados lidos
    novo->nome = (char *)malloc(strlen(nome)+1);
    strncpy(novo->nome, nome, strlen(nome)+1);
    novo->idade = idade;
    //Apontando para a próxima posição da lista
    novo->proximo = NULL;
    return novo;
}

//---------------------------------
//     Opção '2'
//---------------------------------

//Inserindo no início da lista
void insereinicio(void){
    char *nome;
    int idade;
    //Reservando espaço para String
    nome = (char *)malloc(BUFFER);
    //Armazenando String Nome
    printf("\n\nDigite o Nome: \n----> ");
    scanf("%s", nome);
    printf("\n");
    //Armazenando int Idade
    printf("Digite a Idade: \n----> ");
    scanf("%d", &idade);
    printf("\n");
    //Lançando dados no ínicio da lista
    principal = insere_dados(principal, nome, idade);
}

//Inserindo dados recebidos
Dados *insere_dados(Dados *dados, char *nome, int idade) {
    Dados *inicio;
    //Alocando memória para a posição atual
    inicio = (Dados *)malloc(sizeof(Dados));
    //Lançando os dados lidos
    inicio->nome = (char *)malloc(strlen(nome)+1);
    strncpy(inicio->nome, nome, strlen(nome)+1);
    inicio->idade = idade;
    //O próximo valor aponta para a lista já existente
    inicio->proximo = dados;
    return inicio;
}

//---------------------------------
//     Opção '3'
//---------------------------------

//Inserção de dados no final de uma lista
void inserefim(void) {
    char *nome;
    int idade;
    //Alocação de espaço na memória para String Nome
    nome = (char *)malloc(BUFFER);
    //Armazenando String Nome
    printf("\n\nDigite o Nome: \n----> ");
    scanf("%s", nome);
    printf("\n");
    //Armazenando Int Idade
    printf("Digite a Idade: \n----> ");
    scanf("%d", &idade);
    printf("\n");
    //Criando listas auxiliares        
    Dados *final,*aux;
    //Alocando dados para a posição final da lista
    final = (Dados *)malloc(sizeof(Dados));
    //Setando os valores Nome e Idade
    final->nome = (char *)malloc(strlen(nome)+1);
    strncpy(final->nome, nome, strlen(nome)+1);
    final->idade = idade;
    //A proxima posição será Nulo
    final->proximo=NULL;
    //A lista auxiliar será igual a Principal
    aux=principal;
    //Enquanto o próximo de auxiliar não for Nulo
    while(aux->proximo!=NULL){
        aux=aux->proximo;
    }
    //O último valor, será Nulo, e depois apontando para
    //o Final
    aux->proximo=NULL;
    aux->proximo=final;
}

//---------------------------------
//     Opção '4'
//---------------------------------

//Função que testa se a lista está vazia
void listavazia(void){
    if (principal == NULL) 
        printf("\n\nLista esta Vazia!\n\n ");
    else
        printf("\n\nLista nao esta Vazia!\n\n ");
    getchar();
}

//---------------------------------
//     Opção '5'
//---------------------------------

//Mostrar o primeiro elemento da lista
void prielemento(void){
    printf("------------------------\n");  
    printf("Nome: %s\n", principal->nome);
    printf("Idade: %d\n", principal->idade);
    printf("------------------------\n");
    getchar();
}

//---------------------------------
//     Opção '6'
//---------------------------------

//Mostrando o último elemento da lista
void ultelemento(void){
    Dados *aux=principal;
    //Enquanto o próximo elemento não for NULL
    //Avance uma posição
    while(aux->proximo!=NULL){
        aux=aux->proximo;
    }
    printf("------------------------\n");  
    printf("Nome: %s\n", aux->nome);
    printf("Idade: %d\n", aux->idade);
    printf("------------------------\n");
    getchar();
}

//---------------------------------
//     Opção '7'
//---------------------------------

//Exibindo dados da lista
void exibe(void) {
    //Se não estiver vazio, exibe os dados
    if (!checa_vazio(principal))
        exibe_dados(principal);
}

//Exibindo todos os dados do menu
void exibe_dados(Dados *dados) {
    printf("Cadastro:\n\n");
    printf("------------------------\n");
    //Exibindo todos os valores da lista
    for (; dados != NULL; dados = dados->proximo) {
        printf("Nome: %s\n", dados->nome);
        printf("Idade: %d\n", dados->idade);
        printf("------------------------\n");
    }
    getchar();
}

//---------------------------------
//     Opção '8'
//---------------------------------

//Exibindo o tamanho da lista
void exibetam(void){
    //Se não estiver vazio, exibe os dados
    if (!checa_vazio(principal))
        exibe_tamanho(principal);
}

//Exibindo o tamanho total (bytes) e quantidade
void exibe_tamanho(Dados *nova){
  int aux=0, tamanho=0;
  printf("\n------------------------\n");
  //Correndo todos os valores da Lista
  for (; nova != NULL; nova = nova->proximo) {
    aux++;
    tamanho+=sizeof(nova);//bytes
  }
  printf("Total de Elementos: %d\nTamanho Total: %d bytes\n",aux,tamanho);
  printf("------------------------\n");
  getchar();
}

//---------------------------------
//     Opção '9' e 'a'
//---------------------------------

//Deleta o Primeiro valor
void deletapri(void) {
    //Se não estiver vazio, deleta os dados
    if (!checa_vazio(principal))
        principal = deleta_dados(principal,1);
}

//Deleta o Último valor
void deleta(void) {
    //Se não estiver vazio, deleta os dados
    if (!checa_vazio(principal))
        principal = deleta_dados(principal,2);
}

//Deleta registros da lista
  //Tipo 1 = Inicio
  //Tipo 2 = Fim
Dados *deleta_dados(Dados *dados, int nTipo) {
    if(nTipo==1){
        //Apontando para a próxima posição
        Dados *novo;
        novo = dados->proximo;
        //Limpando os dados
        free(dados->nome);
        free(dados);
        printf("O primeiro registro foi deletado com sucesso.\n");
        getchar();
        return novo;
    }
    if(nTipo==2){
        Dados *novo=dados, *aux=dados;
        //Se a lista estiver no fim, exclui o que restou
        if(novo->proximo==NULL){
            free(novo);
            aux=NULL;
        }
        else{
            //Laço de repetição para chegar no fim da lista
            while(novo->proximo!=NULL){
                novo=novo->proximo;
            }
            //Preenchendo os dados da lista auxiliar
            while(aux->proximo!=novo){
                aux=aux->proximo;
            }
            //Limpando os dados e apontando para nulo
            free(novo);
            aux->proximo=NULL;
        }
       printf("O ultimo registro foi deletado com sucesso.\n");
        getchar();
        return aux;
    }
}

//---------------------------------
//     Opção 'b'
//---------------------------------

//Deletando valor buscado
void delbusca(void) {
    char *chave;
    //Se não estiver vazio
    if (!checa_vazio(principal)) {
        chave = (char *)malloc(BUFFER);
        //Armazenando o valor digitado
        printf("Digite o nome para buscar: \n--> ");
        scanf("%s", chave);
        //Deletando a chave buscada
        principal = delbusca_dados(principal, chave);
    }
}

//Deletando os valores buscados
Dados *delbusca_dados(Dados *dados, char *chave) {
    int achou=0,cont=0;
    Dados *juntou, *aux, *nova=dados;        

    //Correndo a lista e verificando se encontrou
      //a string buscada, se sim, aumenta o
      //contador e seta a variável de busca
    for (; nova != NULL; nova = nova->proximo) {
        if (strcmp(chave, nova->nome) == 0) {
            achou=1;
            cont++;
        }
    }

    //Se encontrou a busca
    if(achou==1){
        int ind=0;
        //Correndo a lista
        for(ind=0;ind<cont;ind++){
            //Se encontrou na primeira casa
              //apaga a primeira casa
            if(strcmp(chave,dados->nome)==0){
                aux=dados;
                dados=dados->proximo;
                free(aux);
            }
            //Senão, procura até encontrar
            else{
                aux=dados;
                //Posiciona na frente do encontro
                  //para exclusão
                while(strcmp(chave,aux->nome)!=0){
                    aux=aux->proximo;
                }

                juntou=dados;
                //Enquanto o auxiliar juntou for
                  //diferente do posicionado para
                  //exclusão
                while(juntou->proximo!=aux){
                    juntou=juntou->proximo;
                }
                //Aponta para o próximo valor válido
                juntou->proximo=aux->proximo;

                free(aux);
            }
        }
        printf("Excluido com Sucesso.\n");
    }
    else
        printf("Nenhum resultado encontrado.\n");

    getchar();
    return dados;
}

//---------------------------------
//     Opção 'c'
//---------------------------------

//Função que busca os dados
void busca(void) {
    char *chave;
    //Senão estiver vazio a lista
    if (!checa_vazio(principal)) {
        chave = (char *)malloc(BUFFER);
        //Lendo o nome que será buscado
        printf("Digite o nome para buscar: \n --> ");
        scanf("%s", chave);
        //chamando a função que irá procurar o nome
        busca_dados(principal, chave);
    }
}

//Percorre cada ponta da lista verificando busca
void busca_dados(Dados *dados, char *chave) {
    int achou = 0;
    printf("Cadastro:\n\n");
    //Percorrendo todas as posições
    for (; dados != NULL; dados = dados->proximo) {
        //Se encontrou, mostra os dados
        if (strcmp(chave, dados->nome) == 0) {
            printf("------------------------\n");
            printf("Nome: %s\n", dados->nome);
            printf("Idade: %d\n", dados->idade);
            printf("------------------------\n");
            achou++;
        }
    }

    //Mostrando o resultado da busca
    if (achou == 0)
        printf("Nenhum resultado encontrado.\n");
    else
        printf("Foram encontrado(s) %d registro(s) .\n", achou);

    getchar();
}

//---------------------------------
//     Função Auxiliar
//---------------------------------

//Função que testa se a lista esta vazia
int checa_vazio(Dados *dados) {
    //Se a lista estiver vazia
    if (dados == NULL) {
            printf("Lista vazia!\n");
            getchar();
            return 1;
    } else
            return 0;
}

//---------------------------------
//     Função Principal
//---------------------------------

int main(void) {
    char escolha;
    int chave=0;
    //Laço que irá mostrar o menu esperando uma opção
 //(char)
    do {
        //Limpando a tela, e mostrando o menu
          //lembrando que primeiramente, os itens estão
          //bloqueados até que seja criada uma lista vazia
        system("cls");
        printf("\n\t\tCadastro de Pessoas\n\n");
        printf("Escolha uma opcao: \n");
        printf( "1 - Criar lista vazia\n");
        if(chave==1){
            printf("2 - Inserir no Inicio de uma lista\n");
            printf("3 - Inserir no Fim de uma  lista\n");
        }
        printf("4 - Lista Vazia...\n");
        if(chave==1){
            printf("5 - Exibir dados do primeiro elemento\n");
            printf("6 - Exibir dados do ultimo elemento\n");
            printf("7 - Exibir todos os valores da Lista\n");
            printf("8 - Exibir o tamanho da Lista\n");
            printf("9 - Eliminar primeiro elemento\n");
            printf("a - Eliminar último elemento\n");
            printf("b - Eliminar elemento buscado\n");
            printf("c - Busca Dados\n");
        }
        printf("d - Sair\n\n");
        printf("Resposta: ");
        scanf("%c", &escolha);
        //Se a chave for diferente de zero, porém a
          //escolha for diferente
          //de 1, 4 e d, a escolha será z (opção inválida)
        if((chave==0)&&((escolha!='1')&&(escolha!='d')
&&(escolha!='4')))
            escolha='z';
        switch(escolha) {
            //Criando lista vazia
            case '1':
                chave=1;
                criavazia(); 
                break;
            //Inserindo no início
            case '2':
                insereinicio();
                break;                
            //Inserindo no final
            case '3':
                //Se a lista não estiver vazia
                if(principal!=NULL){
                    inserefim();
                }
                //senão inclui no inicio
                else{
                    insereinicio();
                }
                break;
            //Checando se a lista está vazia
            case '4':
                listavazia();
                break;
            //Mostrando Primeiro elemento
            case '5':
                prielemento();
                break;
            //Mostrando Último elemento
            case '6':
                ultelemento();
                break;
            //Exibindo todos elementos
            case '7':
                exibe();
                break;
            //Exibindo tamanho da lista
            case '8':
                exibetam();
                break;
            //Deleta primeiro elementos
            case '9':
                deletapri();
                break;                
            //Deleta último elemento
            case 'a':
                deleta();
                break;
            //Deleta elemento buscado
            case 'b':
                delbusca();
                break;                
            //Buscando elementos
            case 'c':
                busca();
                break;
            //Saindo e finalizando o programa
            case 'd':
                printf("Obrigado por utilizar esse programa!\n");
                printf("------>Terminal de Informação<------\n\n");
                system("pause");;
                exit(0);
                break;
            //Se foi algum valor inválido
            default:
                printf("Digite uma opcao valida (pressione -Enter- p/ continuar)!\n");
                getchar();
                break;
        }
        //Impedindo sujeira na gravação da escolha
        getchar();
    }
    while (escolha > 0); //Loop Infinito
    return 0;
}
