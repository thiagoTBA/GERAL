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
    


    public partial class frmCadastro : Form
    {


        MySqlCommand command { get; set; }

        public frmCadastro()
        {
            InitializeComponent();

         }

        private void label1_Click(object sender, EventArgs e)
        {  

         }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            Connection conn = new Connection();
            DataTable dataTable = new DataTable();
            // Leitor para DataGridView
            MySqlDataAdapter dataAdap = new MySqlDataAdapter();
            // Conecta com classe Connection
            var conexao = conn.Conecta();
            string strCommand = "INSERT INTO livro VALUES (DEFAULT,'"+txtnome.Text+"','"+txteditora.Text+"','"+txtdatapublica.Text+"','"+txtcodtema.Text+"','"+txtcodbarra.Text+"','"+txtcodautor.Text+"','1')";


            try
            {
                conexao.Open();
                command = new MySqlCommand(strCommand, conexao);
                dataAdap.SelectCommand = command;
                dataAdap.Fill(dataTable);

               // return dataTable;

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

        private void txtnome_TextChanged(object sender, EventArgs e)
        {

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void txtstatus_TextChanged(object sender, EventArgs e)
        {

        }

        private void txtdatapublica_TextChanged(object sender, EventArgs e)
        {

        }
    }

    }

