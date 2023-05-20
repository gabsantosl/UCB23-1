/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERCÍCIOS 25/04/23

EX-03) MOSTRE A IMPRESSÃO DE STRING COM puts().
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[80];

	printf("Digite o seu nome: ");
	gets(nome);
	
	puts("\nSaudações, ");
	puts(nome);
	
	puts("\nputs() pula de linha sozinha.");
	puts(&nome[4]);
	
	return 0;
}
