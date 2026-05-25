<?php
include 'conexaoBD.php';

function cadastrarUsuario($nome, $senha, $cpf, $celular){
    connect();
    query("INSERT INTO usuario (nome, senha, cpf, celular)
           VALUES ('$nome', '$senha', '$cpf', '$celular')");
    close();
}

function buscarUsuario($nome){
    connect();
    $resultados=query("SELECT * FROM usuario WHERE nome='$nome'");
    close();
    return $resultados;
}
