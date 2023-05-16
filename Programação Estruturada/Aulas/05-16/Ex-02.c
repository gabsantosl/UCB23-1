/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERCÍCIOS 16/05/23

EX-01) 

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	x = 10;
	
	int *ponteiro;
	ponteiro = &x;
	
	int y=20;
	*ponteiro = y;
	
	printf("%i %i\n", x, y);
	
	return 0;
}
