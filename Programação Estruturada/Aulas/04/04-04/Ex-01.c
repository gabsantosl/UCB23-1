/*
GABRIELA DOS SANTOS LEITE UC22100365
LISTA DE EXERCÍCIOS 04/04/2023

EX-01) Usar a estrutura condicional encadeada, em que serão analisados os tipos de triângulo,
partindo da premissa que a exitência do triângulo deverá ser verificada antes. 
Tipos de triângulo:
1- EQUILÁTERO (3 lados iguais);
2- ISÓCELES (2 lados iguais);
3- ESCALENO (3 lado diferentes);
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int lado1, lado2, lado3, soma1, soma2, soma3;
	
	printf("\nnInforme o primeiro lado: ");
	scanf("%d", &lado1);
	printf("Informe o segundo lado: ");
	scanf("%d", &lado2);
	printf("Informe o terceiro lado: ");
	scanf("%d", &lado3);
	
	soma1 = lado1 + lado2;
	soma2 = lado2 + lado3;
	soma3 = lado3 + lado1;
	
	if(lado3 >= soma1 || lado1 >= soma2 || lado2 >= soma3){
		printf("\nA forma geométrica não é um triângulo.");
	}else{
		if(lado1 == lado2 && lado1 == lado3){
		printf("\nO triângulo é EQUILÁTERO.");
		}else{
			if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){ 
				printf("\nO triângulo é ISÓCELES.");
			}else{
				printf("\nO triângulo é ESCALENO.");
			}
		}
	}
	
	
	return 0;
}
