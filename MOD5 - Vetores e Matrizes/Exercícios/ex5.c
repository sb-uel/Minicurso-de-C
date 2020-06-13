#include <stdio.h>

int main(){

    int vetor[10] = {25, 10, 2, 13, 9, 15, 10, 21, 7, 29};
    
    for(int i = 0; i < 10; i++){

        for(int k = 0; k < 10; k++){

            if(vetor[i] < vetor[k]){

                int aux = vetor[i];
                vetor[i] = vetor[k];
                vetor[k] = aux;

            }

        }

    }

    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;

}