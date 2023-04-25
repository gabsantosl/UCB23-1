/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERCÍCIOS 25/04/23

EX-01) 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[80];

	printf("Digite o seu nome: ");
	gets(nome);
	
	printf("\nSaudações, %s.\n", nome);
	system("PAUSE");
	
	return 0;
}
