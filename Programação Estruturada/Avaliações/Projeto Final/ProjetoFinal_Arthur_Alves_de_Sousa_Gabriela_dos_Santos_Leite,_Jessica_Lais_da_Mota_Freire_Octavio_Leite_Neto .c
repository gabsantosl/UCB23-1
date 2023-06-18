//Arthur Alves de Sousa, Gabriela dos Santos Leite, Jéssica Laís da Mota Freire, Octavio Leite Neto, APE GPE02M0392, 17/06/23
//Projeto Final 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // setando para português
#define ANSI_COLOR_RED "\x1b[31m"   // MUDANÇA DE COR
#define ANSI_COLOR_BLUE "\x1b[34m"  // MUDANÇA DE COR
#define ANSI_COLOR_WHITE "\x1b[30m" // MUDANÇA DE COR
#define ANSI_COLOR_GREEN "\x1b[32m" // MUDANÇA DE COR
#define ANSI_COLOR_BLACK "\x1b[30m" // MUDANÇA DE COR

// Calculando o volume e depois o peso utilizando a fórmula dos engenheiros
float calcularGui(float alt, float larg, float comp)
{
    float vol, peso;
    float valR = 25.0;

    vol = alt * larg * comp;
    peso = vol * valR;

    return peso;
}

int main()
{
    // iniciar o prompt fullscreen
    keybd_event(VK_MENU, 0x36, 0, 0);
    keybd_event(VK_RETURN, 0x1C, 0, 0);
    keybd_event(VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
    UINT CPAGE_UTF8 = 65001; // setando para português
    UINT CPAGE_DEFAULT = GetConsoleOutputCP(); // setando para português
    SetConsoleOutputCP(CPAGE_UTF8); // setando para português
    system("color 7F");             // definindo a cor do background

    float alt, larg, comp, peso;
    int op;
    peso = 0; // iniciando a variável peso
    while (1) //iniciando a repetição do menu (switch)
    {
        printf(ANSI_COLOR_WHITE "\t\t\t\t\t\t\t---PROGRAMA DE INDICAÇÃO DE GUINDASTES---\n");
        printf(ANSI_COLOR_BLUE "             .____.  \n");
        printf(ANSI_COLOR_BLUE "           . |####| . \n");
        printf(ANSI_COLOR_BLUE "          .  |####|  . \n");
        printf(ANSI_COLOR_BLUE "         .   |####|   .\n");
        printf(ANSI_COLOR_BLUE "   |=================================================|\n");
        printf(ANSI_COLOR_BLUE "   |#################################################|\n");										
        printf(ANSI_COLOR_BLUE "   |=================================================|");										printf("\t\t\t\t\t          _________\n");
        printf(ANSI_COLOR_BLUE "             |____|                     |___|                           ");					    printf("\t\t ________|         |________\n");
        printf(ANSI_COLOR_BLUE "             |    |                      .|.                     ");							printf("\t\t\t |  _____|         |_____  |\n");
        printf(ANSI_COLOR_BLUE "             |____|                     . | .                     ");							printf("\t\t\t |  |   |___________|   |  |\n");
        printf(ANSI_COLOR_BLUE "             |____|                    .  |  .                     ");					     	printf("\t\t\t |  |                   |  |\n");
        printf(ANSI_COLOR_BLUE "             |    |                   .   |   .                      ");						printf("\t\t\t |  | OBRA EM ANDAMENTO |  |\n");
        printf(ANSI_COLOR_BLUE "             |____|                  .    |    .                       ");                      printf("\t\t\t |  |    NECESSARIO     |  |\n");
        printf(ANSI_COLOR_BLUE "             |____|                 .     |     .                       ");                     printf("\t\t |  |                   |  |\n");
        printf(ANSI_COLOR_BLUE "             |    |                .      |      .                       ");                    printf("\t\t |  | 1.LACUNA          |  |\n");
        printf(ANSI_COLOR_BLUE "             |____|               .       |       .                       ");                   printf("\t\t |  | 2.GUINDASTE       |  |\n");
        printf(ANSI_COLOR_BLUE "             |____|              .        |        .                       ");				    printf("\t\t |  | 3.CIMENTO         |  |\n");
        printf(ANSI_COLOR_BLUE "             |    |             .         |         .                       ");				    printf("\t\t |  |                   |  |\n");
        printf(ANSI_COLOR_BLUE "             |____|            .          |          .                       ");				printf("\t\t |  |                   |  |\n");
        printf(ANSI_COLOR_BLUE "             |____|           .           |           .                        ");		    	printf("\t\t |  |                   |  |\n");
        printf(ANSI_COLOR_BLUE "             |    |          .            |            .                         ");			printf("        |  |___________________|  |\n");
        printf(ANSI_COLOR_BLUE "             |____|         .             |             .                          	"); 		printf(" |_________________________|\n");
        printf(ANSI_COLOR_BLUE "             |____|        .              |              .                          \n");
        printf(ANSI_COLOR_WHITE "\t\t    |------|--------------|--------------|------|\n");
        printf(ANSI_COLOR_WHITE "\t\t    |1-INFORMAR AS MEDIDAS DA COLUNA;           |\n\t\t    |2-VERIFICAR QUAL GUINDASTE É O RECOMENDADO;|\n\t\t    |3-SAIR DO PROGRAMA;                        |\n");
        printf(ANSI_COLOR_WHITE "\t\t    |-------------------------------------------|\n");
        printf(ANSI_COLOR_WHITE "Opção:");
        scanf("%i", &op);
        switch (op) //condições/opções do menu
        {
        case 1: //inserindo informações da coluna
            system("cls");
            printf("INFORME A ALTURA DA COLUNA EM METROS:");
            scanf("%f", &alt);
            printf("INFORME A LARGURA DA COLUNA EM METROS:");
            scanf("%f", &larg);
            printf("INFORME O COMPRIMENTO DA COLUNA EM METROS:");
            scanf("%f", &comp);
            system("cls");
            peso = calcularGui(alt, larg, comp);
            printf("\n O PESO TOTAL DA COLUNA É:%.2f\n\n\n", peso);
            system("pause");
            system("cls");
            break;
        case 2: //estabelendo qual é o melhor guindaste conforme o peso informado. Obs: se o peso for 0 ou algum número negativo, será retornado "peso inválido"
            system("cls");
            if (peso <= 0)
            {
                printf(ANSI_COLOR_RED "PESO INVÁLIDO!\n\n\n");
            }
            else if (peso <= 1000)
            {
                printf("O GUINDASTE RECOMENDADO É O 1°.\n");
            }
            else if (peso > 2000)
            {
                printf("O GUINDASTE RECOMENDADO É O 3°.\n");
            }
            else
            {
                printf("O GUINDASTE RECOMENDADO É O 2°.\n");
            }

            system("pause");
            system("cls");
            break;

        case 3: //sair do programa
            system("cls");
            printf( "\nObrigado por usar nosso programa!\n\n\n\n");
            printf(ANSI_COLOR_GREEN"");
    
           	printf("               ___\n");
            printf("              /   |\n");
            printf("             /    |\n");
           	printf("            /     |\n");
			printf("           /      |_____\n");		   
		    printf("__________/             |\n");
		    printf("|        |              |\n");
         	printf("|        |              |\n");
			printf("|        |              |\n");
			printf("|        |              |\n");
			printf("|        |              |\n");
			printf("|        |              |\n");
			printf("|________|______________|\n\n\n\n");
			printf(ANSI_COLOR_BLACK"");
          	printf("");
            system("pause");
            system("cls");
            return 0;
        default: //opção inserida errada
            system("cls");
            printf(ANSI_COLOR_RED "\nOpção inválida!\nSerá retornado ao menu principal!\n\n\n");
            printf("           _________\n");
 			printf("##________|         |_______##\n");
			printf(" |##______|         |_____ ##\n");
			printf(" |  |##  |___________|  |##|\n");
			printf(" |  |  ##              ##  |\n");
  			printf(" |  |    ##          ## |  |\n");
            printf(" |  |      ##      ##   |  |\n");
        	printf(" |  |        ##  ##     |  |\n");
            printf(" |  |   OBRA  ## FECHADA|  |\n");
            printf(" |  |        ##  ##     |  |\n");
        	printf(" |  |      ##     ##    |  |\n");
        	printf(" |  |     ##        ##  |  |\n");
			printf(" |  |   ##            ##|  |\n");
        	printf(" |  | ##                ## |\n");
			printf(" |  ##__________________| ##\n");
   			printf(" |##_______________________|##  \n");
   			printf(ANSI_COLOR_BLACK"\n");
            system("pause");
            system("cls");
            break;
        }
    }

    return 0;
}