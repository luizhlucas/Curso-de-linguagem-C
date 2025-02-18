#include <stdio.h>

int main() {

    int dia;

    printf("escolha um numero entre 1 e 7: ");
    scanf("%i", &dia);

    switch(dia) {
        case 1:
            printf("Domingo.\n");
            break;
        case 2:
            printf("Segunda-feira.\n");
            break;
        case 3:
            printf("Terca-feira.\n");
            break;
        case 4:
            printf("quarta-feira.\n");
            break;
        case 5:
            printf("Quinta-feira.\n");
            break;
        case 6:
            printf("Sexta-deira.\n");
            break;
        case 7:
            printf("Sabado.\n");
            break;
        default:
            printf("Valor inválido.\n");
    }
}