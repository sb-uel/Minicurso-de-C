#include <stdio.h>
#include <stdbool.h>

int main(){

    int matriz[3][3];

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            printf("Insira o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

        }

    }

    bool ehMatrizDiagonal = true;

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            if(i != j){

                if(matriz[i][j] != 0){

                    ehMatrizDiagonal = false;

                }

            }

        }

    }

    if(ehMatrizDiagonal){
        printf("É matriz diagonal\n");
    }else{
        printf("Não é matriz diagonal\n");
    }

    return 0;

}