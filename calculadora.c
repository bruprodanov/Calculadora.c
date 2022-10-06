/////// Calculadora - Algoritmos e Programa��o ////////
////// Bruna Aguirre Prodanov
///// An�lise de desenvolvimento de sistemas
//// 202213715
/// github @bruprodanov

// Calculadora desenvolvida para opera��es matem�ticas simples

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main()
{

    int opcoes;
    float numero1, numero2;

    setlocale(LC_ALL, "Portuguese");

    // Dados do autor
    printf("<<<<<<<<<<<<<<<<<<<< Ol�, eu sou uma calculadora >>>>>>>>>>>>>>>>>>>>>");
    printf("\nFui desenvolvida por Bruna Aguirre Prodanov");
    printf("\nEstudante de an�lise e desenvolvimento de sistemas da Universidade La Salle");
    printf("\nMinha matricula � 202213715");
    printf("\n...........................................................................");

    do
     {

        // Menu de op��es
        printf("\n\n 1 - Soma\n 2 - Subtra��o\n 3 - Multiplica��o\n 4 - Divis�o\n 5 - Pot�ncia\n 6 - Raiz Quadrada\n 0 - Sair\n\n");
        scanf("%d", &opcoes);

        // Defini��o de n�mero de operandos
        // Em caso de escolha da op��o 6 (raiz quadrada) solicitar apenas um n�mero

        if (opcoes == 6)
        {

            printf(" Digite um valor: ");
            scanf("%f", &numero1);
        }

        // Em caso de escolha das outras opera��es solicitar ao usu�rio dois n�meros
        if (opcoes > 0 && opcoes <= 5)
        {
            printf(" Digite dois valores: ");
            scanf("%f%f", &numero1, &numero2);
        }

        switch (opcoes)
        {

        // Escolha para sair
        case 0:
            printf(" Obrigado!\n");
            break;

        // Soma entre dois n�meros
        case 1:
            printf(" Soma:  %.2f\n", numero1 + numero2);
            break;

        // Subtra��o de dois n�meros
        case 2:
            printf(" Subtra��o: %.2f\n", numero1 - numero2);
            break;

            // Multiplica��o entre dois n�meros
        case 3:
            printf(" Multiplica��o: %.2f\n", numero1 * numero2);
            break;

            // Divis�o entre dois n�meros. Caso 0 solicita um novo n�mero pois n�o existe divis�o por zero
        case 4:
            while (numero2 == 0)
            {
                printf(" N�o existe divis�o por zero!\n Por favor digite outro valor: ");
                scanf("%f", &numero2);
            }

            printf(" Divis�o: %.2f\n", numero1 / numero2);
            break;

            // Potencia��o entre dois n�meros
        case 5:
            printf(" Pot�ncia: %.2f\n", pow(numero1, numero2));
            break;

        // Raiz quadrada de um n�mero
        case 6:
            printf(" Raiz Quadrada: %.2f\n", sqrt(numero1));
            break;

        default:
            printf(" Comando inv�lido. Tente novamente: \n");
        }
    } while (opcoes != 0);

  return 0;
}

// Refer�ncia
//AGUIAR, Marcelo Otone. SILVA, Rodrigo Freitas. Introdu��o ao C em 10 aulas. 1. ed. - Alegre - 2016
