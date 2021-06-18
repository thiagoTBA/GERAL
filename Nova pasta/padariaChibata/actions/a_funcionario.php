<?php
session_start();
require "../config/config.php";
require "../config/conexao.php";
require "../config/database.php";

//Função PHP com Procedure PLSQL para atualizar funcionário
//Se tiver cod definido, significa que vai atualizar um funcionário
if(isset($_POST['cod'])){
    $cod        = $_POST['cod'];
    $nome       = $_POST['nome'];
    $cpf        = $_POST['cpf'];
    $cargo      = $_POST['cargo'];
    $salario    = $_POST['salario'];
    $login      = $_POST['login'];
    $senha      = $_POST['senha'];
    $demitido   = $_POST['demitido'];
    //Se for demitido, passa a data atual.
    //Se não, passa null.
    if($demitido == 1){
        $demitido = date("Y-m-d H:i:s");
        $retorno = DBExecute("CALL sp_updateFuncionario('$nome', $cpf, $salario, '$login', '$senha', '$cargo', '$demitido', $cod)");
    }else if($demitido == 0) {
        $demitido = null;
        $retorno = DBExecute("CALL sp_updateFuncionario('$nome', $cpf, $salario, '$login', '$senha', '$cargo', NULL, $cod)");
    }
    if(is_object($retorno)){
        $_SESSION['erro']   = true;
        $_SESSION['msg']    = "Opa! Tem alguma coisa errada aí!";
    }else{
        $_SESSION['erro']   = false;
        $_SESSION['msg']    = "Sucesso!";
    }
    header("Location: ../?do=funcionarios&ok");
}
//Função PHP com Procedure PLSQL pra add funcionário
if(isset($_POST['nome']) && !isset($_POST['cod'])){
    $nome       = $_POST['nome'];
    $cpf        = $_POST['cpf'];
    $cargo      = $_POST['cargo'];
    $salario    = $_POST['salario'];
    $login      = $_POST['login'];
    $senha      = $_POST['senha'];
    $demitido   = $_POST['demitido'];
    //Se for demitido, passa a data atual.
    //Se não, passa null.
    if($demitido == 1){
        $demitido = date("Y-m-d H:i:s");
        $retorno = DBExecute("CALL sp_addFuncionario('$nome', $cpf, $salario, '$login', '$senha', '$cargo', '$demitido')");
    }else if($demitido == 0) {
        $demitido = null;
        $retorno = DBExecute("CALL sp_addFuncionario('$nome', $cpf, $salario, '$login', '$senha', '$cargo', null)");
    }
    if(is_object($retorno)){
        $_SESSION['erro']   = true;
        $_SESSION['msg']    = "Opa! Tem alguma coisa errada aí!";
    }else{
        $_SESSION['erro']   = false;
        $_SESSION['msg']    = "Sucesso!";
    }
    header("Location: ../?do=funcionarios");
}