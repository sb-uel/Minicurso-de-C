#include <stdio.h>
#include <math.h>

int main(){

    float resultado, valor;

    printf("Insira o valor: ");
    scanf("%f", &valor);

    if(valor < 0){
        printf("Não existe raíz quadrada de um número negativo!\n");
        return 0;
    }

    resultado = sqrt(valor);

    printf("O resultado é: %f\n", resultado);

    return 0;

}