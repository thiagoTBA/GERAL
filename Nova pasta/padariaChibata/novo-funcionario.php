<?php
if(isset($_GET['edit'])){
    $id = $_GET['edit'];
    foreach(DBRead('funcionario', "WHERE funcod='$id'") as $lista){
    }
}
if(isset($_GET['del'])){
    $id = $_GET['del'];
    DBExecute("CALL sp_deleteFuncionario('$id');");
    $_SESSION['erro']   = false;
    $_SESSION['msg']    = "Deletado com sucesso!";
    header("Location: ?do=funcionarios");
}
?>
<form class="form-chibata" action="actions/a_funcionario.php" method="post">
    <h4>Cadastro de novo funcionário<br><small>Digite os dados abaixo:</small></h4>
    <hr>
    <div class="form-group">
        <label for="nome">Nome</label>
        <input type="text" class="form-control" name="nome" id="nome" placeholder="Digite o nome" required value="<?php if(isset($lista)){echo $lista['funnome'];}?>">
    </div>
    <div class="form-group">
        <label for="cpf">CPF</label>
        <input type="text" class="form-control" name="cpf" id="cpf" placeholder="Somente números" required value="<?php if(isset($lista)){echo $lista['funcpf'];}?>">
    </div>
    <div class="form-group">
        <label for="cargo">Cargo</label>
        <?php
            if(isset($lista) && $lista['funcargo']=='GERENTE'){
                echo "<select class='form-control' name='cargo' id='cargo' required disabled>";
                echo "<option value='GERENTE'>Gerente</option>";
                echo "</select>";
            }else{
        ?>
        <select class="form-control" name="cargo" id="cargo" required>
            <?php if(isset($lista) && $lista['funcargo']=='PADEIRO'){
                echo "<option value='PADEIRO' selected>Padeiro</option>";
                echo "<option value='VENDEDOR'>Vendedor</option>";
            }else if(isset($lista) && $lista['funcargo']=='VENDEDOR'){
                echo "<option value='PADEIRO'>Padeiro</option>";
                echo "<option value='VENDEDOR' selected>Vendedor</option>";
            }else if(isset($lista) && $lista['funcargo']=='GERENTE'){
            echo "<option value='GERENTE'>Gerente</option>";
            echo "<option value='PADEIRO'>Padeiro</option>";
            echo "<option value='VENDEDOR'>Vendedor</option>";
            }else{
            echo "<option value='' selected disabled>Clique e selecione um cargo</option>";
            echo "<option value='PADEIRO'>Padeiro</option>";
            echo "<option value='VENDEDOR'>Vendedor</option>";
            }?>
        </select>
        <?php } ?>
    </div>
    <div class="form-group">
        <label for="salario">Salário</label>
        <input type="text" class="form-control" name="salario" id="salario" placeholder="Digite o salário" required value="<?php if(isset($lista)){echo $lista['funsalario'];}?>">
    </div>
    <div class="form-group">
        <label for="login">Login</label>
        <input type="text" class="form-control" name="login" id="login" placeholder="Digite o login" required value="<?php if(isset($lista)){echo $lista['funlogin'];}?>">
    </div>
    <div class="form-group">
        <label for="senha">Senha</label>
        <?php if(isset($lista)){
        echo "<input type='text' class='form-control' name='senha' id='senha' required value='".$lista['funsenha']."'>";
        }else{
        echo "<input type='password' class='form-control' name='senha' id='senha' placeholder='Digite a senha' required>";
        }?>
    </div>
    <?php if(isset($lista)){
    $demitido = (!$lista['fundtdemissao']==null) ? 'checked' : null;
    $naodemitido = ($lista['fundtdemissao']==null) ? 'checked' : null;
    ?>
    <div class="form-group">
        <label>Demitir funcionário?</label>
        <div class="radio">
            <label class="radio-inline">
            <input type="radio" name="demitido" value="1" <?php echo $demitido ?>>
                Sim
            </label>
             <label class="radio-inline">
            <input type="radio" name="demitido" value="0" <?php echo $naodemitido ?>>
                Não
            </label>
        </div>
    </div>
    <div class="form-group">
        <input hidden type="text" name="cod" value="<?php echo $lista['funcod'];?>">
    </div>
    <?php } ?>
    <hr>
    <div class="form-group">
        <a class="btn btn-danger hoverable col-md-5" href="<?php echo "?do=funcionarios" ?>">Cancelar</a>
        <button class="btn btn-success hoverable col-md-5 col-md-offset-2">Cadastrar</button>
    </div>
</form>