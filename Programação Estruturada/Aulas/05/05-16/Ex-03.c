/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERCÍCIOS 16/05/23

EX-03) USANDO PONTEIROS À ESTRUTURA CRIE UM PROGRAMA
	   PARA IMPRIMIR NA TELA HORA, MINUTOS E SEGUNDOS.
	   - OBS: OS VALORES PODEM SER PREDETERMINADOS.
	   - EXEMPLO: 20:20:20
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	struct horario
	{
		int *pHora;
		int *pMinuto;
		int *pSegundo;
	};
    
    struct horario hoje;

    int hora = 200;
    int minuto = 300;
    int segundo = 400;

    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;
	
	printf("Hora: %i\n", *hoje.pHora);
    printf("Minuto: %i\n", *hoje.pMinuto);
    printf("Segundo: %i\n", *hoje.pSegundo);

    *hoje.pSegundo = 1000;
    printf("\nSegundo: %i\n", *hoje.pSegundo);

	return 0;
}
