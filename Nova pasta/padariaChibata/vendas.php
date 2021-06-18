<?php
//foreach(DBRead('venda', 'JOIN cliente ON venclicod=clicod JOIN funcionario ON venfuncod=funcod') as $line){
//    echo $line['vencod'].' | F:'.$line['funnome'].' C:'.$line['clinome'].'<br>';
//}
?>
<!--<div class="table-responsive">remover o condensed-->
<table class='table table-striped table-bordered table-hover table-condensed'>
    <thead>
        <tr>
            <th>#</th>
            <th>Funcionário</th>
            <th>Cliente</th>
            <th>Produtos</th>
            <th>Valor</th>
            <th colspan="2">Editar</th>
        </tr>
    </thead>
    <tbody>
        <?php
        if(DBRead('venda') == false){
            echo "<div class='alert alert-warning' role='alert'>";
            echo "<span class='glyphicon glyphicon-warning-sign' aria-hidden='true'></span>";
            echo "<span class='sr-only'>Alerta:</span>";
            echo " "."Nenhuma venda realizada!";
            echo "</div>";
        }else{
        // Pegando valores formatados direto do banco
        foreach(DBRead('venda', 'JOIN cliente ON venclicod=clicod JOIN funcionario ON venfuncod=funcod GROUP BY VENCOD') as $lista){
        ?>
        <tr>
            <th scope="row"><?php echo $lista['vencod'] ?></th>
            <td><?php echo $lista['funnome'] ?></td>
            <td><?php echo $lista['clinome'] ?></td>
            <?php echo $vencod = $lista['vencod'] ?>
            <td><?php
            // Pegar todos os produtos
            foreach(DBRead("produto","SELECT * FROM PRODUTO JOIN ITEMVENDA ON ITVPROCOD=PROCOD GROUP BY ITVVENCOD") as $line){
                echo $line['pronome'].'<br>';
            }
            ?></td>
            <td><?php echo $lista['vendata'] ?></td>
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