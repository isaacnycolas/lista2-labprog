#include <stdio.h>

int main() {
    for(int i = 9; i >= 1; i-=2){
       long long unsigned numero = 1; 
            for(int j = i; j >= 1; j--){
                numero *= j;
            }
        printf("%llu \n", numero);
    }
    return 0;
}
