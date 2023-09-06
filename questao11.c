#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    puts("Escreva dois números para limite e fim");
    scanf("%d %d", &a, &b);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i < b; i++) {
        if (i % 4 == 0) {
            double resultado = pow(i, 2);
            printf("%.0f ", resultado);
        }
    }

    return 0;
}
