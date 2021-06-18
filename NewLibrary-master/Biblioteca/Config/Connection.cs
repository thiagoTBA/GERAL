using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using MySql.Data.MySqlClient;

namespace Biblioteca.Config
{
    class Connection 
    {
        /* ATTRIBUTES */
        public MySqlConnection conexao { get; set; }
        private string HOST = "localhost"; //Server
        private string UID = "biblioteca"; // User
        private string DATABASE = "root";  // Banco de dados 
        private string PASS = ""; // Senha
        private string PORT = ""; // Porta Se houver
        private string StringConexao { get; set; }

        /* METHODS */

        private void Propriedades()
        {
            this.StringConexao = "Server=localhost;Database=biblioteca;Uid=root;Pwd=;";
        }

        /// <summary>
        /// Configura conexão
        /// </summary>
        /// <returns>conexao MYSQL</returns>
        public MySqlConnection Conecta()
        {
            this.Propriedades();
            this.conexao = new MySqlConnection(StringConexao);
            return this.conexao;
        }
    }
}
