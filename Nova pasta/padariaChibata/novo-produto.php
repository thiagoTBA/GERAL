<?php
if(isset($_GET['edit'])){
    $id = $_GET['edit'];
    foreach(DBRead('produto', "WHERE procod='$id'") as $lista){
    }
}
if(isset($_GET['del'])){
    $id = $_GET['del'];
    DBExecute("CALL sp_deletepRODUTO('$id');");
    $_SESSION['erro']   = false;
    $_SESSION['msg']    = "Deletado com sucesso!";
    header("Location: ?do=produtos");
}
?>
<form class="form-chibata" action="actions/a_produto.php" method="post">
    <h4>Cadastro de novo produto<br><small>Digite os dados abaixo:</small></h4>
    <hr>
    <div class="form-group">
        <label for="nome">Nome</label>
        <input type="text" class="form-control" name="nome" id="nome" placeholder="Digite o nome" required value="<?php if(isset($lista)){echo $lista['pronome'];}?>">
    </div>
    <div class="form-group">
        <label for="custo">Custo</label>
        <input type="text" class="form-control" name="custo" id="custo" placeholder="Somente números" required value="<?php if(isset($lista)){echo $lista['procusto'];}?>">
    </div>
    <div class="form-group">
        <label for="preco">Preço</label>
        <input type="text" class="form-control" name="preco" id="preco" placeholder="Somente números" required value="<?php if(isset($lista)){echo $lista['propreco'];}?>">
    </div>
    <div class="form-group">
        <label for="saldo">Saldo (estoque)</label>
        <input type="number" min="0" class="form-control" name="saldo" id="saldo" placeholder="Digite o saldo em estoque" required value="<?php if(isset($lista)){echo $lista['prosaldo'];}?>">
    </div>
    <?php if(isset($lista)){ ?>
    <div class="form-group">
        <input hidden type="text" name="cod" value="<?php echo $lista['procod']; ?>">
    </div>
    <?php } ?>
    <hr>
    <div class="form-group">
        <a class="btn btn-danger hoverable col-md-5" href="<?php echo "?do=produtos" ?>">Cancelar</a>
        <button class="btn btn-success hoverable col-md-5 col-md-offset-2">Cadastrar</button>
    </div>
</form>