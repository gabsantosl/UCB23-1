/*
GABRIELA DOS SANTOS LEITE UC22100365
LISTA DE EXERCÍCIOS 01/04/2023

EX-03) Crie um programa para verificar se o número é par
ou impar. Utilize a estrutura de seleção.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if(valor % 2 == 0){
        printf("\nO número informado é PAR.");
    }else{
        printf("\nO número informado é ÍMPAR.");
    }

    return 0;
}