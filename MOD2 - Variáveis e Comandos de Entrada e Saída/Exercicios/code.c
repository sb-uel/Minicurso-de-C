#include <stdio.h>

int main() {
    char nome[20], curso[30];
    int idade;
    float altura_em_metros;

    printf("Digite suas informações!\nnome: ");
    scanf("%s", nome);
    printf("curso: ");
    scanf("%s", curso);
    printf("idade: ");
    scanf("%d", &idade);
    printf("altura em metros: ");
    scanf("%f", &altura_em_metros);

    printf("\nSeu nome e %s, faz %s, tem %d anos, e sua altura mede %.2f metros", nome, curso, idade, altura_em_metros);

    return 0;
}