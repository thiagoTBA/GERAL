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
-- Create schema aula2309
--

CREATE DATABASE IF NOT EXISTS aula2309;
USE aula2309;

--
-- Definition of table `cliente`
--

DROP TABLE IF EXISTS `cliente`;
CREATE TABLE `cliente` (
  `clicodigo` int(11) NOT NULL AUTO_INCREMENT,
  `clicpf` varchar(14) DEFAULT NULL,
  `cliname` varchar(30) DEFAULT NULL,
  `clirg` varchar(10) DEFAULT NULL,
  `cliend` varchar(30) DEFAULT NULL,
  PRIMARY KEY (`clicodigo`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `cliente`
--

/*!40000 ALTER TABLE `cliente` DISABLE KEYS */;
INSERT INTO `cliente` (`clicodigo`,`clicpf`,`cliname`,`clirg`,`cliend`) VALUES 
 (1,'123456','maria','456321','somehere'),
 (2,'121.323.121-32','Geraldinho','11221123','Somewhere');
/*!40000 ALTER TABLE `cliente` ENABLE KEYS */;


--
-- Definition of table `curso2`
--

DROP TABLE IF EXISTS `curso2`;
CREATE TABLE `curso2` (
  `cunome` varchar(30) NOT NULL,
  `custatus` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `curso2`
--

/*!40000 ALTER TABLE `curso2` DISABLE KEYS */;
/*!40000 ALTER TABLE `curso2` ENABLE KEYS */;




/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
