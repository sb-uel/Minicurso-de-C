#include <stdio.h>
#include <stdbool.h>

int main(){

    char senha1[6] = "banana";
    char senha2[6] = "banana";

    bool senhasIguais = true;

    for(int i = 0; i < 6; i++){

        if(senha1[i] != senha2[i]){
            senhasIguais = false;
            break;
        }

    }

    if(senhasIguais){
        printf("Senhas iguais!\n");
    }else{
        printf("Senhas diferentes!\n");
    }

    return 0;

}