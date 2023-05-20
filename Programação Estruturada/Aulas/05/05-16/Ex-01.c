/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERCÍCIOS 16/05/23

EX-01) USANDO PONTEIROS À ESTRUTURA CRIE UM PROGRAMA
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
		int hora;
		int minuto;
		int segundo;
	};
	
	struct horario agora, *depois;
	depois = &agora;

	(*depois).hora = 30;
	(*depois).minuto = 30;
	(*depois).segundo = 30;
	
	printf("Horário Atual: %i:%i:%i", agora.hora, agora.minuto, agora.segundo);
	return 0;
}
