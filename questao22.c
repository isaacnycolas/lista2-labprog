#include <stdio.h>

int main() {
    int numero, digito, contador = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10; 
        if (digito == 7) {
            contador++;
        }
        numero /= 10;
    }
    if (contador > 0) {
        printf("O número tem %d dígitos iguais a 7.\n", contador);
    } else {
        printf("O número não possui dígitos iguais a 7.\n");
    }
    return 0;
}