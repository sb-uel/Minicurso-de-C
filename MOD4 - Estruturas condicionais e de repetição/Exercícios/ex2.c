#include <stdio.h>

int main() {
    float valor_do_produto, valor_com_desconto;
    int tipo_de_cliente;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor_do_produto);
    printf("Digite o tipo de cliente (1 - funcionario, 2 - cliente cadastrado, 3 - cliente comum): ");
    scanf("%d", &tipo_de_cliente);

    switch(tipo_de_cliente) {
        case 1:
            valor_com_desconto = valor_do_produto - (valor_do_produto*0.1);
            break;
        case 2:
            valor_com_desconto = valor_do_produto - (valor_do_produto*0.05);
            break;
        case 3:
            valor_com_desconto = valor_do_produto;
            break;
        default:
            valor_com_desconto = 0.0;
    }

    printf("\nO valor final e %.2f", valor_com_desconto);

    return 0;
}