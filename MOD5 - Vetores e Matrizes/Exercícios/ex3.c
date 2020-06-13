#include <stdio.h>

int main(){

    float notas[20];
    float media, maiorNota, menorNota;

    for(int i = 0; i < 20; i++){

        printf("Insira o valor #%d: ", i+1);
        scanf("%f", &notas[i]);

    }

    /* Media */

    media = 0;

    for(int i = 0; i < 20; i++){

        media = media + notas[i];

    }

    media = media / 20;

    /* Maior e menor nota */

    maiorNota = menorNota = notas[0];

    for(int i = 1; i < 20; i++){

        if(notas[i] > maiorNota){

            maiorNota = notas[i];

        }else if(notas[i] < menorNota){

            menorNota = notas[i];

        }

    }

    printf("A média da turma foi: %.2f\n", media);
    printf("A maior nota da turma foi: %.2f\n", maiorNota);
    printf("A menor nota da turma foi: %.2f\n", menorNota);

    return 0;

}