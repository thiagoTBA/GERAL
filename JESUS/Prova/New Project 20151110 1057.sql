-- MySQL Administrator dump 1.4
--
-- ------------------------------------------------------
-- Server version	5.5.28


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;


--
-- Create schema cliente
--

CREATE DATABASE IF NOT EXISTS cliente;
USE cliente;

--
-- Definition of table `bairro`
--

DROP TABLE IF EXISTS `bairro`;
CREATE TABLE `bairro` (
  `baicod` int(11) NOT NULL AUTO_INCREMENT,
  `bainome` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`baicod`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `bairro`
--

/*!40000 ALTER TABLE `bairro` DISABLE KEYS */;
INSERT INTO `bairro` (`baicod`,`bainome`) VALUES 
 (1,'Cidade Nova'),
 (2,'Distrito'),
 (3,'Flores'),
 (4,'Centro'),
 (5,'Japiim');
/*!40000 ALTER TABLE `bairro` ENABLE KEYS */;


--
-- Definition of table `cliente`
--

DROP TABLE IF EXISTS `cliente`;
CREATE TABLE `cliente` (
  `clicod` int(11) NOT NULL AUTO_INCREMENT,
  `clinome` varchar(100) DEFAULT NULL,
  `clirg` int(11) DEFAULT NULL,
  PRIMARY KEY (`clicod`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `cliente`
--

/*!40000 ALTER TABLE `cliente` DISABLE KEYS */;
INSERT INTO `cliente` (`clicod`,`clinome`,`clirg`) VALUES 
 (1,'Michelle',123),
 (2,'Ana',1423),
 (3,'Daniel',523);
/*!40000 ALTER TABLE `cliente` ENABLE KEYS */;


--
-- Definition of table `dependentes`
--

DROP TABLE IF EXISTS `dependentes`;
CREATE TABLE `dependentes` (
  `depcod` int(11) NOT NULL AUTO_INCREMENT,
  `depnome` varchar(100) DEFAULT NULL,
  `depcpf` int(11) DEFAULT NULL,
  `deprg` int(11) DEFAULT NULL,
  `depfone` varchar(20) DEFAULT NULL,
  `datanasc` date DEFAULT NULL,
  `datainclusao` datetime DEFAULT NULL,
  `depsexo` varchar(5) DEFAULT NULL,
  `depclicod` int(11) NOT NULL,
  PRIMARY KEY (`depcod`),
  KEY `depclicod` (`depclicod`),
  CONSTRAINT `dependentes_ibfk_1` FOREIGN KEY (`depclicod`) REFERENCES `cliente` (`clicod`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `dependentes`
--

/*!40000 ALTER TABLE `dependentes` DISABLE KEYS */;
INSERT INTO `dependentes` (`depcod`,`depnome`,`depcpf`,`deprg`,`depfone`,`datanasc`,`datainclusao`,`depsexo`,`depclicod`) VALUES 
 (1,'Kiara',1235,54,'3215-9654','2014-03-12','2014-03-15 08:00:00','F',1);
/*!40000 ALTER TABLE `dependentes` ENABLE KEYS */;


--
-- Definition of table `endereco`
--

DROP TABLE IF EXISTS `endereco`;
CREATE TABLE `endereco` (
  `edcod` int(11) NOT NULL AUTO_INCREMENT,
  `edrua` varchar(50) DEFAULT NULL,
  `ednumero` int(11) DEFAULT NULL,
  `edbaicod` int(11) NOT NULL,
  `eddepcod` int(11) NOT NULL,
  PRIMARY KEY (`edcod`),
  KEY `edbaicod` (`edbaicod`),
  KEY `eddepcod` (`eddepcod`),
  CONSTRAINT `endereco_ibfk_1` FOREIGN KEY (`edbaicod`) REFERENCES `bairro` (`baicod`),
  CONSTRAINT `endereco_ibfk_2` FOREIGN KEY (`eddepcod`) REFERENCES `dependentes` (`depcod`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `endereco`
--

/*!40000 ALTER TABLE `endereco` DISABLE KEYS */;
INSERT INTO `endereco` (`edcod`,`edrua`,`ednumero`,`edbaicod`,`eddepcod`) VALUES 
 (1,'Rua K',2,1,1);
/*!40000 ALTER TABLE `endereco` ENABLE KEYS */;




/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
