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
    public partial class frmHome : Form
    {
        MySqlCommand command { get; set; }
        Livro livro;
        AcervoModel acervoModel;
        string user;

        public frmHome(string user)
        {
            // Mostra mensagem de Welcome
            this.user = user;
            // Cria um livro Obj
            livro = new Livro();
            // Cria um AcervoModel Obj
            acervoModel = new AcervoModel();
            InitializeComponent();
        }

        private void btnPesquisar_Click(object sender, EventArgs e)
        {
            // Povoa a DataGrid com dados do Banco
            dgvAcervo.DataSource = acervoModel.SelectLivro(livro);

        }

        private void frmHome_Load(object sender, EventArgs e)
        {
            lblWelcome.Text = "Welcome, " + this.user + "!";
        }

        private void label1_Click(object sender, EventArgs e)
        {


        }

        private void button1_Click(object sender, EventArgs e)
        {
            frmCadastro formcadastro = new frmCadastro();
            formcadastro.ShowDialog();
        }

        private void btncadastrauser_Click(object sender, EventArgs e)
        {
            frmCadastrarUsuario frmCadastrarUsuario = new frmCadastrarUsuario();
            frmCadastrarUsuario.ShowDialog();
        }

        private void btncadasfu_Click(object sender, EventArgs e)
        {
            frmCadastrarFuncionario frmCadastrarFuncionario = new frmCadastrarFuncionario();
            frmCadastrarFuncionario.ShowDialog();
        }

        private void btnalugar_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            frmAluguel frmAluguel = new frmAluguel();
            frmAluguel.ShowDialog();

        }

        private void btntst_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click_2(object sender, EventArgs e)
        {
            frmCadastrarAutor frmCadastrarAutor = new frmCadastrarAutor();
            frmCadastrarAutor.ShowDialog();
        }

        private void btncadtema_Click(object sender, EventArgs e)
        {
            frmCadastrarTema frmCadastrarTema = new frmCadastrarTema();
            frmCadastrarTema.ShowDialog();
        }

        private void dgvAcervo_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void Btnpesquse_Click(object sender, EventArgs e)

        {

        }

        private void btnpesusu_Click(object sender, EventArgs e)
        {

            Connection conn = new Connection();
            DataTable dataTable = new DataTable();
            // Leitor para DataGridView
            MySqlDataAdapter dataAdap = new MySqlDataAdapter();
            // Conecta com classe Connection
            var conexao = conn.Conecta();
            string strCommand = "SELECT * FROM user ";


            try
            {
                conexao.Open();
                command = new MySqlCommand(strCommand, conexao);

                dataAdap.SelectCommand = command;
                dataAdap.Fill(dataTable);
                dgvAcervo.DataSource = dataTable;
                // return dataTable;
                MessageBox.Show("EXBINDO DADOS");
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

        private void btnpesqfu_Click(object sender, EventArgs e)
        {

            Connection conn = new Connection();
            DataTable dataTable = new DataTable();
            // Leitor para DataGridView
            MySqlDataAdapter dataAdap = new MySqlDataAdapter();
            // Conecta com classe Connection
            var conexao = conn.Conecta();
            string strCommand = "SELECT * FROM funcionario ";


            try
            {
                conexao.Open();
                command = new MySqlCommand(strCommand, conexao);

                dataAdap.SelectCommand = command;
                dataAdap.Fill(dataTable);
                dgvAcervo.DataSource = dataTable;
                // return dataTable;
                MessageBox.Show("EXBINDO DADOS");
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

        private void btnpesqautor_Click(object sender, EventArgs e)
        {

            Connection conn = new Connection();
            DataTable dataTable = new DataTable();
            // Leitor para DataGridView
            MySqlDataAdapter dataAdap = new MySqlDataAdapter();
            // Conecta com classe Connection
            var conexao = conn.Conecta();
            string strCommand = "SELECT * FROM autor ";


            try
            {
                conexao.Open();
                command = new MySqlCommand(strCommand, conexao);

                dataAdap.SelectCommand = command;
                dataAdap.Fill(dataTable);
                dgvAcervo.DataSource = dataTable;
                // return dataTable;
                MessageBox.Show("EXBINDO DADOS");
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

        private void btnpesqtema_Click(object sender, EventArgs e)
        {

            Connection conn = new Connection();
            DataTable dataTable = new DataTable();
            // Leitor para DataGridView
            MySqlDataAdapter dataAdap = new MySqlDataAdapter();
            // Conecta com classe Connection
            var conexao = conn.Conecta();
            string strCommand = "SELECT * FROM tema ";


            try
            {
                conexao.Open();
                command = new MySqlCommand(strCommand, conexao);

                dataAdap.SelectCommand = command;
                dataAdap.Fill(dataTable);
                dgvAcervo.DataSource = dataTable;
                // return dataTable;
                MessageBox.Show("EXBINDO DADOS");
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

        private void btnalu_Click(object sender, EventArgs e)
        {

            Connection conn = new Connection();
            DataTable dataTable = new DataTable();
            // Leitor para DataGridView
            MySqlDataAdapter dataAdap = new MySqlDataAdapter();
            // Conecta com classe Connection
            var conexao = conn.Conecta();
            string strCommand = "SELECT * FROM aluguel ";


            try
            {
                conexao.Open();
                command = new MySqlCommand(strCommand, conexao);

                dataAdap.SelectCommand = command;
                dataAdap.Fill(dataTable);
                dgvAcervo.DataSource = dataTable;
                // return dataTable;
                MessageBox.Show("EXBINDO DADOS");
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

        private void btndelete_Click(object sender, EventArgs e)
        {
            
        }

        private void btndelete_Click_1(object sender, EventArgs e)
        {
            frmDelete frmDelete = new frmDelete();
            frmDelete.ShowDialog();
        }

        private void btnlivrodev_Click(object sender, EventArgs e)
        {
            frmDevolucao frmDevolucao = new frmDevolucao();
            frmDevolucao.ShowDialog();
        }

        private void btnalterar_Click(object sender, EventArgs e)
        {
            FormCadastroUserUpdate formCadastroUserUpdate = new FormCadastroUserUpdate();
            formCadastroUserUpdate.ShowDialog();
        }
    }

}


