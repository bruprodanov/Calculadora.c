/////// Calculadora - Algoritmos e Programação ////////
////// Bruna Aguirre Prodanov
///// Análise de desenvolvimento de sistemas
//// 202213715
/// github @bruprodanov

// Calculadora desenvolvida para operações matemáticas simples

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
    printf("<<<<<<<<<<<<<<<<<<<< Olá, eu sou uma calculadora >>>>>>>>>>>>>>>>>>>>>");
    printf("\nFui desenvolvida por Bruna Aguirre Prodanov");
    printf("\nEstudante de análise e desenvolvimento de sistemas da Universidade La Salle");
    printf("\nMinha matricula é 202213715");
    printf("\n...........................................................................");

    do
     {

        // Menu de opções
        printf("\n\n 1 - Soma\n 2 - Subtração\n 3 - Multiplicação\n 4 - Divisão\n 5 - Potência\n 6 - Raiz Quadrada\n 0 - Sair\n\n");
        scanf("%d", &opcoes);

        // Definição de número de operandos
        // Em caso de escolha da opção 6 (raiz quadrada) solicitar apenas um número

        if (opcoes == 6)
        {

            printf(" Digite um valor: ");
            scanf("%f", &numero1);
        }

        // Em caso de escolha das outras operações solicitar ao usuário dois números
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

        // Soma entre dois números
        case 1:
            printf(" Soma:  %.2f\n", numero1 + numero2);
            break;

        // Subtração de dois números
        case 2:
            printf(" Subtração: %.2f\n", numero1 - numero2);
            break;

            // Multiplicação entre dois números
        case 3:
            printf(" Multiplicação: %.2f\n", numero1 * numero2);
            break;

            // Divisão entre dois números. Caso 0 solicita um novo número pois não existe divisão por zero
        case 4:
            while (numero2 == 0)
            {
                printf(" Não existe divisão por zero!\n Por favor digite outro valor: ");
                scanf("%f", &numero2);
            }

            printf(" Divisão: %.2f\n", numero1 / numero2);
            break;

            // Potenciação entre dois números
        case 5:
            printf(" Potência: %.2f\n", pow(numero1, numero2));
            break;

        // Raiz quadrada de um número
        case 6:
            printf(" Raiz Quadrada: %.2f\n", sqrt(numero1));
            break;

        default:
            printf(" Comando inválido. Tente novamente: \n");
        }
    } while (opcoes != 0);

  return 0;
}

// Referência
//AGUIAR, Marcelo Otone. SILVA, Rodrigo Freitas. Introdução ao C em 10 aulas. 1. ed. - Alegre - 2016
