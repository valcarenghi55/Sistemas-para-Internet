<?php
include 'crudVereador.php';

function mostrarTodosVereadores(){

    return mostrarVereadores();

}

function mostrarVereadorEditar($codigo){

    return mostrarVereador($codigo);

}

if(isset($_POST["opcao"])){

    $opcao=$_POST["opcao"];

    switch($opcao){
        case 'cadastrar':
            cadastrarVereador(  $_POST["nome"],
                                $_POST["partido"],
                                $_POST["email"]);                   
            header("Location: home.php");
        break;
    }
    switch($opcao){
        case 'editar':
            editarVereador(     $_POST["codigo"],
                                $_POST["nome"],
                                $_POST["partido"],
                                $_POST["email"]);
            header("Location: home.php");
        break;
    }
    switch($opcao){
        case 'excluir':
            excluirVereador(     $_POST["codigo"],);
            header("Location: home.php");
        break;
    }

}