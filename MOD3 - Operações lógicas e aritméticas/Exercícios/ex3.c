#include <stdio.h>
#include <math.h>

int main(){

    float hipotenusa, catetoA, catetoB;

    printf("Insira o valor do cateto A: ");
    scanf("%f", &catetoA);

    printf("Insira o valor do cateto B: ");
    scanf("%f", &catetoB);

    hipotenusa = sqrt( pow(catetoA, 2) + pow(catetoB, 2) );

    printf("Resultado: %f\n\n", hipotenusa);

    return 0;

}