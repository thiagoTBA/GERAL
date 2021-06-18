using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca.DAO
{
    class GeradorCodigo
    {
        private Guid guid;

        /// <summary>
        /// Cria/Gera GUID
        /// </summary>
        public void CriaGuid()
        {
             this.guid = new Guid();             
        }

        /// <summary>
        /// Chama função CriaGuid(), recebe e converte para string o GUID
        /// </summary>
        /// <returns>GUID</returns>
        public string GeraGuid()
        {
            CriaGuid();
            string guidStr = Convert.ToString(this.guid);
            return guidStr;
        }
    }
}
