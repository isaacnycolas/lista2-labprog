#include <stdio.h>
#include <math.h>

int main(){
    for(int i = 15; i < 90; i++){
        if(i % 4 == 0){
            double resultado = (int)pow(i, 2);
            printf("%.0f ", resultado);
        }
    }
    return 0;
}