#include <stdio.h>

int main(){

    int vetor[10], i;

    for(i = 0; i < 10; i++){

        printf("Insira o valor #%d: ", i+1);
        scanf("%d", &vetor[i]);

    }

    for(i = 9; i >= 0; i--){

        printf("%d ", vetor[i]);

    }

    printf("\n");

    return 0;

}