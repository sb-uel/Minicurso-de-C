#include <stdio.h>

int main() {
    float valor1, valor2, resultado;

    char operacao;

    printf("Digite a operacao que deseja realizar ( +, -, *, / ): ");
    scanf("%c", &operacao);

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    switch(operacao) {
        case '-':
            resultado = valor1 - valor2;
            break;
        case '+':
            resultado = valor1 + valor2;
            break;
        case '*':
            resultado = valor1 * valor2;
            break;
        case '/':
            resultado = valor1 / valor2;
            break;
        default:
            resultado = 0.0;
    }

    printf("\nO resultado da operacao e %.2f", resultado);

    return 0;
}