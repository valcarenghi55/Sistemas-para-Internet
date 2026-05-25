<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Editar Vereador</title>

    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
    <link href="css/style.css" rel="stylesheet">

</head>
<body>

    <nav class="navbar navbar-expand-lg bg-body-tertiary">  
        
        <div class="container-fluid">

            <a class="navbar-brand" href="home.php">SMTRANSPARENTE <img src="img/lupa.png" height="30px"></a>
            <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
            <span class="navbar-toggler-icon"></span>
            </button>

            <form method="post" action="controleUsuario.php">

                <button class="sair" type="submit" name="opcao" value="sair">Sair</button>  

            </form>

            <?php
            session_start();
            if(isset($_SESSION["nome"])){
            }else{
                header("Location: paginaLogin.php");
            }
            ?>

        </div>

    </nav>  

    <div class="container">
            <h1>EDITAR</h1>
            <?php
                include 'controleVereador.php';
                $codigo=$_GET["codigo"];
                $resultados=mostrarVereadorEditar($codigo);
                foreach($resultados as $linha);
            ?>
            <form name = "form" method="post" action="controleVereador.php">
                <input type="hidden" name="codigo" value="<?=$linha['ID']?>">
                <div class="form-floating mb-3">
                    <input type="text" class="form-control" id="nome" name = "nome" required placeholder = "" value="<?=$linha['nome']?>">
                    <label for="nome" class="form-label">Nome:</label>
                </div>
                <div class="form-floating mb-3">                   
                    <input type="text" class="form-control" id="partido" name = "partido" required placeholder = "" value="<?=$linha['partido']?>">
                    <label for="partido" class="form-label">Partido:</label>
                </div>
                <div class="form-floating mb-3">
                    <input type="email" class="form-control" id="exampleInputEmail1" name = "email" placeholder = "" value="<?=$linha['email']?>"> 
                    <label for="exampleInputEmail1" class="form-label">Email:</label>
                    
                </div>  
                <button onclick="alertaEditar()" type="submit" name="opcao" value="editar" class="btn">Editar</button>
                <button onclick="alertaExcluir()" type="submit" name="opcao" value="excluir" class="btn">Excluir</button>
                <a class = "btn" href = "home.php">Voltar</a>
            </form>
    </div>

    <script>
      
        function alertaEditar() {
                alert("Edição feita com sucesso!");
        }
        function alertaExcluir() {
                alert("Excluido com sucesso!");
        }

    </script>
    
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz" crossorigin="anonymous"></script>

</body>
</html>