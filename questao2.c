#include <stdio.h>
#include <string.h>

int main () {
    unsigned int numSemana;
    char *semana[8] = {"domingo" , "segunda" , "terça" , "quarta" , "quinta" , "sexta" , "sabado"};

    puts("Insira um número de 1 a 7 : ");
    scanf("%d" , &numSemana);

    do {

        for (int i = 1 ; i <= (sizeof(semana) / sizeof(semana[0])) ; i++) { 
            if(numSemana == i){
                printf("%s\n" , semana[i - 1]);
            }
        }

        puts("Insira um número de 1 a 7 : ");
        scanf("%u" , &numSemana);
    }while(numSemana != 0);

    printf("Escolha inválido!");
    return 0;
}