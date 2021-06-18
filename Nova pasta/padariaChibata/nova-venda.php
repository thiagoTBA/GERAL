<form class="form-chibata" action="actions/a_venda.php" method="post">
    <h4>Nova Venda<br><small>Digite os dados abaixo:</small></h4>
    <hr>
    <div class="form-group">
        <label for="funcionario">Funcionário</label>
        <input type="hidden" class="form-control" name="funcod" id="funcod" required value="<?php echo $_COOKIE['funcod']; ?>">
        <input type="text" class="form-control" name="funnome" id="funnome" required disabled value="<?php echo $_COOKIE['nome']; ?>">
    </div>
    <div class="form-group">
        <label for="cliente">Cliente</label>
        <select class="form-control" name="clicod">
        <?php
        foreach(DBRead('cliente', 'ORDER BY clinome') as $clientes){
            $clicod     = $clientes['clicod'];
            $clinome    = $clientes['clinome'];
            if($clinome=="Cliente Final"){
                echo "<option value='$clicod' selected>$clinome</option>";
            }else{
                echo "<option value='$clicod'>$clinome</option>";
            }
        }
        ?>
        </select>
    </div>
    <div class="form-group">
        <label for="produto">Lista de Produtos</label>
        <table class='table table-striped table-bordered table-hover table-condensed'>
            <thead>
                <tr>
                    <th>Nome</th>
                    <th>Quantidade</th>
                    <th>Estoque</th>
                    <th>Preco</th>
                </tr>
            </thead>
            <tbody>
            <?php
            $cont=0;
            foreach(DBExecute('SELECT *,f_formataValor(propreco) as preco FROM produto') as $produto){
            ?>
            <tr>
                    <td><label class="text-info"><?php echo $produto['pronome'] ?></label></td>
                    <input type="hidden" name="procod<?php echo $cont; ?>" value="<?php echo $produto['procod']?>">
                    <td>
                    <input name="proqtde<?php echo $cont; ?>" type="number" class="input-sm" style="height:inherit; font-size:inherit; width:40px" placeholder="0" max="<?php echo $produto['prosaldo'] ?>" min="0" id="proqtde<?php echo $cont; ?>" data="<?php echo $produto['propreco']; ?>" value="0">
                    </td>
                    <td><?php echo $produto['prosaldo']?></td>
                    <td>
                        <label class="text-success"><?php echo $produto['preco'] ?></label>
                        <input type="hidden" value="<?php echo $produto['propreco']; ?>" name="propreco<?php echo $cont; ?>">
                    </td>
            </tr>
            <?php
            $cont++;}
echo "<input type='hidden' value='$cont' name='forprodutos'>";
            ?>
            </tbody>
        </table>
    </div>
    <div class="form-group">
        <table class='table table-striped table-bordered table-hover table-condensed'>
            <tbody>
                <th colspan="2">Total</th>
                <th><span class="pull-right text-warning">R$ <span id="total">0.00</span></span></th>
            </tbody>
        </table>
    </div>
    <div class="form-group pull-right">
        <a class="btn btn-danger hoverable" href="<?php echo "?do=produtos" ?>">Cancelar</a>
        <button class="btn btn-success hoverable">Efetivar</button>
    </div>
</form>
