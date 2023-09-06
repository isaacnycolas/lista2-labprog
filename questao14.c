#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    int contador = 0;
    puts("Escreva dois números para limite e fim");
    scanf("%d %d", &a, &b);

    // Certifique-se de que a seja menor ou igual a b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i < b; i++) {
        if (i % 3 == 0) {
            contador++;
        }
    }
        printf("Números divisíveis entre %d e %d : %d", a, b, contador);
    return 0;
}
