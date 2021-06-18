﻿using System;
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
    public partial class frmCadastrarTema : Form
    {
        MySqlCommand command { get; set; }
        public frmCadastrarTema()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void btncadtema_Click(object sender, EventArgs e)
        {
            Connection conn = new Connection();
            DataTable dataTable = new DataTable();
            // Leitor para DataGridView
            MySqlDataAdapter dataAdap = new MySqlDataAdapter();
            // Conecta com classe Connection
            var conexao = conn.Conecta();
            string strCommand = "INSERT INTO tema values (DEFAULT,'" + txtcadtema.Text + "')";


            try
            {
                conexao.Open();
                command = new MySqlCommand(strCommand, conexao);
                dataAdap.SelectCommand = command;
                dataAdap.Fill(dataTable);

                // return dataTable;
                MessageBox.Show("DADOS CADASTRADOS");
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
