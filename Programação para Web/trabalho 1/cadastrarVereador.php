<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Cadastrar Vereador</title>

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

    <div class="container">
        <div class="row">
            <div class="col-md-8 offset-md-2">
                
            <form name = "form" method="post" action="controleVereador.php">
                <div class="mb-3">
                    <label for="nome" class="form-label">Nome:</label>
                    <input type="text" class="form-control" id="nome" name = "nome" required>
                </div>
                <div class="mb-3">
                    <label for="partido" class="form-label">Partido:</label>
                    <input type="text" class="form-control" id="partido" name = "partido" required>
                </div>
                <div class="mb-3">
                    <label for="exampleInputEmail1" class="form-label">Email:</label>
                    <input type="email" class="form-control" id="exampleInputEmail1" name = "email"> 
                </div>
                <button onclick="alerta()" type="submit" name="opcao" value="cadastrar" class="btn btn-primary" >Cadastrar</button>
            </form>

            </div>
        </div>
    </div>

    <script>
      
        function alerta() {
            var x = document.forms["form"]["nome"].value;
            var y = document.forms["form"]["partido"].value;
            if (x != "" && y != "") {
                alert("Cadastro feito com sucesso");
                return false;
            }
        }

    </script>
    
</body>
</html>