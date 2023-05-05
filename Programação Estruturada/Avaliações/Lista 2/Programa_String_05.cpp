/*
UNIVERSIDADE CATÓLICA DE BRASÍLIA 
CURSO DE CIÊNCIA DA COMPUTAÇÃO - MATUTINO
TURMA DE ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392

MEMBROS DO GRUPO:
- GABRIEL DE OLIVEIRA TOREZAN
- GABRIEL TEIXEIRA VINENTE
- GABRIELA DOS SANTOS LEITE

Q-05) INSERIR O PRIMEIRO NOME E O SOBRENOME E NO FINAL
      EXIBIR O NOME COMPLETO.

STRINGS UTILIZADAS: 
- gets()
- strcat()
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char nome[40], sobrenome[60];

    printf("Informe o seu primeiro nome: ");
    gets(nome);

    printf("Informe o seu sobrenome: ");
    gets(sobrenome);

    strcat(nome, " ");
    strcat(nome, sobrenome);

    printf("\nSeja bem vindo(a) %s!", nome);
    
    return 0;
}







