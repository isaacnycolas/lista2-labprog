#include <stdio.h>

int main() {
    int num_termos;
    double pi_aproximado = 0.0;
    int sinal = 1;

    printf("Digite o número de termos para calcular π: ");
    scanf("%d", &num_termos);

    printf("Número de Termos\tValor Aproximado de π\n");

    for (int i = 1; i <= num_termos; i++) {
        double termo = (double)sinal * 4.0 / (2 * i - 1);
        pi_aproximado += termo;
        sinal = -sinal;

        printf("%d\t\t\t%.10lf\n", i, pi_aproximado);
    }

    return 0;
}
