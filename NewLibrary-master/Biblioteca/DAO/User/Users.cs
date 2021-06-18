using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Biblioteca.DAO.User;

namespace Biblioteca.DAO.User
{
    class Users
    {
        public Funcionario _funcionario = new Funcionario();
        public Normal _normal = new Normal();
        public DateTime normalDataCadastro { get; set; }
        public int userCod { get; set; }
    }
}
