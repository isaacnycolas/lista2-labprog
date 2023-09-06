#include <stdio.h>

int main() {
    int numero;
    puts("Digite um número:");
    scanf("%d", &numero);
    
    if (numero > 9999 && numero < 100000) {
        int dezDeMilhar = numero / 10000;
        int milhar = (numero / 1000) % 10;
        int centena =  (numero / 100) % 10;
        int dezena = (numero / 10) % 10;
        int unidade = numero % 10;
        int number = (unidade * 10000) + (dezena * 1000) + (centena * 100) + (milhar * 10) + (dezDeMilhar * 1);
        
        if (number == numero) {
            printf("O número fornecido %d é um palíndromo!", numero);
        } else {
            printf("O número fornecido %d NÃO é um palíndromo", numero);
        }
    } else {
        puts("Número fora do padrão de 5 dígitos!");
    }

    return 0;
}
