using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Biblioteca.Model;
using Biblioteca.DAO.Acervo;
using Biblioteca.DAO.User;
using MySql.Data.MySqlClient;
using Biblioteca.Config;

namespace Biblioteca.View
{
    public partial class FormCadastroUserUpdate : Form
    {
        MySqlCommand command { get; set; }
        public FormCadastroUserUpdate()
        {
            InitializeComponent();
        }

        private void btnalterar_Click(object sender, EventArgs e)
        {
            Connection conn = new Connection();
            DataTable dataTable = new DataTable();
            // Leitor para DataGridView
            MySqlDataAdapter dataAdap = new MySqlDataAdapter();
            // Conecta com classe Connection
            var conexao = conn.Conecta();
            string strCommand = "update user set usernome='"+txtunome.Text+"',userdatanascimento='"+txtdatanasc.Text+"',userfone='"+txtfone.Text+ "',usersenha='" + txtsenha.Text + "',userdatacadastro='"+txtdatacadas.Text+"' where usercod='"+txtcoduser.Text+"'";
            //update livro set livroStatusCod = '2' where livrocod = '19';

            try
            {
                conexao.Open();
                command = new MySqlCommand(strCommand, conexao);
                dataAdap.SelectCommand = command;
                dataAdap.Fill(dataTable);

                // return dataTable;
                MessageBox.Show("DADOS ATUALIZADOS");
            }
            catch (Exception erro)
            {
                // Mostra o erro EX: ERRO:DADOS ERRADOS
                MessageBox.Show("ERRO :" + erro);
                // Retorna false para sinalizar que a tarefa não foi realizada.

            }
            finally
            {
                Console.WriteLine("Fechou");
                conexao.Close();
            }


        }
    }
}
