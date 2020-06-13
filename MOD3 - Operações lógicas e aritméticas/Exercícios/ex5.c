#include <stdio.h>

int main(){

    int valorUsuario, resultado;

    printf("Insira um valor: ");
    scanf("%d", &valorUsuario);

    if(valorUsuario < 0){
        printf("Não quero números negativos!\n");
        return 0;
    }

    resultado = valorUsuario % 2;

    if(resultado == 0){
        printf("O número é par\n\n");
    }else{
        printf("O número é impar\n\n");
    }

    return 0;

}