#include <stdio.h>

int main(){
    int somatres = 0, somacinco = 0;
    for (int i = 0, j = 101; i <= 100 && j <= 200; i++, j++) {
        if(i % 3 == 0){
            somatres += i;
        }
        if(j % 5 == 0){
            somacinco += j;
        }
    }
    printf("3: %d \n", somatres);
    printf("5: %d", somacinco);
}