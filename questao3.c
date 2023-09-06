#include <stdio.h>

int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    for(int i = (numero - 1); i >= 1; i--){
    numero *= i;
    }
    printf("%d \n", numero);
}