<?php
session_start();
if(!isset($_COOKIE['nome'])){
?>
<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="UTF-8">
    <!--Let browser know website is optimized for mobile-->
    <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
    <!--BOOTSTRAP CSS-->
    <link rel="stylesheet" href='css/bootstrap.min.css'>
    <!--MY CUSTOM CSS-->
    <link rel="stylesheet" href='css/style.css'>
	<title>Padaria Chibata</title>
</head>
<body class="paleta-bg2">
    <div class="container">
        <div class="row">
            <div class="col-md-4 col-md-offset-4">
                <form class="card-panel hoverable" action="actions/a_login.php" method="post">
                    <h4 class="text-center">Login Padaria Chibata</h4>
                    <hr>
                    <div class="form-group">
                        <label for="login">Login</label>
                        <input type="text" class="form-control" name="login" id="login">
                    </div>
                    <div class="form-group">
                        <label for="senha">Senha</label>
                        <input type="password" class="form-control" name="senha" id="senha">
                    </div>
                    <div class="form-group">
                        <button class="btn btn-info form-control hoverable">Entrar</button>
                    </div>
                </form>
                <?php include "util/msgs.php" ?>
            </div>
        </div>
    </div>
    <script type="text/javascript" src="js/jquery.min.js"></script>
    <script type="text/javascript" src="js/bootstrap.min.js"></script>
</body>
</html>
<?php
}else{
    header('Location: index.php');
}
?>