<?php
session_start();
require "../config/config.php";
require "../config/conexao.php";
require "../config/database.php";
$link = DBConnect();
$login = $_POST['login'];
$senha = $_POST['senha'];

$sql = "SELECT * FROM FUNCIONARIO WHERE FUNLOGIN='$login' AND FUNSENHA='$senha'";
$query = DBExecute($sql);
$result = mysqli_fetch_assoc($query);

if($result){
    $_SESSION['erro']   = false;
    $_SESSION['msg']    = "Logado com sucesso!";
    CookieCreate("cargo", $result['funcargo']);
    CookieCreate("nome", $result['funnome']);
    CookieCreate("funcod", $result['funcod']);
    header("Location: ../index.php");
}else {
    $_SESSION['erro']   = true;
    $_SESSION['msg']    = "Login ou Senha incorretos";
    header("Location: " . $_SERVER['HTTP_REFERER']);
}