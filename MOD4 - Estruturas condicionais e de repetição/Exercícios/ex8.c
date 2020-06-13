#include <stdio.h>

int main() {
    int i, valor;

    printf("Digite um valor de 1 a 10: ");
    scanf("%d", &valor);

    for(i=1;i<=10;i++)
        printf("%d ", i*valor);

    return 0;
}