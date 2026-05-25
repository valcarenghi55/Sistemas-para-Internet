<?php
include 'crudVereador.php';

function mostrarTodosVereadores(){

    return mostrarVereadores();

}

function mostrarProdutoEditar($codigo){

    return mostrarProduto($codigo);

}

if(isset($_POST["opcao"])){

    $opcao=$_POST["opcao"];

    switch($opcao){
        case 'cadastrar':
            cadastrarVereador(  $_POST["nome"],
                                $_POST["partido"],
                                $_POST["email"]);
            header("Location: cadastrarVereador.php");
        break;
    }
    switch($opcao){
        case 'editar':
            cadastrarVereador(  $_POST["nome"],
                                $_POST["partido"],
                                $_POST["email"]);
            header("Location: cadastrarVereador.php");
        break;
    }

}