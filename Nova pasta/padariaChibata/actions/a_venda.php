<?php
require "../config/config.php";
require "../config/conexao.php";
require "../config/database.php";

//$link = mysqli_connect('localhost', 'root', '123', 'bd_padariachibata');
//mysqli_query($link, "INSERT INTO ZONA VALUES (NULL, 'TEST_YEAA')");
//printf ('<br>THISSSS: %d',mysqli_insert_id($link));

// Inserir venda
$funcod = $_POST['funcod'];
$clicod = $_POST['clicod'];
$data   = date('Y-m-d H-i-s');
DBExecute("INSERT INTO VENDA VALUES(null, '$data', $funcod, $clicod, 0)");

//Resgatar cod da ultima venda
foreach(DBRead('venda') as $line);
$cod = $line['vencod'];

// Inserir itemvenda
$itcod = array();
$itqtd = array();

for($i = 0; $i<=$_POST['forprodutos']; $i++){
    if(isset($_POST['procod'.$i]) && isset($_POST['proqtde'.$i]) && $_POST['proqtde'.$i]>0){
        $itcod[$i] = $_POST['procod'.$i];
        $itqtd[$i]  = $_POST['proqtde'.$i];
        DBExecute("INSERT INTO ITEMVENDA VALUES($cod, $itcod[$i], $itqtd[$i])");
    }
}
$_SESSION['erro'] = false;
$_SESSION['msg']  = "Compra efetivada com sucesso!";
header("Location: ../?do=vendas");
//echo '<pre>codigo ';
//var_dump($itcod);
//echo 'quantidade ';
//var_dump($itqtd);
//echo '</pre>';