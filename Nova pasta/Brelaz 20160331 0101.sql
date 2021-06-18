-- MySQL Administrator dump 1.4
--
-- ------------------------------------------------------
-- Server version	5.5.20


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;


--
-- Create schema bd_padariachibata
--

CREATE DATABASE IF NOT EXISTS bd_padariachibata;
USE bd_padariachibata;

--
-- Definition of table `bairro`
--

DROP TABLE IF EXISTS `bairro`;
CREATE TABLE `bairro` (
  `baicod` int(11) NOT NULL AUTO_INCREMENT,
  `bainome` varchar(30) DEFAULT NULL,
  `baizoncod` int(11) DEFAULT NULL,
  PRIMARY KEY (`baicod`),
  KEY `baizoncod` (`baizoncod`),
  CONSTRAINT `bairro_ibfk_1` FOREIGN KEY (`baizoncod`) REFERENCES `zona` (`zoncod`)
) ENGINE=InnoDB AUTO_INCREMENT=35 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `bairro`
--

/*!40000 ALTER TABLE `bairro` DISABLE KEYS */;
INSERT INTO `bairro` (`baicod`,`bainome`,`baizoncod`) VALUES 
 (1,'Centro',3),
 (2,'Nossa Senhora Aparecida',3),
 (3,'Presidente Vargas',3),
 (4,'Praça 14 de Janeiro',3),
 (5,'Cachoeirinha',3),
 (6,'São Raimundo',4),
 (7,'Glória',4),
 (8,'Santo Antônio',4),
 (9,'Vila da Prata',4),
 (10,'Compensa',4),
 (11,'São Jorge',4),
 (12,'Santo Agostinho',4),
 (13,'Nova Esperanaça',4),
 (14,'Lírio do Vale',4),
 (15,'Planalto',6),
 (16,'Alvorada',6),
 (17,'Rendenção',6),
 (18,'Bairro da Paz',6),
 (19,'Coroado',2),
 (20,'Mauazinho',2),
 (21,'Colônia Antônio Aleixo',2),
 (22,'Puraquequara',2),
 (23,'Novo Israel',1),
 (24,'Colônia Terra Nova',1),
 (25,'Santa Etelvina',1),
 (26,'Monte das Oliveiras',1),
 (27,'Cidade Nova',1),
 (28,'Novo Aleixo',1),
 (29,'Cidade de Deus',1),
 (30,'Nova Cidade',1),
 (31,'Ponta Negra',6),
 (32,'Flores',5),
 (33,'Aleixo',5),
 (34,'Chapada',5);
/*!40000 ALTER TABLE `bairro` ENABLE KEYS */;


--
-- Definition of table `cliente`
--

