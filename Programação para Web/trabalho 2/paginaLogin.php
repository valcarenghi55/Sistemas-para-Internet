<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login</title>

    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
    <link href="css/style.css" rel="stylesheet">

</head>
<body>

    <div class="container">
        
        <h1>Login</h1>

        <form method="post" action="controleUsuario.php">

            <table class = "login">

                <tr>
                    <td><label for="nome">Usuário:</label></td>
                    <td><input type="text" id="nome" name="nome"></td>
                </tr>

                <tr>
                    <td><label for="senha">Senha:</label></td>
                    <td><input type="password" id="senha" name="senha"></td>
                </tr>

            </table>

            <button class="btn" type="submit" name="opcao" value="entrar">Entrar</button>
            <a class="btn"  href="cadastrarUsuario.php">Criar Usuário</a>

        </form>

    </div>

</body>
</html>