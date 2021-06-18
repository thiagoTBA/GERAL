-- MySQL Administrator dump 1.4
--
-- ------------------------------------------------------
-- Server version	5.0.45-community-nt


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;


--
-- Create schema livraria
--

CREATE DATABASE IF NOT EXISTS livraria;
USE livraria;

--
-- Definition of table `aluguel`
--

DROP TABLE IF EXISTS `aluguel`;
CREATE TABLE `aluguel` (
  `alucod` int(10) unsigned NOT NULL auto_increment,
  `aluclicod` int(10) unsigned NOT NULL,
  `alulivrocod` int(10) unsigned NOT NULL,
  `data` datetime NOT NULL,
  PRIMARY KEY  (`alucod`),
  KEY `FK_aluguel_1` (`aluclicod`),
  KEY `FK_aluguel_2` (`alulivrocod`),
  CONSTRAINT `FK_aluguel_1` FOREIGN KEY (`aluclicod`) REFERENCES `cliente` (`clicod`),
  CONSTRAINT `FK_aluguel_2` FOREIGN KEY (`alulivrocod`) REFERENCES `livros` (`livrocod`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `aluguel`
--

/*!40000 ALTER TABLE `aluguel` DISABLE KEYS */;
INSERT INTO `aluguel` (`alucod`,`aluclicod`,`alulivrocod`,`data`) VALUES 
 (1,1,1,'2016-05-12 16:30:49'),
 (2,3,1,'2016-05-12 16:33:14'),
 (3,4,1,'2016-05-12 16:33:18');
/*!40000 ALTER TABLE `aluguel` ENABLE KEYS */;


--
-- Definition of table `autores`
--

DROP TABLE IF EXISTS `autores`;
CREATE TABLE `autores` (
  `autocod` int(10) unsigned NOT NULL auto_increment,
  `autonome` varchar(45) NOT NULL,
  PRIMARY KEY  (`autocod`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `autores`
--

/*!40000 ALTER TABLE `autores` DISABLE KEYS */;
INSERT INTO `autores` (`autocod`,`autonome`) VALUES 
 (1,'THIAGO');
/*!40000 ALTER TABLE `autores` ENABLE KEYS */;


--
-- Definition of table `cliente`
--

DROP TABLE IF EXISTS `cliente`;
CREATE TABLE `cliente` (
  `clicod` int(10) unsigned NOT NULL auto_increment,
  `clinome` varchar(45) NOT NULL,
  `clinasc` date NOT NULL,
  `clirg` int(10) unsigned NOT NULL,
  `clicpf` int(10) unsigned NOT NULL,
  PRIMARY KEY  (`clicod`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `cliente`
--

/*!40000 ALTER TABLE `cliente` DISABLE KEYS */;
INSERT INTO `cliente` (`clicod`,`clinome`,`clinasc`,`clirg`,`clicpf`) VALUES 
 (1,'jojo','2016-05-09',1111,2222),
 (2,'BELAZ','2016-05-02',12312,123123),
 (3,'ACHANDO O PAZ','2016-05-02',33333,3333),
 (4,'LUCAS NOOB','2016-05-02',6576543,3223452);
/*!40000 ALTER TABLE `cliente` ENABLE KEYS */;


--
-- Definition of table `livros`
--

DROP TABLE IF EXISTS `livros`;
CREATE TABLE `livros` (
  `livrocod` int(10) unsigned NOT NULL auto_increment,
  `livrotitu` varchar(45) NOT NULL,
  `livroautocod` int(10) unsigned NOT NULL,
  PRIMARY KEY  (`livrocod`),
  KEY `FK_livros_1` (`livroautocod`),
  CONSTRAINT `FK_livros_1` FOREIGN KEY (`livroautocod`) REFERENCES `autores` (`autocod`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `livros`
--

/*!40000 ALTER TABLE `livros` DISABLE KEYS */;
INSERT INTO `livros` (`livrocod`,`livrotitu`,`livroautocod`) VALUES 
 (1,'dqsafjhkdasjbv',1);
/*!40000 ALTER TABLE `livros` ENABLE KEYS */;




/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
