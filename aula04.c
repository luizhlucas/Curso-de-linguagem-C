#include <stdio.h>

#define texto "Entrada e saida de dados"

int main(){
    printf("%s\n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("Digite o sua idade: ");
    scanf("%i", &idade);

    printf("Digite o sua altura: ");
    scanf("%f", &altura);

    printf("Digite o seu nome: ");
    scanf("%s", &nome);

    printf("Dados informados\n");
    printf("Idade: %i\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Nome: %s\n", nome);

}