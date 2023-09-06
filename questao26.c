#include <stdio.h>

void binario(int n){
    if(n == 0)
    printf("%d", n);
    else{
        binario(n/2);
        printf("%d", n % 2);
    }
}
int main() {
    for(int i = 0; i < 257; i++){
        printf("%d: %o \n", i, i);
    }
    for(int j = 0; j < 257; j++){
            printf("%d: %x \n", j, j);
    }
    for(int h = 0; h < 257; h++){
        printf("%d:", h);
        binario(h);
        printf("\n");
    }

    return 0;
}
