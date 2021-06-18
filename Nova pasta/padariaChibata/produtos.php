<!--<div class="table-responsive">remover o condensed-->
<table class='table table-striped table-bordered table-hover table-condensed'>
    <thead>
        <tr>
            <th>#</th>
            <th>Nome</th>
            <th>Custo</th>
            <th>Preço</th>
            <th>Saldo</th>
            <th colspan="2">Editar</th>
        </tr>
    </thead>
    <tbody>
        <?php
        if(DBRead('produto') == false){
            echo "<div class='alert alert-warning' role='alert'>";
            echo "<span class='glyphicon glyphicon-warning-sign' aria-hidden='true'></span>";
            echo "<span class='sr-only'>Alerta:</span>";
            echo " "."Nenhum produto cadastrado!";
            echo "</div>";
        }else{
        // Pegando valores formatados direto do banco
        foreach(DBExecute("SELECT *,f_formataValor(propreco) as preco,f_formataValor(procusto) as custo FROM produto") as $lista){
        ?>
        <tr>
            <th scope="row"><?php echo $lista['procod'] ?></th>
            <td><?php echo $lista['pronome'] ?></td>
            <td><?php echo $lista['custo'] ?></td>
            <td><?php echo $lista['preco'] ?></td>
            <td><?php echo $lista['prosaldo'] ?></td>
            <td class="text-center">
                <a href="<?php echo "?do=novo-produto&edit=".$lista['procod']?>" data-balloon="Editar" data-balloon-pos="left"><i class="fa fa-edit fa-fw"></i></a>&nbsp;
                <a href="<?php echo "?do=novo-produto&del=".$lista['procod']?>" data-balloon="Deletar" data-balloon-pos="up"><i class="fa fa-trash-o fa-fw"></i></a>
            </td>
        </tr>
        <?php } //end foreach
        } //end if?>
    </tbody>
</table>
<!--</div>-->