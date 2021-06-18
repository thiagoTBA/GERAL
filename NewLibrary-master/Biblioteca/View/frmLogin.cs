using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Biblioteca.DAO.User;
using Biblioteca.Model;
using Biblioteca.View;

namespace Biblioteca
{
    public partial class FrmLogin : Form
    {
        // Declara obj User
        Users user;
        // Declara obj userModel
        UsersModel userModel;
        // Declara obj Form HOME
        frmHome home;

        public FrmLogin()
        {
            // Cria novo user obj
            user = new Users();
            InitializeComponent();
            // Cria novo userModel obj
            userModel = new UsersModel();
            
        }

        private void btnLogar_Click(object sender, EventArgs e)
        {
            // Verificar tipo de retorno
            int Existe;
            // Verifica se todos os campos foram preenchidos
            if(txtLogin.Text != "" && txtSenha.Text != "") { 
                // Insere valor nos obj
                user._normal.normalNome = txtLogin.Text;
                user._normal.normalSenha = txtSenha.Text;
                // Recebe resultado do model
                Existe = userModel.Login(user);
                // Filtra informação
                switch (Existe)
                {
                    // User encontrado!
                    case 1:
                        home = new frmHome(txtLogin.Text);
                        home.Show();
                        break;
                    // User não encontrado!
                    case 0:
                        MessageBox.Show("Login ou senha incorretos! Tente novamente.");
                        break;
                    // Erro no Banco de Dados
                    case 666:
                        MessageBox.Show("Erro no servidor!");
                        break;
                }
            }
            else
            {
                // Msg caso não estejam preenchidos!
                MessageBox.Show("Preencha todos os campos!");
            }
        }

        private void btncaduserlog_Click(object sender, EventArgs e)
        {
            frmCadastrarUsuario frmCadastrarUsuario = new frmCadastrarUsuario();
            frmCadastrarUsuario.ShowDialog();
        }
    }
}
