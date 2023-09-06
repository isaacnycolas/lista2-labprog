#include <stdio.h>
#include <math.h>

int main(){
    for(int i = 0; i < 8; i++){
        double resultado = pow(3, i);
        printf("%.0lf ", resultado);
    }
    return 0;
}