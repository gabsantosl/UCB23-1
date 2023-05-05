/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERCÍCIOS 21/03/2023

EXERCÍCIO 08- Escreva um programa que leia três valores reais: A, B e C. 
Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C, considerando pi = 3.14159.
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B. */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, C, areaTRI, areaCIR, areaTRAP, areaQUAD, areaRETAN, pi = 3.14159;

	printf("\n");
	printf("Informe o valor de A: ");
	scanf("%f", &A);
	printf("Informe o valor de B: ");
	scanf("%f", &B);
	printf("Informe o valor de C: ");
	scanf("%f", &C);

	areaTRI = (A * C) / 2;
	areaCIR = pow(C,2.0) * pi;
	areaTRAP = (A + B) * C / 2;
	areaQUAD = pow(B,2.0);
	areaRETAN = A * B;

	printf("\nA área do triângulo equivale a %.3f", areaTRI);
	printf("\nA área do círculo equivale a %.3f", areaCIR);
	printf("\nA área do trapézio equivale a %.3f", areaTRAP);
	printf("\nA área do quadrado equivale a %.3f", areaQUAD);
	printf("\nA área do retângulo equivale a %.3f", areaRETAN);
	printf("\n");

	return 0;
}