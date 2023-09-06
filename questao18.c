#include <stdio.h>
#include <math.h>

int main() {
    int num_quadrados = 64; 
    long long int total_graos = 0; 

    for (int i = 1; i <= num_quadrados; i++) {
        long long int graos_quadrado = pow(2, i - 1);
        total_graos += graos_quadrado;
    }

    printf("O total de grãos no tabuleiro de xadrez é: %lld\n", total_graos);

    return 0;
}
