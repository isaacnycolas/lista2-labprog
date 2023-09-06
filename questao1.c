#include <stdio.h>
#include <string.h>

int main () {
    unsigned int numeroSemana;
    char *semana[8] = {"domingo" , "segunda" , "terça" , "quarta" , "quinta" , "sexta" , "sabado"};

    puts("Insira um número de 1 a 7 : ");
    scanf("%d" , &numeroSemana);

    while(numeroSemana != 0) {

        for (int i = 1 ; i <= (sizeof(semana) / sizeof(semana[0])) ; i++) { 
            if(numeroSemana == i){
                printf("%s\n" , semana[i - 1]);
            }
        }

        puts("Insira um número de 1 a 7 : ");
        scanf("%u" , &numeroSemana);
    }

    printf("Escolha inválido!");
    return 0;
}