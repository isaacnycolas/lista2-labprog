#include <stdio.h>

int main(){
    int num;
    puts("Digite um número ");
    scanf("%d", &num);
    puts("Aqui está a tabuada do número escolhido: ");
    for(int i = 1; i < 11; i++){
        printf("%d x %d = %d \n", num, i, (num * i));
    }
    for(int i = 1; i < 11; i++){
        printf("%d / %d = %.2f \n", i, num, ((float)i / num));
    }
    for(int i = 1; i < 11; i++){
        printf("%d + %d = %d \n", num, i, (num + i));
    }    
    for(int i = 1; i < 11; i++){
        printf("%d - %d = %d \n", num, i, (num - i));
    }        
        
}