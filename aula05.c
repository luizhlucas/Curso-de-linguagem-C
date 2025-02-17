#include <stdio.h>

int main() {
    int num1, num2, soma, subtr, mult, divis;
    printf("Digite o primeiro numero inetiro: ");
    scanf("%i", &num1);
    printf("Digite o segundo numero inetiro: ");
    scanf("%i", &num2);

    soma = num1 + num2;
    subtr = num1 - num2;
    mult = num1 * num2;
    divis = num1 / num2;

    printf("Resultados:\n");
    printf("Soma: %i\n", soma);
    printf("Subtração: %i\n", subtr);
    printf("Multiplicação: %i\n", mult);
    printf("Divisão: %i\n", divis);
    return 0;
}