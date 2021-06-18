#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

//TRABALHO CAMILO ESTRUTURA
/*
INDEX OF FUNÇÕES EXTENAS
AONDE TIVER UM NUMERO APOS UM PRINT"",QUE DIZER QUE E UM CODIGO IDENTADO
STRCPY=COPIANDO DADOS DE UM CANTO PRA OUTRO
STRLEN=VERIFICA A QUANTIDADE DE BITS EOS BITS
ATOI=CONVERTE CHAR EM INT(PRA FZER CALCULO E OUTRAS COISAS)
*/




typedef struct lista//Criando a struct para o cadastros dos produtos
{
    char nome[40];//variaveis(auto explicativo)
    char vencimento[40];
    int quantidade;
    char preco[40];
    unsigned long int codigo;
    struct lista* prox;
} Lista;

//Declaração de funções.
Lista* inserir_produtos(Lista* primeiro);
Lista* excluir_produtos(Lista* primeiro);
void alterar_produtos(Lista* primeiro);
void vender_produtos(Lista* primeiro);
void listar_produtoscompleto(Lista* primeiro);



main()
{
    //Declaração de variáveis
    Lista *primeiro= NULL;
    char opcao;//variavel que vai receber a escolha do usuario

    //Artifício para repetir o programa.
    while(opcao!='s')
    {
        //menu do sistema

        //Menu de opcoes
        printf(" %c----------------------------------------------------------------------------%c\n",201,187);//esse codigo e pra criar caracteres especias em ascII(pergunta pro thiago
        printf(" | ");
        printf("\t\t\t     COMERCIO XIMIRA");
        printf("\t\t\t      |\n");
        printf(" %c----------------------------------------------------------------------------%c\n",200,188);
        printf("\t       %c----------%c\t\t\t\t       ",201,187);
        printf("\t\t\t     ");
        printf("|\t\t\t\t      \n");
        printf("   %c-----------%c----------%c------------%c \n",201,200,188,187);
        printf("   | <A>  Cadastrar Novo Produto       |\n");
        printf("   |-----------------------------------|\n");
        printf("   | <B>  Listar                       |\n");
        printf("   |-----------------------------------|\n");
        printf("   | <C>  Excluir Produto              |\n");
        printf("   |-----------------------------------|\n");
        printf("   | <E>  Realizar Venda               |\n");
        printf("   |-----------------------------------|\n");
        printf("   | <S>  Sair                         |\n");
        printf("   %c-----------------------------------%c",200,188);
        printf("\n\n\n\n");
        printf("\t\t\t ");

        //Lendo a opcao do menu
        fflush(stdin);//limpando o buffer do teclado
        opcao= getch();

        //Menu de opcoes
        switch(opcao)// switch das opcoes
        {
        case 'A':
        case 'a':
        case '1':
            //Inserindo os produtos.
            fflush(stdin);
            system("cls");
            printf(" %c----------------------------------------------------------------------------%c\n",201,187);
            printf(" | ");
            printf("\t\t\t  CADASTRAR NOVO PRODUTO     ");
            printf("\t\t\t      |\n");
            printf(" %c----------------------------------------------------------------------------%c\n",200,188);
            primeiro= inserir_produtos(primeiro);//caso essa opcao seta escolhida ele vai pra funcao inserir_produtos
            getch();//pega a opcao do user
            system("cls");//limpa a tela apos e carrega a opcao do user
            break;

        case 'B':
        case 'b':
        case '2':
            //Listando os produtos.
            system ("cls");
            printf(" %c----------------------------------------------------------------------------%c\n",201,187);
            printf(" | ");
            printf("\t\t\t     PRODUTOS CADASTRADOS");
            printf("\t\t\t      |\n");
            printf(" %c----------------------------------------------------------------------------%c\n",200,188);
            listar_produtoscompleto(primeiro);//caso essa opcao seta escolhida ele vai pra funcao listar_produtoscompleto
            getch();//pega a opcao do user
            system("cls");//limpa a tela apos e carrega a opcao do user
            break;

        case 'C':
        case 'c':
        case '3':
            //Excluindo produtos da lista.
            system ("cls");
            printf(" %c----------------------------------------------------------------------------%c\n",201,187);
            printf(" | ");
            printf("\t\t\t        EXCLUIR PRODUTOS");
            printf("\t\t\t      |\n");
            printf(" %c----------------------------------------------------------------------------%c\n",200,188);
            primeiro= excluir_produtos(primeiro);//caso essa opcao seta escolhida ele vai pra funcao excluir_produtos
            getch();//pega a opcao do user
            system("cls");//limpa a tela apos e carrega a opcao do user
            break;

        case 'D':
        case 'd':
        case '4':
            //Alterando produtos da lista.
            system ("cls");
            printf(" %c----------------------------------------------------------------------------%c\n",201,187);
            printf(" | ");
            printf("\t\t\t       ALTERAR PRODUTOS *the secret*");
            printf("\t\t\t      |\n");
            printf(" %c----------------------------------------------------------------------------%c\n",200,188);
            alterar_produtos(primeiro);//caso essa opcao seta escolhida ele vai pra funcao excluir_produtos
            getch();//pega a opcao do user
            system("cls");//limpa a tela apos e carrega a opcao do user
            break;
        case 'E':
        case 'e':
        case '5':
            //REALIZA VENDA produtos.
            system ("cls");
            printf(" %c----------------------------------------------------------------------------%c\n",201,187);
            printf(" | ");
            printf("\t\t\t       REALIZA VENDA");
            printf("\t\t\t      |\n");
            printf(" %c----------------------------------------------------------------------------%c\n",200,188);
            vender_produtos(primeiro);//caso essa opcao seta escolhida ele vai pra funcao vender_produtos
            getch();//pega a opcao do user
            system("cls");//limpa a tela apos e carrega a opcao do user
            break;



        case '9':
            //CREDITOS
            system ("cls");
            printf(" %c----------------------------------------------------------------------------%c\n",201,187);
            printf(" | ");
            printf("\t\t\t     %c  CREDITOS %c",184,184);
            printf("\t\t\t       	\n");
            printf("\t\t\t       	\n");
            printf("\t\t\t       	\n");
            printf("\t\t\t       	\n");
            printf("\t\t\t       	\n");
            printf("\t\t\t %cTHIAGO-'The Wizard code' %c	\n",208,208);
            printf("\t\t\t%c WYLLKSON-'O bardo do reino'%c \n",219,219);
            printf("\t\t\t%c STANLEY-'O fiel escudeiro'%c \n",231,231);
            printf("\t\t\t%c MICHELE-'The true outsider' %c \n",244,244);
            printf("\t\t\t       	\n");
            printf("\t\t\t       	\n");
            printf("\t\t\t       	\n");
            printf("\t\t\t       	\n");
            printf("\t\t\t       	\n");
            printf("\t\t\t       	\n");
            printf("\t\t\t       	\n");
            printf("\t\t\t       	\n");
            printf("\t\t\t 'O unico que decidi as coisas aqui..     \n");
            printf("\t\t\t  ..SOU EU '   \n");
            printf("\t\t\t           Lord escanor %c  \n",206);
            printf(" %c----------------------------------------------------------------------------%c\n",200,188);
            getch();//pega a opcao do user
            system("cls");//limpa a tela apos e carrega a opcao do user
            break;

        case 'S':
        case 's':
            //Opcao para sair do programa.
            opcao='s';
            break;

        default:
            // previne a situação de um usuário qualquer, digitar uma opcão inexistente no menu.
            system("cls");
            break;
        }
    }
}
//Função inserir produtos
Lista* inserir_produtos (Lista *primeiro)//funcao inserir_produtos
{
    Lista produto;//criando o 'vetor' onde vai estar salvo os produtos
    Lista *atual= primeiro;//passando o a lista pro ponteiro atual
    char identificador= 'F';//criando o identificador

    //Lendo as informações do produtos.
    printf("  Nome: ");//pedindo o nome do user
    fflush (stdin);//limpando o buffer
    fgets(produto.nome, 40, stdin);//inserindo no vetor o nome a variavel digitada
    printf ("\n");//"pulando" pro proximo e fazendo o fflush excluir o \n
    printf("  vencimento: ");//pedindo o vencimento do user
    fflush (stdin);//limpando o buffer
    fgets(produto.vencimento, 40, stdin);//inserindo no vetor o vencimento a variavel digitada
    printf ("\n");//"pulando" pro proximo e fazendo o fflush excluir o \n
    printf("  quantidade: ");//pedindo a quantidade do user
    fflush (stdin);//limpando o buffer
    scanf("%d",&produto.quantidade);//inserindo no vetor a quantidade na variavel digitada
    printf ("\n");//"pulando" pro proximo e fazendo o fflush excluir o \n
    printf("  pre%co: ",135);//pedindo a preço do user com ç usando o codigo em asc
    fflush (stdin);//limpando o buffer
    fgets(produto.preco, 40, stdin);//inserindo no vetor a quantidade na variavel digitada
    printf ("\n");//"pulando" pro proximo e fazendo o fflush excluir o \n
    printf("  C%cdigo: ",162);//pedindo a codigo do user com ó usando o codigo em asc
    scanf("%u",&produto.codigo);//inserindo no vetor o codigo na variavel digitada
    printf ("\n");

    //Verificando se o cadastro já existe.
    for(atual=primeiro; atual!=NULL; atual=atual->prox)
    {
        if(atual->codigo==produto.codigo)//caso sim,nem vai deixar inserir
        {
            identificador= 'V';//se tudo tiver certo ele vai inserir
            break;
        }
    }

    if(identificador!='V' && (strlen(produto.nome)!=1 && strlen(produto.vencimento)!=1))//Mais um verificador se tudo  confere
    {
        //se o idenficador o variavel nome eo vencimento forem diferentes...
        //...Alocara os espaços e guardare as informações do produto.
        Lista* NovoProduto=(Lista*) malloc (sizeof(Lista));//usando malloc para armazenar a lista em um novo produto
        strcpy(NovoProduto->nome, produto.nome);//usando o stringcopy(strcpy) pra copiar  o que foi digitado para a variavel de armazenmento
        strcpy(NovoProduto->vencimento, produto.vencimento);//usando o stringcopy(strcpy) pra copiar  o que foi digitado para a variavel de armazenmento
        NovoProduto->quantidade = produto.quantidade;//quantidade sendo alocado de maneira difente(pois pra alterar a quantidade foi precisso fazer em int)(pergunta pro thiago)
        strcpy(NovoProduto->preco, produto.preco);//usando o stringcopy(strcpy) pra copiar  o que foi digitado para a variavel de armazenmento
        NovoProduto->codigo= produto.codigo;//alocando oque foi digitado para a variavel de armazenmento
        NovoProduto->prox= primeiro;//fazendo receber o proximo endereço
        printf("  Cadastro realizado com sucesso.");//msgm que foi bem sussedido
        printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");//msgm pra retorna pro menu principal
        return NovoProduto;//retorna depois pro novo produto
    }
    else//ou
    {
        printf("  Cadastro inv%clido.",160);//caso alguma coisa nao bata,vai dar cadastro invalido
        printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");//retorna depois pro novo produto
        return primeiro;
    }
}

