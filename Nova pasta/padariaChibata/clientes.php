<!--<div class="table-responsive">remover o condensed-->
<table class='table table-striped table-bordered table-hover table-condensed'>
    <thead>
        <tr>
            <th>#</th>
            <th>Nome</th>
            <th>CPF</th>
            <th>Telefone</th>
            <th>Sexo</th>
            <th>Email</th>
            <th>Bairro</th>
            <th colspan="2">Editar</th>
        </tr>
    </thead>
    <tbody>
        <?php
        if(DBRead('cliente', 'JOIN bairro ON clibaicod=baicod', 'count(*)') == 0){
            echo "<div class='alert alert-warning' role='alert'>";
            echo "<span class='glyphicon glyphicon-warning-sign' aria-hidden='true'></span>";
            echo "<span class='sr-only'>Alerta:</span>";
            echo " "."Nenhum cliente cadastrado!";
            echo "</div>";
        }else{
        foreach(DBRead('cliente', 'JOIN bairro ON clibaicod=baicod') as $lista){
        ?>
        <tr>
            <th scope="row"><?php echo $lista['clicod'] ?></th>
            <td><?php echo $lista['clinome'] ?></td>
            <td><?php echo $lista['clicpf'] ?></td>
            <td><?php echo $lista['clifone'] ?></td>
            <td><?php echo $lista['clisexo'] ?></td>
            <td><?php echo $lista['cliemail'] ?></td>
            <td><?php echo $lista['bainome'] ?></td>
            <td class="text-center">
                <a href="<?php echo "?do=novo-cliente&edit=".$lista['clicod']?>" data-balloon="Editar" data-balloon-pos="left"><i class="fa fa-edit fa-fw"></i></a>
                <a href="<?php echo "?do=novo-cliente&del=".$lista['clicod']?>" data-balloon="Deletar" data-balloon-pos="up"><i class="fa fa-trash-o fa-fw"></i></a>
            </td>
        </tr>
        <?php }//end foreach
        }//end if ?>
    </tbody>
</table>
<!--</div>-->