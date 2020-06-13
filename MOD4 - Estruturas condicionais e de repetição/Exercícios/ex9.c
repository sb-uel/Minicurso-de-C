#include <stdio.h>

int main() {
    int i;
    float nota, media = 0;

    for(i=0;i<5;i++) {
        scanf("%f", &nota);
        media += nota;
    }

    printf("\nA media e %.2f", media/5);

    return 0;
}