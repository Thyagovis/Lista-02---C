#include <stdio.h>

int main(){

    int valor;

    puts("Digite u numero para a tabuada: ");
    scanf("%d", &valor);

    for(int i = 1; i <= 10; i++){

        printf("%d x %d = %d\n", valor, i, valor * i);

    }


    return 0;
}