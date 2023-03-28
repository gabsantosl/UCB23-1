/*
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERCÍCIOS 28/03/2023

EXERCÍCIO 1- Imprimir na tela um número de 1 a 10 usando a estrutura de repetição - for;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i=1;i<=10;i++){
		printf("%d\n", i);
	}
	
	return 0;
}
