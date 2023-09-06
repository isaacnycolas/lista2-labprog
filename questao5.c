#include <stdio.h>

int main(){
    int n, maior;
    maior = n;
    puts("Digite um número: ");
    scanf("%d", &n);

    while(n!=0){
    if(n > maior)maior = n;
    printf("O maior numero é %d \n", maior);
    puts("Digite um número: ");
    scanf("%d", &n);
    }
}