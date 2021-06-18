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
    public partial class frmDevolucao : Form
    {
        MySqlCommand command { get; set; }
        public frmDevolucao()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void btndevolve_Click(object sender, EventArgs e)
        {
            Connection conn = new Connection();
            DataTable dataTable = new DataTable();
            // Leitor para DataGridView
            MySqlDataAdapter dataAdap = new MySqlDataAdapter();
            // Conecta com classe Connection
            var conexao = conn.Conecta();
            string strCommand = "update livro set livroStatusCod = '1' where livrocod = '" + txtstatuscod.Text + "'";
            //string strCommand2 = "update livro set livrostatuscod = '2' where livrocod = '19'";


            try
            {
                conexao.Open();
                command = new MySqlCommand(strCommand, conexao);
                //command2 = new MySqlCommand(strCommand2, conexao);
                dataAdap.SelectCommand = command;
                //dataAdap.SelectCommand = command2;
                dataAdap.Fill(dataTable);

                // return dataTable;
                MessageBox.Show("LIVRO DISPONIVEL PARA USO");
            }
            catch (Exception erro)
            {
                // Mostra o erro EX: ERRO:DADOS ERRADOS
                MessageBox.Show("ERRO :");
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
