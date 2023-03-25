/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERCÍCIOS 25/03/2023

EXERCÍCIO 2- Crie um programa que peça ao usuário para entrar com 4 notas de um aluno, calcule
             sua média aritmética e retorno o valor dessa média calculada. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int i=1;
	float nota, soma=0, media;
    
    while (i <= 4)
    {
        printf("Informe a %dª nota do aluno: ", i);
        scanf("%f", &nota);
        soma = soma + nota;
        i++;
    }

    media = soma/4;

    printf("\nA média do aluno é %.2f.\n", media);
	return 0;
}