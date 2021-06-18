using System;
using System.Collections.Generic;
using System.Linq;
using System.Data;
using System.Threading.Tasks;
using MySql.Data.MySqlClient;
using Biblioteca.Config;
using Biblioteca.DAO.Acervo;

namespace Biblioteca.Model
{
    class AcervoModel
    {
        public Connection conn = new Connection();
        public MySqlCommand command { get; set; }

        public DataTable SelectLivro(Livro livro)
        {
            DataTable dataTable = new DataTable();
            // Leitor para DataGridView
            MySqlDataAdapter dataAdap = new MySqlDataAdapter();
            // Conecta com classe Connection
            var conexao = conn.Conecta();
            // Cria commando string
            string strCommand = "SELECT * FROM livro ";

            try
            {
                // Abre conexao
                conexao.Open();
                // Cria comando2 utilizando (string de comando e objeto de conexao)
                command = new MySqlCommand(strCommand, conexao);
                // Limpa parametros para novos
                //command.Parameters.Clear();
                // Add dados às determinadas colunas do DB.
               // command.Parameters.Add("@user_nome", MySqlDbType.VarChar).Value = ;
               // command.Parameters.Add("@user_senha", MySqlDbType.VarChar).Value = livro. ;

                // Executa esse comando
                dataAdap.SelectCommand = command;
                dataAdap.Fill(dataTable);
                return dataTable;
            }
            catch (MySqlException e)
            {
                // Mostra o erro EX: ERRO:DADOS ERRADOS
                Console.WriteLine("ERRO:", e);
                // Retorna false para sinalizar que a tarefa não foi realizada.
                throw e;
            }
            finally
            {
                Console.WriteLine("Fechou");
                conexao.Close();
            }
        }

        //Função de teste
        /*public bool InsereLivro(Livro livro)
        {
            // Conecta com classe Connection
            var conexao = conn.Conecta();
            // Cria commando string
            string strCommand = "SELECT * FROM ";

            try { 
                // Abre conexao
                conexao.Open();
                // Cria comando2 utilizando (string de comando e objeto de conexao)
                command = new MySqlCommand(strCommand, conexao);
                // Add dados às determinadas colunas do DB.
                command.Parameters.Add("@assunto_codigo", MySqlDbType.VarChar, 68).Value = livro.livroCod;
                // Executa esse comando
                command.ExecuteNonQuery();
                return true;
            }
            catch (MySqlException e)
            {
                // Mostra o erro EX: ERRO:DADOS ERRADOS
                Console.WriteLine("ERRO:", e);
                // Retorna false para sinalizar que a tarefa não foi realizada.
                return false;
            }
            finally
            {
                conexao.Close();
            }
        }*/
    }
}
