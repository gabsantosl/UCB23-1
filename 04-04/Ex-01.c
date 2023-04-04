/*

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
