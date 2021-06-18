#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 
#include <windows.h> 
#include <mysql/mysql.h> 

using namespace std;

int main(int)
{
MYSQL conexao;
mysql_init(&conexao);
if ( mysql_real_connect(&conexao, "localhost", "root", "1234", "locadora", 0, NULL, 0) )
{
printf("\nConexao ao banco realizada com sucesso!\n");
mysql_query(&conexao,"INSERT INTO tabcadastro(matricula,nome,rg,cpf,comp_residencia,telefone) values('0001', 'Michelle','000022','000.000.000-20','Rua 15, Cidade Nova','9293-8696');");
mysql_close(&conexao);
}
else
{
printf("Falha de conexao\n");
printf("Erro %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));
}
system("PAUSE");
return(0);
}
