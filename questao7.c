#include <stdio.h>

int main(){
    int one, two;
    int continuar = 1;
    
    while(continuar){
        puts("Digite dois números:");
        scanf("%d %d", &one, &two);
        if(two == 0){
            puts("Não é possível fazer o cálculo \n");
            continuar = 1;
        }else{
            printf("A divisão dos dois números fornecidos é %.2f \n", ((float) one/two));
            continuar = 0;
        }
    }
}