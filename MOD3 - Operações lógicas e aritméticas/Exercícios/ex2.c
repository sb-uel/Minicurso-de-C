#include <stdio.h>

int main(){

    float areaTriangulo, base, altura;

    printf("Insira o valor da base: ");
    scanf("%f", &base);

    printf("Insira o valor da altura: ");
    scanf("%f", &altura);

    areaTriangulo = (base * altura) / 2;

    printf("A área do triangulo é: %f\n", areaTriangulo);

    return 0;

}