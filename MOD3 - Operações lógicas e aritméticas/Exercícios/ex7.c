#include <stdio.h>

int main(){

    int tipoDeConta;

    printf("Insira o tipo de conta que você deseja fazer\n 1 - Círculo\n 2 - Retângulo:\n");
    scanf("%d", &tipoDeConta);

    if(tipoDeConta == 1){

        float raio, resultado;

        printf("Insira o valor do raio: \n");
        scanf("%f", &raio);

        resultado = 3.14 * (raio * raio);

        printf("A área do círculo é: %f", resultado);

    }else if(tipoDeConta == 2){

        float largura, altura, resultado;

        printf("Insira o valor da altura: \n");
        scanf("%f", &altura);

        printf("Insira o valor da largura: \n");
        scanf("%f", &largura);

        resultado = altura * largura;

        printf("A área do retângulo é: %f\n", resultado);

    }else{

        printf("Você digitou um valor inválido.\n");
        
    }

    return 0;

}