/*
GABRIELA DOS SANTOS LEITE UC22100365
LISTA DE EXERCÍCIOS 01/04/2023

EX-02) Faça um programa que receba como dados de entrada 
dois valores e mostre como resultado as 4 operações matemáticas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("\nSOMA = %d.", valor1 + valor2);
    printf("\nSUBTRAÇÃO = %d.", valor1 - valor2);
    printf("\nMULTIPLICAÇÃO = %d.", valor1 * valor2);
    printf("\nDIVISÃO = %d.", valor1 / valor2);

    return 0;
}