//Função para excluir produtos.
Lista* excluir_produtos(Lista *primeiro)
{

    Lista *anterior= NULL;//Ponteiro para saber o elemento anterior ao elemento atual da lista.
    Lista *atual= primeiro;//Ponteiro para percorrer a lista sem perder o primeiro elemento da lista.
    unsigned long int codigo=0;

    //Requisitando e lendo o código do produto a ser excluído.
    printf("  C%cdigo do produto ser exclu%cdo: ", 162,161);//esse codigo foi explicado acima
    fflush(stdin);//esse codigo foi explicado acima
    scanf("%u",&codigo);//armazenando a exolha

    //Procurando o produto na lista.
    while(atual!= NULL && atual->codigo!=codigo)
    {
        anterior= atual;
        atual= atual->prox;
    }

    //Mensagem caso o produto não seja encontrado.
    if(atual==NULL)
    {
        printf("\n  produto n%co encontrado.", 198);//esse codigo foi explicado acima
        printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");//msng pro usuario
        return primeiro;
    }

    //Excluindo o primeiro produto da lista.
    if(anterior==NULL)
    {
        printf("\n  Conte%cdo exclu%cdo com sucesso.", 163,161);
        primeiro= atual->prox;

        //Excluindo um produto do meio da lista.
    }
    else
    {
        printf("\n  Conte%cdo exclu%cdo com sucesso.", 163,161);
        anterior->prox= atual->prox;
    }

    //Desalocando o espaço da memória.
    free(atual);
    printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
    return primeiro;
}

