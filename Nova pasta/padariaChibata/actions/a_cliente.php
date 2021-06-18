<?php
session_start();
require "../config/config.php";
require "../config/conexao.php";
require "../config/database.php";

//Função PHP com Procedure PLSQL para atualizar cliente
//Se tiver cod definido, significa que vai atualizar um cliente
if(isset($_POST['cod'])){
    $nome   = $_POST['nome'];
    $cpf    = $_POST['cpf'];
    $fone   = $_POST['fone'];
    $sexo   = $_POST['sexo'];
    $email  = $_POST['email'];
    $bairro = $_POST['bairro'];
    $cod    = $_POST['cod'];
    $retorno = DBExecute("CALL sp_updateCliente('$nome', $cpf, $fone, '$sexo', '$email', $bairro, $cod)");
    if(is_object($retorno)){
        $_SESSION['erro']   = true;
        $_SESSION['msg']    = "Opa! Tem alguma coisa errada aí!";
    }else{
        $_SESSION['erro']   = false;
        $_SESSION['msg']    = "Sucesso!";
    }
    header("Location: ../?do=clientes&ok");
}
//Função PHP com Procedure PLSQL pra add cliente
if(isset($_POST['nome']) && !isset($_POST['cod'])){
    $nome   = $_POST['nome'];
    $cpf    = $_POST['cpf'];
    $fone   = $_POST['fone'];
    $sexo   = $_POST['sexo'];
    $email  = $_POST['email'];
    $bairro = $_POST['bairro'];
    $retorno = DBExecute("CALL sp_addCliente('$nome', $cpf, $fone, '$sexo', '$email', $bairro)");
    if(is_object($retorno)){
        $_SESSION['erro']   = true;
        $_SESSION['msg']    = "Opa! Tem alguma coisa errada aí!";
    }else{
        $_SESSION['erro']   = false;
        $_SESSION['msg']    = "Sucesso!";
    }
    header("Location: ../?do=clientes");
}