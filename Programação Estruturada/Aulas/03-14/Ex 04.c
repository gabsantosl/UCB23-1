#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício
	
	Média maior ou igual a 7: APROVADO
	Média maior ou igual a 5 e menor que 7: RECUPERAÇÃO	
	Média menor que 5: REPROVADO
	
*/

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, media;
	
	printf("Digite a primeira a nota: ");
	scanf("%f", &n1);
	
	printf("\nDigite a primeira a nota: ");
	scanf("%f", &n2);
	
	media = (n1+n2)/2;
	
	printf("\n==============================\n");
	
	printf("\nSua média é: %0.2f", media);
	
	if(media>= 7){
		printf("\nVocê está APROVADO!");
	}else{
		if(media >= 5){
			printf("\nVocê está em RECUPERAÇÃO!");
		}else{
			printf("\nVocê está REPROVADO!");
		}
	}
	
	return 0;
}
