#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    int contador = 0;
    int somatorio = 0;
    puts("Escreva dois números para limite e fim");
    scanf("%d %d", &a, &b);

    // Certifique-se de que a seja menor ou igual a b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
            contador++;
            somatorio += i;
    }
        float resultado = (float)somatorio / contador;
        printf("Total de números entre %d e %d: %d \n", a, b, contador);
        printf("Somatório do intervalo: %d \n", somatorio);
        printf("Média aritmética do somatorio do intervalo: %.2f", resultado);
    return 0;
}
