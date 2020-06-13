#include <stdio.h>

int main() {
    int numero;
    
    do {
        printf("Digite um numero entre 2 e 12: ");
        scanf("%d", &numero);
    } while(numero > 12 || numero < 2);

    printf("Numero valido");

    return 0;
}