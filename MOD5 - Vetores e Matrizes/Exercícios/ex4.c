#include <stdio.h>
#include <stdbool.h>

int main(){

    int vetorA[8] = {9, 8, 3, 4, 2, 20, 36, 53};
    int vetorB[10] = {9, 9, 1, 10, 2, 2, 3, 40, 53, 53};

    int vetorUniao[18] = {0};
    int vetorInterseccao[8] = {0};


    /* União */

    for(int i = 0; i < 18; i++){

        if(i < 8){

            vetorUniao[i] = vetorA[i];

        }else{

            vetorUniao[i] = vetorB[i-8];

        }

    }

    /* Interssecção */

    int posicaoVetorIntersseccao = 0;

    for(int i = 0; i < 10; i++){

        for(int j = 0; j < 8; j++){

            if(vetorB[i] == vetorA[j]){

                bool achouValorIgual = false;

                for(int k = 0; k < 8; k++){

                    if(vetorInterseccao[k] == vetorB[i]){
                        achouValorIgual = true;
                        break;
                    }

                }

                if(achouValorIgual == false){
                    vetorInterseccao[posicaoVetorIntersseccao] = vetorB[i];
                    posicaoVetorIntersseccao++;
                }

            }

        }

    }

    printf("Vetor união: \n");
    for(int i = 0; i < 18; i++){
        printf("%d ", vetorUniao[i]);
    }

    printf("\nVetor interssecção: \n");
        for(int i = 0; i < 8; i++){
        printf("%d  ", vetorInterseccao[i]);
    }

    printf("\n");

    return 0;

}