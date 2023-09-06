#include <stdio.h>

int main() {
    int continuar = 1;

    while (continuar) {
        float precoMercadoria;
        puts("Qual o preço da mercadoria?");
        scanf("%f", &precoMercadoria);

        int valorMercadoria = precoMercadoria;
        int parcelas = valorMercadoria / 3;
        float valorEntrada = precoMercadoria - (parcelas * 2);

        printf("Valor das parcelas: R$ %d\n", parcelas);
        printf("Valor das entradas: R$ %.2f\n", valorEntrada);

        printf("Deseja calcular novamente? (1 - Sim / 0 - Não): ");
        scanf("%d", &continuar);

        if (continuar != 1) {
            printf("Programa encerrado.\n");
        }
    }

    return 0;
}
