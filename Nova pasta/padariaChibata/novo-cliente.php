<?php
//Se tiver ?do=edit na URL vai trazer os dados do cliente e preencher os campos
if(isset($_GET['edit'])){
    $id = $_GET['edit'];
    foreach(DBRead('cliente', "JOIN bairro ON clibaicod=baicod WHERE clicod='$id'") as $lista){
    }
}
if(isset($_GET['del'])){
    $id = $_GET['del'];
    DBExecute("CALL sp_deleteCliente('$id');");
    $_SESSION['erro']   = false;
    $_SESSION['msg']    = "Deletado com sucesso!";
    header("Location: ?do=clientes");
}
?>
<form class="form-chibata" action="actions/a_cliente.php" method="post">
    <h4>Cadastro de novo cliente<br><small>Digite os dados abaixo:</small></h4>
    <hr>
    <div class="form-group">
        <label for="nome">Nome</label>
        <input type="text" class="form-control" name="nome" id="nome" placeholder="Digite o nome" required value="<?php if(isset($lista)){echo $lista['clinome'];}?>">
    </div>
    <div class="form-group">
        <label for="cpf">CPF</label>
        <input type="text" class="form-control" name="cpf" id="cpf" placeholder="Somente números" required value="<?php if(isset($lista)){echo $lista['clicpf'];}?>">
    </div>
    <div class="form-group">
        <label for="bairro">Bairro</label>
        <select class="form-control" name="bairro" id="bairro" required>
            <?php
            if(isset($lista)){
                $cod = $lista['baicod'];
                $nome = $lista['bainome'];
                echo "<option value='$cod' selected>$nome</option>";
            }
            foreach(DBRead('bairro', 'order by baizoncod') as $bairro){
                $cod    = $bairro['baicod'];
                $nome   = $bairro['bainome'];
                echo "<option value='$cod'>$nome</option>";
            }
            ?>
        </select>
    </div>
    <div class="form-group">
        <label for="fone">Telefone</label>
        <input type="text" class="form-control" name="fone" id="fone" placeholder="Somente números" required value="<?php if(isset($lista)){echo $lista['clifone'];}?>">
    </div>
    <div class="form-group">
        <label for="sexo">Sexo</label>
        <select class="form-control" name="sexo" id="sexo" required>
            <?php if(isset($lista) && $lista['clisexo']=='Masculino'){
                echo "<option value='Masculino' selected>Masculino</option>";
                echo "<option value='Feminino'>Feminino</option>";
            }else if(isset($lista) && $lista['clisexo']=='Feminino'){
                echo "<option value='Masculino'>Masculino</option>";
                echo "<option value='Feminino' selected>Feminino</option>";
            }else{
            echo "<option value='' selected disabled>Clique e selecione o sexo</option>";
            echo "<option value='Masculino'>Masculino</option>";
            echo "<option value='Feminino'>Feminino</option>";
            }?>
        </select>
    </div>
    <div class="form-group">
        <label for="email">E-mail</label>
        <input type="email" class="form-control" name="email" id="email" placeholder="Digite o email" required value="<?php if(isset($lista)){echo $lista['cliemail'];}?>">
    </div>
    <?php if(isset($lista)){ ?>
    <div class="form-group">
        <input hidden type="text" name="cod" value="<?php echo $lista['clicod'];?>">
    </div>
    <?php } ?>
    <hr>
    <div class="form-group">
        <a class="btn btn-danger hoverable col-md-5" href="<?php echo "?do=clientes" ?>">Cancelar</a>
        <button class="btn btn-success hoverable col-md-5 col-md-offset-2">Cadastrar</button>
    </div>
</form>