DROP TABLE IF EXISTS `cliente`;
CREATE TABLE `cliente` (
  `clicod` int(11) NOT NULL AUTO_INCREMENT,
  `clinome` varchar(50) DEFAULT NULL,
  `clicpf` bigint(20) DEFAULT NULL,
  `clifone` int(11) DEFAULT NULL,
  `clisexo` varchar(10) DEFAULT NULL,
  `cliemail` varchar(50) DEFAULT NULL,
  `clibaicod` int(11) DEFAULT NULL,
  PRIMARY KEY (`clicod`),
  KEY `clibaicod` (`clibaicod`),
  CONSTRAINT `cliente_ibfk_1` FOREIGN KEY (`clibaicod`) REFERENCES `bairro` (`baicod`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `cliente`
--

/*!40000 ALTER TABLE `cliente` DISABLE KEYS */;
INSERT INTO `cliente` (`clicod`,`clinome`,`clicpf`,`clifone`,`clisexo`,`cliemail`,`clibaicod`) VALUES 
 (1,'Cliente Final',NULL,NULL,NULL,NULL,1),
 (2,'Leonardo Dicaprio',12234403,93615501,'Masculino','leonardo@dicaprio.com',14),
 (3,'Michael Jordan',992253402,12234403,'Masculino','mj@michaeljordan.com',23),
 (4,'Wesley Safadão',912234403,93615501,'Masculino','ws@ws.com',27);
/*!40000 ALTER TABLE `cliente` ENABLE KEYS */;


--
-- Definition of table `funcionario`
--

DROP TABLE IF EXISTS `funcionario`;
CREATE TABLE `funcionario` (
  `funcod` int(11) NOT NULL AUTO_INCREMENT,
  `funnome` varchar(50) DEFAULT NULL,
  `funcpf` bigint(20) DEFAULT NULL,
  `funsalario` double DEFAULT NULL,
  `funlogin` varchar(50) DEFAULT NULL,
  `funsenha` varchar(20) DEFAULT NULL,
  `funcargo` varchar(20) DEFAULT NULL,
  `fundtdemissao` date DEFAULT NULL,
  PRIMARY KEY (`funcod`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=latin1 ROW_FORMAT=DYNAMIC;

--
-- Dumping data for table `funcionario`
--

/*!40000 ALTER TABLE `funcionario` DISABLE KEYS */;
INSERT INTO `funcionario` (`funcod`,`funnome`,`funcpf`,`funsalario`,`funlogin`,`funsenha`,`funcargo`,`fundtdemissao`) VALUES 
 (1,'Lucas Brelaz',1655522203,12500,'lucasrbrelaz@gmail.com','123','GERENTE',NULL),
 (3,'Luciano Lopes',87612312303,2300,'luciano@gmail.com','123','VENDEDOR',NULL),
 (4,'Thiago Brito',77722394872,3250,'thiagobrito@gmail.com','123','PADEIRO',NULL);
/*!40000 ALTER TABLE `funcionario` ENABLE KEYS */;


--
-- Definition of table `itemvenda`
--

DROP TABLE IF EXISTS `itemvenda`;
CREATE TABLE `itemvenda` (
  `itvvencod` int(11) NOT NULL,
  `itvprocod` int(11) NOT NULL,
  `itvqtde` int(11) NOT NULL,
  PRIMARY KEY (`itvvencod`,`itvprocod`) USING BTREE,
  KEY `itvprocod` (`itvprocod`),
  CONSTRAINT `itemvenda_ibfk_1` FOREIGN KEY (`itvvencod`) REFERENCES `venda` (`vencod`),
  CONSTRAINT `itemvenda_ibfk_2` FOREIGN KEY (`itvprocod`) REFERENCES `produto` (`procod`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 ROW_FORMAT=FIXED;

--
-- Dumping data for table `itemvenda`
--

/*!40000 ALTER TABLE `itemvenda` DISABLE KEYS */;
INSERT INTO `itemvenda` (`itvvencod`,`itvprocod`,`itvqtde`) VALUES 
 (1,1,6),
 (1,3,16),
 (4,3,10),
 (4,4,5),
 (4,6,5),
 (4,8,3),
 (4,9,3);
/*!40000 ALTER TABLE `itemvenda` ENABLE KEYS */;


--
-- Definition of table `produto`
--

DROP TABLE IF EXISTS `produto`;
CREATE TABLE `produto` (
  `procod` int(11) NOT NULL AUTO_INCREMENT,
  `pronome` varchar(50) DEFAULT NULL,
  `procusto` double DEFAULT NULL,
  `propreco` double DEFAULT NULL,
  `prosaldo` int(11) DEFAULT NULL,
  PRIMARY KEY (`procod`)
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `produto`
--

/*!40000 ALTER TABLE `produto` DISABLE KEYS */;
INSERT INTO `produto` (`procod`,`pronome`,`procusto`,`propreco`,`prosaldo`) VALUES 
 (1,'Pão Doce',0.1,0.45,117),
 (2,'Pão de Forma (pacote)',2,6.5,55),
 (3,'Empadinha',0.1,0.5,99),
 (4,'Pão Francês',0.15,0.4,223),
 (5,'Pão Hambúrguer',0.12,0.4,77),
 (6,'Pão de batata',0.2,0.6,111),
 (7,'Bolo Bolado',22,62,7),
 (8,'Pastel Folhado',0.9,3,14),
 (9,'Esfirra de Queijo',0.9,3,22);
/*!40000 ALTER TABLE `produto` ENABLE KEYS */;


--
-- Definition of table `venda`
--

DROP TABLE IF EXISTS `venda`;
CREATE TABLE `venda` (
  `vencod` int(11) NOT NULL AUTO_INCREMENT,
  `vendata` date NOT NULL,
  `venfuncod` int(11) NOT NULL,
  `venclicod` int(11) NOT NULL,
  `ventotal` double NOT NULL,
  PRIMARY KEY (`vencod`),
  KEY `venfuncod` (`venfuncod`),
  KEY `venclicod` (`venclicod`),
  CONSTRAINT `venda_ibfk_1` FOREIGN KEY (`venfuncod`) REFERENCES `funcionario` (`funcod`),
  CONSTRAINT `venda_ibfk_2` FOREIGN KEY (`venclicod`) REFERENCES `cliente` (`clicod`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=latin1 ROW_FORMAT=FIXED;

--
-- Dumping data for table `venda`
--

/*!40000 ALTER TABLE `venda` DISABLE KEYS */;
INSERT INTO `venda` (`vencod`,`vendata`,`venfuncod`,`venclicod`,`ventotal`) VALUES 
 (1,'2016-03-31',1,3,0),
 (2,'2016-03-31',1,1,0),
 (3,'2016-03-31',1,1,0),
 (4,'2016-03-31',1,2,0),
 (5,'2016-03-31',1,4,0),
 (6,'2016-03-31',1,1,0);
/*!40000 ALTER TABLE `venda` ENABLE KEYS */;


--
-- Definition of table `zona`
--

DROP TABLE IF EXISTS `zona`;
CREATE TABLE `zona` (
  `zoncod` int(11) NOT NULL AUTO_INCREMENT,
  `zonnome` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`zoncod`)
) ENGINE=InnoDB AUTO_INCREMENT=14 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `zona`
--

/*!40000 ALTER TABLE `zona` DISABLE KEYS */;
INSERT INTO `zona` (`zoncod`,`zonnome`) VALUES 
 (1,'NORTE'),
 (2,'LESTE'),
 (3,'SUL'),
 (4,'OESTE'),
 (5,'CENTRO-SUL'),
 (6,'CENTRO-OESTE');
/*!40000 ALTER TABLE `zona` ENABLE KEYS */;


--
-- Definition of function `f_formataValor`
--

DROP FUNCTION IF EXISTS `f_formataValor`;

DELIMITER $$

/*!50003 SET @TEMP_SQL_MODE=@@SQL_MODE, SQL_MODE='STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ $$
CREATE DEFINER=`root`@`localhost` FUNCTION `f_formataValor`(valor double) RETURNS varchar(20) CHARSET latin1
BEGIN
RETURN concat('R$ ', truncate(valor, 2));
END $$
/*!50003 SET SESSION SQL_MODE=@TEMP_SQL_MODE */  $$

DELIMITER ;

--
-- Definition of procedure `sp_addCliente`
--

DROP PROCEDURE IF EXISTS `sp_addCliente`;

DELIMITER $$

/*!50003 SET @TEMP_SQL_MODE=@@SQL_MODE, SQL_MODE='STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ $$
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_addCliente`(nome varchar(50), cpf bigint, fone int, sexo varchar(10), email varchar(50), baicod int)
BEGIN
declare existe int default 0;
set existe=(SELECT count(*) FROM CLIENTE WHERE CLICPF=CPF);

IF(existe>=1)THEN
SELECT 'CPF já cadastrado';
ELSE
INSERT INTO CLIENTE VALUES (null, nome, cpf, fone, sexo, email, baicod);
END IF;
END $$
/*!50003 SET SESSION SQL_MODE=@TEMP_SQL_MODE */  $$

DELIMITER ;

--
-- Definition of procedure `sp_addFuncionario`
--

DROP PROCEDURE IF EXISTS `sp_addFuncionario`;

DELIMITER $$

/*!50003 SET @TEMP_SQL_MODE=@@SQL_MODE, SQL_MODE='STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ $$
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_addFuncionario`(nome varchar(50), cpf bigint, salario double, login varchar(50), senha varchar(20), cargo varchar(20), dt date)
BEGIN
declare existe int default 0;
set existe=(SELECT count(*) FROM FUNCIONARIO WHERE funcpf=cpf or funlogin=login);

IF(existe>=1)THEN
SELECT 'CPF já existe';
ELSE
INSERT INTO funcionario VALUES (null, nome, cpf, salario, login, senha, cargo, dt);
END IF;
END $$
/*!50003 SET SESSION SQL_MODE=@TEMP_SQL_MODE */  $$

DELIMITER ;

--
-- Definition of procedure `sp_addProduto`
--

DROP PROCEDURE IF EXISTS `sp_addProduto`;

DELIMITER $$

/*!50003 SET @TEMP_SQL_MODE=@@SQL_MODE, SQL_MODE='STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ $$
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_addProduto`(nome varchar(50), custo double, preco double, saldo int)
BEGIN
declare existe int default 0;
set existe=(SELECT count(*) FROM PRODUTO WHERE pronome=nome);

IF(existe>=1)THEN
SELECT 'Produto já cadastrado';
ELSE
INSERT INTO PRODUTO VALUES (null, nome, custo, preco, saldo);
END IF;
END $$
/*!50003 SET SESSION SQL_MODE=@TEMP_SQL_MODE */  $$

DELIMITER ;

--
-- Definition of procedure `sp_deleteCliente`
--

DROP PROCEDURE IF EXISTS `sp_deleteCliente`;

DELIMITER $$

/*!50003 SET @TEMP_SQL_MODE=@@SQL_MODE, SQL_MODE='STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ $$
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_deleteCliente`(cod int)
BEGIN
DELETE FROM CLIENTE WHERE CLICOD=COD;
END $$
/*!50003 SET SESSION SQL_MODE=@TEMP_SQL_MODE */  $$

DELIMITER ;

--
-- Definition of procedure `sp_deleteFuncionario`
--

DROP PROCEDURE IF EXISTS `sp_deleteFuncionario`;

DELIMITER $$

/*!50003 SET @TEMP_SQL_MODE=@@SQL_MODE, SQL_MODE='STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ $$
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_deleteFuncionario`(cod int)
BEGIN
DELETE FROM FUNCIONARIO WHERE FUNCOD=COD;
END $$
/*!50003 SET SESSION SQL_MODE=@TEMP_SQL_MODE */  $$

DELIMITER ;

--
-- Definition of procedure `sp_deleteProduto`
--

DROP PROCEDURE IF EXISTS `sp_deleteProduto`;

DELIMITER $$

/*!50003 SET @TEMP_SQL_MODE=@@SQL_MODE, SQL_MODE='STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ $$
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_deleteProduto`(cod int)
BEGIN
DELETE FROM PRODUTO WHERE PROCOD=COD;
END $$
/*!50003 SET SESSION SQL_MODE=@TEMP_SQL_MODE */  $$

DELIMITER ;

--
-- Definition of procedure `sp_updateCliente`
--

DROP PROCEDURE IF EXISTS `sp_updateCliente`;

DELIMITER $$

/*!50003 SET @TEMP_SQL_MODE=@@SQL_MODE, SQL_MODE='STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ $$
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_updateCliente`(nome varchar(50), cpf bigint, fone int, sexo varchar(10), email varchar(50), baicod int, cod int)
BEGIN
declare existe int default 0;
set existe=(SELECT count(*) FROM CLIENTE WHERE CLICPF=CPF AND NOT CLICOD=COD);

IF(existe>=1)THEN
SELECT 'CPF já cadastrado!';
ELSE
UPDATE CLIENTE SET clinome=nome, clicpf=cpf, clifone=fone, clisexo=sexo, cliemail=email, clibaicod=baicod WHERE clicod=cod;
END IF;
END $$
/*!50003 SET SESSION SQL_MODE=@TEMP_SQL_MODE */  $$

DELIMITER ;

--
-- Definition of procedure `sp_updateFuncionario`
--

DROP PROCEDURE IF EXISTS `sp_updateFuncionario`;

DELIMITER $$

/*!50003 SET @TEMP_SQL_MODE=@@SQL_MODE, SQL_MODE='STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ $$
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_updateFuncionario`(nome varchar(50), cpf bigint, salario double, login varchar(50), senha varchar(20), cargo varchar(20), dtdemissao date, cod int)
BEGIN
declare existe int default 0;
set existe=(SELECT count(*) FROM funcionario WHERE (funcpf=cpf or funlogin=login) AND NOT funcod=cod);

IF(existe>=1)THEN
SELECT 'CPF já existe';
ELSE
UPDATE funcionario SET funnome=nome, funcpf=cpf, funsalario=salario, funlogin=login, funsenha=senha, funcargo=cargo, fundtdemissao=dtdemissao WHERE funcod=cod;
END IF;
END $$
/*!50003 SET SESSION SQL_MODE=@TEMP_SQL_MODE */  $$

DELIMITER ;

--
-- Definition of procedure `sp_updateProduto`
--

DROP PROCEDURE IF EXISTS `sp_updateProduto`;

DELIMITER $$

/*!50003 SET @TEMP_SQL_MODE=@@SQL_MODE, SQL_MODE='STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ $$
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_updateProduto`(nome varchar(50), custo double, preco double, saldo int, cod int)
BEGIN
declare existe int default 0;
set existe=(SELECT * FROM PRODUTO WHERE PRONOME=NOME);

IF(existe>=1)THEN
SELECT 'Produto já cadastrado';
ELSE
UPDATE PRODUTO SET pronome=nome, procusto=custo, propreco=preco, prosaldo=saldo WHERE procod=cod;
END IF;
END $$
/*!50003 SET SESSION SQL_MODE=@TEMP_SQL_MODE */  $$

DELIMITER ;



/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
