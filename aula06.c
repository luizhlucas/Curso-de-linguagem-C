#include <stdio.h>

int main() {

    float nota1, nota2, media;

    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/ 2;

    if(media >= 7) {
        printf("O aluno(a) foi aprovado(a)!\n");
    }
    else {
        if(media >= 4 && media < 7) {
            printf("O aluno(a) esta na recuperacao!\n");
        }
        else {
            printf("O aluno(a) foi reprovado(a)!\n");
        }
    }
}