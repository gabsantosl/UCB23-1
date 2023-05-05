/*
UNIVERSIDADE CATÓLICA DE BRASÍLIA 
CURSO DE CIÊNCIA DA COMPUTAÇÃO - MATUTINO
TURMA DE ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392

MEMBROS DO GRUPO:
- GABRIEL DE OLIVEIRA TOREZAN
- GABRIEL TEIXEIRA VINENTE
- GABRIELA DOS SANTOS LEITE

gets, puts, strlen, strcpy, srtcmp

Q-4) INSERIR USUÁRIO E SENHA. O USUÁRIO DEVE TER NO MÍNIMO 4 CARACTERES
	 E A SENHA DEVE TER NO MÍNIMO 8 CARACTERES E DEVERÁ SER PREENCHIDA 
	 DUAS VEZES.

STRINGS UTILIZADAS: 
- gets()
- strlen()
- strcpy()
- strcmp()
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	char usuario[40], senha1[30], senha2[30];

	printf("== FAÇA O SEU CADASTRO ==\n\n");

	printf("Insira um nome de usuário: ");
	gets(usuario);

	while(strlen(usuario) != 4){
		printf("\nO usuário deve ter no mínimo 4 caracteres.\n");

		printf("Insira um nome de usuário: ");
		gets(usuario);
	}

	printf("Insira uma senha: ");
	gets(senha1);

	while(strlen(senha1) != 8){
		printf("\nA senha deve ter no mínimo 8 caracteres.\n");

		printf("Insira uma senha: ");
		gets(senha1);
	}

	strcpy(senha2, senha1);

	printf("Insira a senha novamente: ");
	gets(senha1);

	while(strcmp(senha2, senha1) != 0){
		printf("\nAs senhas não coencidem, digite novamente.\n");

		printf("Insira uma senha: ");
		gets(senha1);
	}

	printf("\n== SEU CADASTRO FOI REALIZADO COM SUCESSO ==\n");

	return 0;
}