/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERCÍCIOS 02/05/23

2) Funcionamento de vetores usando função for.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, vetor[5]={1, 2, 3, 4, 5};

	for(i=0; i<5; i++){
		printf("%i\n", vetor[i]);
	}
	
	return 0;
}
