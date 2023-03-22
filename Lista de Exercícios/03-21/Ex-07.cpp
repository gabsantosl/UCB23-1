/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERCÍCIOS 21/03/2023

EXERCÍCIO 07- Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor
de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3. Considere pi = 3.14159. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int raio;
    float volume, pi = 3.14159;

    printf("Informe o raio da esfera: ");
    scanf("%d", &raio);

    volume = (4.0/3.0) * pi * pow(raio,3.0); //pow(x,y) = power 

    printf("\nO volume da esfera corresponde a %.3f.", volume);
	
	return 0;
}