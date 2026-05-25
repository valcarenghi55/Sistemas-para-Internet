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
        
        <h1>Cadastrar Usuário</h1>

        <form method="post" action="controleUsuario.php">

            <table class = "login">

                <tr>
                    <td><label for="nome">Usuário:</label></td>
                    <td><input  required type="text" id="nome" name="nome"></td>
                </tr>

                <tr>
                    <td><label for="senha">Senha:</label></td>
                    <td><input required type="password" id="senha" name="senha"></td>
                </tr>

                <tr>
                    <td><label for="cpf">CPF:</label></td>
                    <td><input required type="text" id="cpf" name="cpf" pattern=".{14,14}" title="Digite no formato 000.000.000-00"></td>
                </tr>

                <tr>
                    <td><label for="celular">Celular:</label></td>
                    <td><input required type="text" id="celular" name="celular" pattern=".{15,15}" title="Digite no formato (00) 00000-0000"></td>
                </tr>
                
            </table>

            <button required class = "btn" type="submit" name="opcao" value="cadastrar">Cadastrar</button>
            <a class = "btn"  href="paginaLogin.php">Acessar - Fazer Login</a>

        </form>
    </div>

    <script
    
        src="https://code.jquery.com/jquery-3.7.1.min.js" 
        integrity="sha256-/JqT3SQfawRcv/BIHPThkBvs0OEvtFFmqPF/lYI/Cxo=" 
        crossorigin="anonymous"

    ></script>

    <script src="jquery.mask.min.js" type="text/JavaScript"></script>

    <script>

        $(document).ready(function(){

            $("#cpf").mask('000.000.000-00');
            $("#celular").mask('(00) 00000-0000');

        })

    </script>
   

</body>
</html>