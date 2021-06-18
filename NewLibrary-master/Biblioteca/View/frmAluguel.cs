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
    public partial class frmAluguel : Form
    {
        MySqlCommand command { get; set; }
        //MySqlCommand command2 { get; set; }
        public frmAluguel()
        {
            InitializeComponent();
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void frmAluguel_Load(object sender, EventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void btnalugar_Click(object sender, EventArgs e)
        {
            Connection conn = new Connection();
            DataTable dataTable = new DataTable();
            // Leitor para DataGridView
            MySqlDataAdapter dataAdap = new MySqlDataAdapter();
            // Conecta com classe Connection
            var conexao = conn.Conecta();
            string strCommand = "INSERT INTO aluguel values (DEFAULT,'" + txtcodfu.Text + "','" + txtcodusu.Text + "','" + txtcodlivro.Text + "','" + txtcodbarra.Text + "','" + txtdataemp.Text + "','" + txtdatadev.Text + "')";
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
                MessageBox.Show("DADOS CADASTRADOS");
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

        private void btnAtualiza_Click(object sender, EventArgs e)
        {
            Connection conn = new Connection();
            DataTable dataTable = new DataTable();
            // Leitor para DataGridView
            MySqlDataAdapter dataAdap = new MySqlDataAdapter();
            // Conecta com classe Connection
            var conexao = conn.Conecta();
            string strCommand = "update livro set livroStatusCod = '2' where livrocod = '"+txtcodlivro.Text+"'";
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
                //MessageBox.Show("DADOS CADASTRADOS");
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