using System;
using System.Collections.Generic;
using System.Linq;
using System.Data;
using System.Threading.Tasks;
using MySql.Data.MySqlClient;
using Biblioteca.Config;
using Biblioteca.DAO.User;

namespace Biblioteca.Model
{
    class UsersModel
    {
        public Connection conn = new Connection();
        public MySqlCommand command { get; set; }

        public int Login(Users user)
        {
            var conexao = conn.Conecta();
            // Cria commando string
            //string strCommand = "SELECT * FROM user WHERE UserNome = @user_nome AND UserSenha = @user_senha";
              string strCommand = "SELECT usercod FROM user inner join funcionario where  UserNome = @user_nome AND UserSenha = @user_senha OR FunNome = @user_nome AND FunSenha = @user_senha;";


            try
            {
                // Abre conexao
                conexao.Open();
                // Cria comando2 utilizando (string de comando e objeto de conexao)
                command = new MySqlCommand(strCommand, conexao);
                // Limpa parametros para novos
                command.Parameters.Clear();
                // Add dados às determinadas colunas do DB.
                command.Parameters.Add("@user_nome", MySqlDbType.VarChar).Value = user._normal.normalNome;
                command.Parameters.Add("@user_senha", MySqlDbType.VarChar).Value = user._normal.normalSenha;

                // Executa esse comando
                command.ExecuteNonQuery();

                if (Convert.ToInt32(command.ExecuteScalar())  > 0)
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
                
            }
            catch (MySqlException e)
            {
                // Mostra o erro EX: ERRO:DADOS ERRADOS
                Console.WriteLine("ERRO:", e);
                // Retorna false para sinalizar que a tarefa não foi realizada.
                return 666;
            }
            finally
            {
                Console.WriteLine("Fechou");
                conexao.Close();
            }
        }
        /*
        public DataTable example(Users user)
        {
            DataTable dataTable = new DataTable();
            // Leitor para DataGridView
            MySqlDataAdapter dataAdap = new MySqlDataAdapter();
            // Conecta com classe Connection
            var conexao = conn.Conecta();
            // Cria commando string
            string strCommand = "SELECT * FROM user WHERE UserNome = @user_nome AND UserSenha = @user_senha";

            try
            {
                // Abre conexao
                conexao.Open();
                // Cria comando2 utilizando (string de comando e objeto de conexao)
                command = new MySqlCommand(strCommand, conexao);
                // Limpa parametros para novos
                command.Parameters.Clear();
                // Add dados às determinadas colunas do DB.
                command.Parameters.Add("@user_nome", MySqlDbType.VarChar).Value = user._normal.normalNome;
                command.Parameters.Add("@user_senha", MySqlDbType.VarChar).Value = user._normal.normalSenha;

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
        }*/
    }
}
