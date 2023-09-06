#include <stdio.h>

int main() {
    int numero, maior, menor;
    int primeiro = 1; 

    printf("Digite números inteiros (digite um número negativo e par para sair):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero < 0 && numero % 2 == 0) {
            break;
        }

        if (primeiro) {
            maior = numero;
            menor = numero;
            primeiro = 0;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }

    if (primeiro) {
        printf("Nenhum número válido foi digitado.\n");
    } else {
        int produto = maior * menor;
        printf("O produto do maior número (%d) pelo menor número (%d) é: %d\n", maior, menor, produto);
    }

    return 0;
}
