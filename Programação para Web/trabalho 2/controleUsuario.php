<?php
include 'crudUsuario.php';

$opcao=$_POST["opcao"];

switch($opcao){
    case 'cadastrar':
        cadastrarUsuario($_POST["nome"], sha1($_POST["senha"]),
                        $_POST["cpf"], $_POST["celular"]);
        header("Location: paginaLogin.php");
    break;
    case 'entrar':
        $nome=$_POST["nome"];
        $senha=sha1($_POST["senha"]);
        $resultados=buscarUsuario($nome);
        foreach($resultados as $linha);
        if($nome===$linha["nome"]){
            if($senha===$linha["senha"]){
                session_start();
                $_SESSION["nome"]=$nome;
                header("Location: home.php");
            }else{
                echo "<script>alert('Senha Incorreta');</script>";
                echo "<script>window.location='paginaLogin.php';</script>";
            }
        }else{
            echo "<script>alert('Usuário Incorreto');</script>";
            echo "<script>window.location='paginaLogin.php';</script>";
        }
    break;
    case 'sair':
        session_start();
        session_destroy();
        echo "<script>alert('Sessão encerrada com sucesso');</script>";
        echo "<script>window.location='paginaLogin.php';</script>";
    break;
}