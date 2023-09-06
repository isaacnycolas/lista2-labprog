#include <stdio.h>

int main() {
    int A, B, menor, maior, soma = 0;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A < B) {
        menor = A;
        maior = B;
    } else {
        menor = B;
        maior = A;
    }
    for (int i = menor; i <= maior; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    printf("A soma dos números pares na faixa [%d, %d] é: %d\n", menor, maior, soma);

    return 0;
}
