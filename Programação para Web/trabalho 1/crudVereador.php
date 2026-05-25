<?php
include 'conexaoBD.php';
function cadastrarVereador($nome, $partido, $email){
    connect();
    query("INSERT INTO vereador (nome, partido, email)
          VALUES ('$nome', '$partido', '$email')");
    close();
}

function mostrarVereadores(){

    connect();

    $resultados = query("SELECT * FROM vereador");

    close();

    return $resultados;

}

function mostrarProduto($codigo){

    connect();

    $resultado = query("SELECT * FROM produto WHERE codigo = $codigo");

    close();

    return $resultado;

}