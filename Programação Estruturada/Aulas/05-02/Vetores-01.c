/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERCÍCIOS 02/05/23

1) Funcionamento simples de vetores.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int nota[5];

	nota[0] = 10;
	nota[1] = 5;
	nota[2] = 4;
	nota[3] = 2;
	nota[4] = 7;
	
	printf("%i\n", nota[4]);
	
	return 0;
}
