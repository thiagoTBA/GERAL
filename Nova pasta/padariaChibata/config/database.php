<?php
//Criar Cookie com base no cargo do funcionário
function CookieCreate($nome, $conteudo){
    setcookie($nome, $conteudo, null, "/", null);
}

//Deletar o Cookie
function CookieDel($nome){
    setcookie($nome, "", time()-1, "/", null);
    header("Location: login.php");
}

//Ler registros
function DBRead($table, $params=null, $fields = '*'){
    $params = ($params) ? " $params" : null;
    $query  = "SELECT $fields FROM $table$params";
    $result = DBExecute($query);
    
    if(!mysqli_num_rows($result)){
        return false;
    }else {
        while($res = mysqli_fetch_assoc($result)){
            $data[] = $res;
        }
        return $data;
    }
}

// Executa Querys
function DBExecute($query){
    $link = DBConnect();
    $result = @mysqli_query($link, $query) or die(mysqli_error($link));
    //DBClose($link);
    return $result;
}