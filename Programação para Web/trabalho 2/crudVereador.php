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

function mostrarVereador($codigo){

    connect();

    $resultado = query("SELECT * FROM vereador WHERE ID = $codigo");

    close();

    return $resultado;

}

function editarVereador($codigo, $nome, $partido, $email){

    connect();

    $resultado = query("UPDATE vereador SET nome='$nome', partido='$partido', email='$email' WHERE ID = $codigo");

    close();

    return $resultado;

}

function excluirVereador($codigo){

    connect();

    $resultado = query("DELETE FROM vereador WHERE ID = $codigo");

    close();

    return $resultado;

}