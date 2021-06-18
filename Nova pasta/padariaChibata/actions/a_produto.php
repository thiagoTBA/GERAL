<?php
session_start();
require "../config/config.php";
require "../config/conexao.php";
require "../config/database.php";

//Função PHP com Procedure PLSQL para atualizar produto
//Se tiver cod definido, significa que vai atualizar um produto
if(isset($_POST['cod'])){
    $cod    = $_POST['cod'];
    $nome   = $_POST['nome'];
    $custo  = $_POST['custo'];
    $preco   = $_POST['preco'];
    $saldo   = $_POST['saldo'];
    $retorno = DBExecute("CALL sp_updateProduto('$nome', $custo, $preco, $saldo, $cod)");
    if(is_object($retorno)){
        $_SESSION['erro']   = true;
        $_SESSION['msg']    = "Opa! Tem alguma coisa errada aí!";
    }else{
        $_SESSION['erro']   = false;
        $_SESSION['msg']    = "Sucesso!";
    }
    header("Location: ../?do=produtos&ok");
}
//Função PHP com Procedure PLSQL pra add produto
if(isset($_POST['nome']) && !isset($_POST['cod'])){
    $nome   = $_POST['nome'];
    $custo  = $_POST['custo'];
    $preco   = $_POST['preco'];
    $saldo   = $_POST['saldo'];
    $retorno = DBExecute("CALL sp_addProduto('$nome', $custo, $preco, $saldo)");
    if(is_object($retorno)){
        $_SESSION['erro']   = true;
        $_SESSION['msg']    = "Opa! Tem alguma coisa errada aí!";
    }else{
        $_SESSION['erro']   = false;
        $_SESSION['msg']    = "Sucesso!";
    }
    header("Location: ../?do=produtos");
}
