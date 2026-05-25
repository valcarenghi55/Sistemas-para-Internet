<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Mostrar Vereadores</title>

    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
    <link href="style.css" rel="stylesheet">

</head>
<body>
  
    <nav class="navbar navbar-expand-lg bg-body-tertiary">
        <div class="container-fluid">
            <a class="navbar-brand" href="menu.php">SMTRANSPARENTE <img src="lupa.png" height="30px"></a>
            <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
            <span class="navbar-toggler-icon"></span>
            </button>
            <div class="collapse navbar-collapse" id="navbarNav">
            <ul class="navbar-nav">
                <li class="nav-item">
                <a class="nav-link" href="cadastrarVereador.php">Cadastrar</a>
                </li>
                <li class="nav-item">
                <a class="nav-link" href="mostrarVereador.php">Mostrar</a>
                </li>
            </ul>
            </div>
        </div>
    </nav>  

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
                        <td><a href = 'editarProdutos.php?codigo=$linhas[ID]'>Editar</a></td>
                        </tr>";
            }
        ?>

    </tbody>
    </table>
    
</body>
</html>