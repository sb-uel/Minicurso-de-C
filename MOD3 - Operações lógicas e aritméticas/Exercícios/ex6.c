#include <stdio.h>

int main(){

    int ladoA, ladoB, ladoC;

    printf("Insira o valor do lado A: ");
    scanf("%d", &ladoA);

    printf("Insira o valor do lado B: ");
    scanf("%d", &ladoB);

    printf("Insira o valor do lado C: ");
    scanf("%d", &ladoC);

    if(ladoA == ladoB && ladoB == ladoC){
        printf("O triângulo é equilátero!\n\n");
        return 0;
    }

    if(ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
        printf("O triângulo é isóceles\n\n");
        return 0;
    }

    printf("O triângulo é escaleno!");

    return 0;

}