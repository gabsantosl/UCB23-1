/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERCÍCIOS 1

Q3- Elabore um programa que faça o sorteio de vários números e ao final 
    mostra: 
    a) A quantidade de números sorteados; 
    b) O Maior numero sorteado; 
    c) Quantos números pares foram sorteados; 

    Observação: O programa deve finalizar quando for sorteado o valor 0 
    (zero) e utilizar no máximo 3 variáveis. Não utilizar vetores ou matrizes. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int num, maiorNum, total=0, par=0;

    printf("Sorteador de números.\n");
    
    while(num != 0){
        srand(num);
        total++;

        if(num % 2 == 0){
            par++;
        }

        if(num < maiorNum){
            maiorNum = num;
        }
    }

    printf("Foram sorteados %d números.\n", total);
    printf("O maior número sorteado foi %d.\n", maiorNum);
    printf("%d deles eram números pares.\n", par);

	return 0;
}