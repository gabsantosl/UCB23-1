/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERCÍCIOS 16/05/23

EX-02) 
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

	depois -> hora = 20;
    depois -> minuto = 80;
    depois -> segundo = 50;

    int somatorio = 100;

    struct horario antes;
    
    antes.hora = somatorio + depois -> segundo;
    antes.minuto = agora.hora + depois -> minuto;
    antes.segundo = depois -> minuto + depois -> segundo;
	
	printf("Horário Atual: %i:%i:%i", antes.hora, antes.minuto, antes.segundo);
	return 0;
}