//Função para alterar produtos. //menu secreto,funcao de apoio
void alterar_produtos(Lista* primeiro)
{

    char nome_substituto[40], vencimento_substituto[40], preco_substituto[40];
    int quantidade_substituto;
    unsigned long int codigo;
    Lista* atual=primeiro;

    //Requisitando e lendo o código do produto a ser alterado.
    printf("  C%cdigo do produto a ser alterado: ", 162);
    fflush(stdin);
    scanf("%u",&codigo);

    //Procurando o produto na lista.
    while(atual!= NULL && atual->codigo!=codigo)
    {
        atual= atual->prox;
    }

    //Alterando os dados do produto
    if(atual!=NULL)
    {
        printf("\n  Novo nome: ");
        fflush (stdin);
        fgets(nome_substituto, 40, stdin);
        strcpy(atual->nome,nome_substituto);

        printf("\n  Novo vencimento: ");
        fflush (stdin);
        fgets(vencimento_substituto, 40, stdin);
        strcpy(atual->vencimento,vencimento_substituto);

        printf("\n  Nova quantidade: ");
        fflush (stdin);
        scanf("%d",& quantidade_substituto);
        atual->quantidade = quantidade_substituto;

        printf("\n  Novo pre%co: ",135);
        fflush (stdin);
        fgets(preco_substituto, 40, stdin);
        strcpy(atual->preco,preco_substituto);




        printf("  Dados alterados com sucesso.");
    }
    else
    {
        printf("\n  produto n%co encontrado.",198);
    }
    printf("\n\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
}
//Função para vender  produtos.
void vender_produtos(Lista* primeiro)
{


    //char nome_substituto[40], vencimento_substituto[40], preco_substituto[40];
    int dinheirocli,preco,quantidadecli,quantidadei,precopagar, quantidade_substituto, quantidade_novo;
    unsigned long int codigo;
    Lista* atual=primeiro;//trazendo a lista pra venda
    Lista produto;//trazendo a lista pra venda

    //Requisitando e lendo o código do produto a ser comprado.
    printf(" Digite o C%cdigo produto a ser comprado: ", 162);
    fflush(stdin);
    scanf("%u",&codigo);

    //Procurando o produto na lista.
    while(atual!= NULL && atual->codigo!=codigo)
    {
        atual= atual->prox;
    }

    //trazendo os dados do produto pra venda
    if(atual!=NULL)
    {
        printf("\n  Nome: ");
        printf("%s", atual->nome);
        printf("\n  vencimento: ");
        printf("%s", atual->vencimento);
        printf("\n  quantidade: ");
        printf("%d", atual->quantidade);
        printf("\n  pre%co: ",135);
        printf("%s", atual->preco);
        printf("\n   C%cdigo: ",162);
        printf("%u", atual->codigo);

    }
    else//se nao achar pelo codigo
    {
        printf("\n  produto n%co encontrado.",198);
    }
    preco=atoi(atual->preco);//convertendo char para int do preco(pra fazer as operações)
    quantidadei=atual->quantidade;//fazendo 'quantidadei' receber quantidade atual do produto 'atual->quantidade'

    printf("\n  Digite a quantidade a ser comprada ");//pedindo a quantidade a ser comprada
    scanf("%d",&quantidadecli);//pegando a quantidade a ser comprada

    precopagar=quantidadecli*preco;//multiplicando a quantidade*preço e armazenando em precopagar

    printf("\n  TOTAL DA COMPRA %d ",precopagar);//exibindo quanto o cliente tem que pagar


    printf("\n  Digite a quantia a ser gasta ");//pedindo o valor do cliente a pagar
    scanf("%d",&dinheirocli);//armazentando esse valor

    dinheirocli=dinheirocli-precopagar;//calculando a conta,quantia paga do cliente menos o valor da compra armazenando em dinheriocli

    quantidadei=quantidadei-quantidadecli;

    // printf("\n  NOVA QUANTIDADE%d",quantidadei);
    printf("\n  TROCO %d",dinheirocli);
    atual->quantidade=quantidadei;//ATUALIZANDO ESTOQUE COM  A QUANTIDADE QUE FOI VENDIDAD


    printf("\n\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");//informando o retorno pro menu principal
}
//Função listar produtdos(completo/individual/em baixa).
void listar_produtoscompleto(Lista* primeiro)
{


    int quantidadecli,quantidadei;//trazendo as vareis que eu vou utilizar
    unsigned long int codigo;//trazendo a variavel para a consulta individual
    Lista* atual=primeiro;//trazendo o vetor encadeado
    Lista produto;//trazendo o vetor encadeado com lista dos produtos(pras consultas)
    int opcao;

    do
    {
        //menu de opçoes(auto explicativo),fiz desse jeito para diferenciar do menu principal(algo como um layer abaixo do sistema)
        printf("Menu de Opcoes:\n");
        printf("1 - LISTAR COMPLETO TOTAL\n");//escolha de opções
        printf("2 - Listar produto individual.\n");
        printf("3 - LISTAR PRODUTOS EM BAIXA NO ESTOQUE\n");
        printf("4 - LISTAR QUANTIDADE TOTAL PRODUTOS CADASTRADOS \n");
        printf("7 - Sair\n\n");
        printf("Digite a sua Op%cao: ",135);
        scanf("%d",&opcao);//pegando a opçao de escolha do usuario
        fflush(stdin);
        system("cls");//apos o usuario escolher sua opcao,a tela limpara e progama carregara a opcao escolhida
        if (opcao < 1 || opcao > 7)//limitando as opçoes
            printf("\n\nOpcao Invalida\n\n");
        switch (opcao)
        {
        case 1://LISTAR COMPLETO TOTAL,traz tudo que tem na lista,independente de qualquer coisa


            //Imprimindo os produtos da lista, e suas repectivas informações.
            for(atual= primeiro ; atual!= NULL; atual= atual->prox)//criando array pra exibir a lista
            {
                printf("\n  Nome: ");
                printf("%s", atual->nome);
                printf("\n  vencimento: ");
                printf("%s", atual->vencimento);
                printf("\n  quantidade: ");
                printf("%d", atual->quantidade);
                printf("\n  pre%co: ",135);
                printf("%s", atual->preco);
                printf("\n   C%cdigo: ",162);
                printf("%u", atual->codigo);
                printf("\n\n");
            }
            if(primeiro==NULL)//caso no array seja null,a mensagem abaixo vai ser mostrado
                printf("  Nenhum produto cadastrado.");
            printf("\n\n  ");
            break;
        case 2://caso 2,procurando algo especifico no estoque

            //Requisitando e lendo o código do produto a ser alterado.fiz via codigo pois achei que faria mais sentido desse jeito
            printf(" Digite o C%cdigo produto a ser buscado: ", 162);
            fflush(stdin);
            scanf("%u",&codigo);

            //Procurando o produto na lista.
            while(atual!= NULL && atual->codigo!=codigo)
            {
                atual= atual->prox;
            }

            //trazendo o item procurado
            if(atual!=NULL)
            {
                printf("\n  Nome: ");
                printf("%s", atual->nome);
                printf("\n  vencimento: ");
                printf("%s", atual->vencimento);
                printf("\n  quantidade: ");
                printf("%d", atual->quantidade);
                printf("\n  pre%co: ",135);
                printf("%s", atual->preco);
                printf("\n   C%cdigo: ",162);
                printf("%u", atual->codigo);

            }
            else
            {
                printf("\n  produto n%co encontrado.",198);//se nao tiver ,essa mensagem aparece
            }
            break;

        case 3://caso 3,itens em baixa

            quantidadei=atual->quantidade;//como a quantidade esta em CHAR tive que converter em int para poder manipular
            //usei 'atoi' para a manipulação "Char to int"

            if(quantidadei<=5)//limitando os items que iram aparecer pela quantidade <=5
            {

                for(atual= primeiro ; atual!= NULL; atual= atual->prox)//criado array
                {
                    //exibindo a lista se ouver
                    printf("\n  Nome: ");
                    printf("%s", atual->nome);
                    printf("\n  vencimento: ");
                    printf("%s", atual->vencimento);
                    printf("\n  quantidade: ");
                    printf("%d", atual->quantidade);
                    printf("\n  pre%co: ",135);
                    printf("%s", atual->preco);
                    printf("\n   C%cdigo: ",162);
                    printf("%u", atual->codigo);
                    printf("\n\n");
                }

                printf("\n\n  PRODUTOS EM BAIXA ATUALMENTE.\n");//mensagem exibindo

            }
            else
            {
                printf("\n\n  PRODUTOS EM BOA QUANTIDADE.\n");//caso nao haja nenhum produto <=5
            }

            break;

        case 4://caso 4,itens TOTAL

            atual->codigo=1;

            if(atual->codigo>=1)//limitando a quantidade so pra mostrar se tiver mais que um
            {

                for(atual= primeiro ; atual!= NULL; atual= atual->prox)//criando array
                {
                    quantidadei=quantidadei + 1;//variavel pra contar a quantidade de produtos

                }
                printf("Quantidade total de produtos cadastrados %d \n",quantidadei);
                printf("\n\n  TODOS OS PRODUTOS CADASTRADOS.:\n");//mensagem exibindo

            }
            else
            {
                printf("\n\n  SEM PRODUTOS CADASTRADOS.");//caso nao haja nenhum produto
            }

            break;
        }
    }
    while (opcao != 7);//caso aperte 7 o prompt fechara
}


