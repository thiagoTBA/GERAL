using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Biblioteca.DAO.User;
using Biblioteca.DAO.Acervo;

namespace Biblioteca.DAO
{
    class Aluguel
    { 
        public string aluCodigo { get; set; }
        public Funcionario _funcionario = new Funcionario();
        public Normal _normal = new Normal();
        public Livro _livro = new Livro();
        public DateTime aluDataEmprestimo { get; set; }
        public DateTime aluDataDevolucao { get; set; }
    }
}
