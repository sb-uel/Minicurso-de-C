#include <stdio.h>

int main(){

    int vetor[10];
    int vetorAux[10] = { 0 };
    
    float resultadoMedia, resultadoMediana;

    for(int i = 0; i < 10; i++){

        printf("Insira o valor #%d: ", i+1);
        scanf("%d", &vetor[i]);

    }

    /* Media */

    resultadoMedia = 0;

    for(int i = 0; i < 10; i++){

        resultadoMedia = resultadoMedia + vetor[i];

    }

    resultadoMedia = resultadoMedia / 10.0;

    /* Mediana */

    resultadoMediana = ( vetor[4] + vetor[5] ) / 2;

    /* Moda */

    for(int i = 0; i < 10; i++){

        for(int j = i + 1; j < 10; j++){

            if(vetor[i] == vetor[j]){

                vetorAux[i] = vetorAux[i] + 1;

            }

        }

    }

    int aux2, posicao;
    aux2 = 0;

    for(int i = 0; i < 10; i++){

        if(vetorAux[i] > aux2){
            aux2 = vetorAux[i];
            posicao = i;
        }

    }

    printf("A média é %.2f\n", resultadoMedia);
    printf("A mediana é %.2f\n", resultadoMediana);
    printf("A moda é %d\n", vetor[posicao]);

    return 0;

}