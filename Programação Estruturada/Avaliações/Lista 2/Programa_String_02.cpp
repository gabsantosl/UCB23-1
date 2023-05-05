/*
UNIVERSIDADE CATÓLICA DE BRASÍLIA 
CURSO DE CIÊNCIA DA COMPUTAÇÃO - MATUTINO
TURMA DE ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392

MEMBROS DO GRUPO:
- GABRIEL DE OLIVEIRA TOREZAN
- GABRIEL TEIXEIRA VINENTE
- GABRIELA DOS SANTOS LEITE

Q-02) INSERIR O PRIMEIRO NOME E EXIBIR QUANTOS CARACTERES
      ESTÃO PRESENTES.

STRINGS UTILIZADAS: 
- strlen()
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	char nome[100];
  int tamanho;

  printf("Digite seu primeiro nome: ");
  scanf("%s", nome);

  tamanho = strlen(nome);

  printf("O seu nome tem %d caracteres.\n", tamanho);

  return 0;
}