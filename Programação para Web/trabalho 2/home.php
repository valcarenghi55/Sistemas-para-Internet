<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Home</title>

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
            
                <h1>HOME</h1>
                <table class="table table-striped">
                    <thead>
                        <tr>
                        <th scope="col">Nome</th>
                        <th scope="col">Partido</th>
                        <th scope="col">Email</th>
                        <th scope="col">Editar</th>
                        </tr>
                    </thead>
                    <tbody>
                        
                        <?php
                        
                            include 'controleVereador.php';

                            $resultados = mostrarTodosVereadores();

                            foreach($resultados as $linhas){

                                echo "  <tr>
                                        <td>", $linhas['nome'], "</td>
                                        <td>", $linhas['partido'], "</td>
                                        <td>", $linhas['email'], "</td>
                                        <td><a class = 'link' href = 'editarVereador.php?codigo=$linhas[ID]'>Editar</a></td>
                                        </tr>";
                            }
                        ?>

                    </tbody>
                </table>   

            <a class = "btn" href = "cadastrarVereador.php">Cadastrar</a>                

    </div>  

    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz" crossorigin="anonymous"></script>
    
</body>
</html>