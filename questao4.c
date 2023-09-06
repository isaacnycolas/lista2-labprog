#include <stdio.h>

int main(){
    int altJose = 150;
    int altPedro = 110;
    int anos;

    while(altPedro < altJose){
        altPedro += 3;
        altJose += 2;
        anos++;
    }
    printf("A altura de José é: %d \n", altJose);
    printf("A altura de Pedro é: %d \n", altPedro);

    printf("Demorou %d anos para Pedro ser Maior que José \n", anos);
}