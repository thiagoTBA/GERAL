using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Biblioteca.DAO;
using Biblioteca.DAO.Acervo;


namespace Biblioteca.DAO.Acervo
{
    class Livro
    {
        public string livroCod { get; set; }
        public string livroNome { get; set; }
        public DateTime livroDataPublicacao { get; set; }
        public DateTime livroLocalPublicacao { get; set; }
        public int livroEditora { get; set; }
        public int livroCodBarra { get; set; }
    }
}
