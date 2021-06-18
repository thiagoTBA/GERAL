<!--<div class="table-responsive">remover o condensed-->
<table class='table table-striped table-bordered table-hover table-condensed'>
    <thead>
        <tr>
            <th>#</th>
            <th>Nome</th>
            <th>CPF</th>
            <th>Salário</th>
            <th>Login</th>
            <th>Cargo</th>
            <th>Demissão</th>
            <th colspan="2">Editar</th>
        </tr>
    </thead>
    <tbody>
        <?php
        if(DBRead('funcionario') == false){
            echo "<div class='alert alert-warning' role='alert'>";
            echo "<span class='glyphicon glyphicon-warning-sign' aria-hidden='true'></span>";
            echo "<span class='sr-only'>Alerta:</span>";
            echo " "."Nenhum funcionário cadastrado!";
            echo "</div>";
        }else{
        //Pegando o salário formatado direto do banco
        foreach(DBExecute("SELECT *, f_formataValor(funsalario) as 'salario' FROM funcionario") as $lista){
        ?>
        <tr>
            <th scope="row"><?php echo $lista['funcod'] ?></th>
            <td><?php echo $lista['funnome'] ?></td>
            <td><?php echo $lista['funcpf'] ?></td>
            <td><?php echo $lista['salario'] ?></td>
            <td><?php echo $lista['funlogin'] ?></td>
            <td><?php echo $lista['funcargo'] ?></td>
            <td><?php echo $lista['fundtdemissao'] ?></td>
            <td class="text-center">
                <a href="<?php echo "?do=novo-funcionario&edit=".$lista['funcod']?>" data-balloon="Editar" data-balloon-pos="left"><i class="fa fa-edit fa-fw"></i></a>&nbsp;
                <a href="<?php echo "?do=novo-funcionario&del=".$lista['funcod']?>" data-balloon="Deletar" data-balloon-pos="up"><i class="fa fa-trash-o fa-fw"></i></a>
            </td>
        </tr>
        <?php } //end foreach
        } //end if?>
    </tbody>
</table>
<!--</div>-->