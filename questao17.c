#include <stdio.h>

int main(){
    int celsius = 0;
    puts("Temperaturas de Farenheit quando Celsius for");
    do{
        celsius += 10;
        float farenheit = (1.8 * celsius) + 32 ;
        printf("%d : %.0f \n", celsius, farenheit);
    }while(celsius < 100);
}