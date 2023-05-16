/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERCÍCIOS 16/05/23

EX-05) USANDO PONTEIROS À ESTRUTURA CRIE UM PROGRAMA
	   PARA IMPRIMIR NA TELA HORA, MINUTOS E SEGUNDOS.
	   - OBS: OS VALORES PODEM SER PREDETERMINADOS.
	   - EXEMPLO: 20:20:20
	   
	   email: minecraft3127@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int h = 10, m = 5, s = 50;
	int *pH, *pM, *pS;
	
	pH = &h;
	pM = &m;
	pS = &s;
	
	printf("Horário Atual: %i:%i:%i", *pH, *pM, *pS);
	return 0;
}
