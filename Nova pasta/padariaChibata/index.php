<?php
session_start();
require "config/config.php";
require "config/conexao.php";
require "config/database.php";
if(isset($_COOKIE['nome'])){
?>
<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="UTF-8">
    <!--Let browser know website is optimized for mobile-->
    <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
    <!--BOOTSTRAP CSS-->
    <link rel="stylesheet" href='css/bootstrap.min.css'>
    <!--MY CUSTOM CSS-->
    <link rel="stylesheet" href='css/style.css'>
    <!--Font Icons -->
    <link rel="stylesheet" href="font-awesome/css/font-awesome.css">
	<title>Padaria Chibata</title>
</head>
<body>
<nav class="navbar navbar-default">
  <div class="container" style="background:none">
    <!-- Brand and toggle get grouped for better mobile display -->
    <div class="navbar-header">
      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1" aria-expanded="false">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
      <a class="navbar-brand" href="index.php">Padaria Chibata</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav">
        <li class="dropdown">
          <a href="#" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false">
              Clientes <span class="caret"></span>
          </a>
          <ul class="dropdown-menu">
            <li><a href="?do=novo-cliente">Cadastrar Cliente</a></li>
            <li><a href="?do=clientes">Listar Clientes</a></li>
          </ul>
        </li>
          <li class="dropdown">
          <a href="#" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false">
              Funcionários <span class="caret"></span>
          </a>
          <ul class="dropdown-menu">
            <li><a href="?do=novo-funcionario">Cadastrar Funcionário</a></li>
            <li><a href="?do=funcionarios">Listar Funcionários</a></li>
          </ul>
        </li>
          <li class="dropdown">
          <a href="#" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false">
              Produtos <span class="caret"></span>
          </a>
          <ul class="dropdown-menu">
            <li><a href="?do=novo-produto">Cadastrar Produto</a></li>
            <li><a href="?do=produtos">Listar Produtos</a></li>
          </ul>
        </li>
          <li class="dropdown">
          <a href="#" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false">
              Vendas <span class="caret"></span>
          </a>
          <ul class="dropdown-menu">
            <li><a href="?do=nova-venda">Nova Venda</a></li>
            <li><a href="?do=vendas">Listar Vendas</a></li>
          </ul>
        </li>
      </ul>
        <ul class="nav navbar-nav navbar-right">
            <li><a href="?do=sair" alt="Sair" title="Sair" data-balloon="Sair" data-balloon-pos="down"><span class='glyphicon glyphicon-off' aria-hidden='true'></span></a></li>
        </ul>
    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</nav>
    <div class="container">
        <div class="row">
            <div class="col-md-12 col-sm-12">
                <?php
                    if(isset($_GET['do'])){
                        $do=$_GET['do'];
                        if($do=="sair"){
                            CookieDel("nome");
                            CookieDel("cargo");
                            CookieDel("funcod");
                        }else{
                            include_once($do . ".php");
                        }
                    }else{
                        echo 'Welcome, '.$_COOKIE['nome'].' ('.$_COOKIE['cargo'].').';
                    }
                ?>
            </div>
            <div class="col-md-12 col-sm-12">
            <?php include "util/msgs.php" ?>
            </div>
        </div>
    </div>
    <script type="text/javascript" src="js/jquery.min.js"></script>
    <script type="text/javascript" src="js/bootstrap.min.js"></script>
    <script type="text/javascript" src="js/script.js"></script>
</body>
</html>
<?php
}else{
    header('Location: login.php');
}
?>