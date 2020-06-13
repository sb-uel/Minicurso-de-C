#include <stdio.h>

int main(){

    int valor1, valor2, resultado;
    float resultadoFloat;

    printf("Insira um valor: ");
    scanf("%d", &valor1);

    printf("Insira outro valor: ");
    scanf("%d", &valor2);

    printf("A soma dos valores deu: %d\n", valor1 + valor2);

    resultado = valor1 - valor2;
    printf("A subtração dos valores deu: %d\n", resultado);

    resultado = valor1 * valor2;
    printf("A multiplicação dos valores deu: %d\n", resultado);

    resultadoFloat = ((float) valor1)/ valor2;
    printf("A divisão dos valores deu: %f\n\n", resultadoFloat);

    return 0;

}