/*
UNIVERSIDADE CATÓLICA DE BRASÍLIA 
CURSO DE CIÊNCIA DA COMPUTAÇÃO - MATUTINO
TURMA DE ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392

MEMBROS DO GRUPO:
- ARTHUR
- GABRIELA DOS SANTOS LEITE
- JESSICA LAIS
- OTAVIO

PARTE 3 - Q1) Faça um programa em C que armazene em um vetor 3 valores e imprima os 
              valores utilizando notação de ponteiro.

*/

#include <stdio.h>
#include <locale.h>
int main (){

    setlocale(LC_ALL, "Portuguese");

	int vetor[3] = {10,20,30}, i;
	int *p;
	p=vetor;

    printf("Os valores armazenados no vetor são:\n");

    for (i = 0; i < 3; i++){
		printf ("Valor %d: %d\n", i+1, p[i]);
	}

	return(0);
}