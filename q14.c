#include <stdio.h>

int main(){

    int a, b, inicio, fim;
    int divisivel = 0;

    puts("Digite o primeiro valor do intervalo: ");
    scanf("%d", &a);

    puts("Digite o segundo valor do intervalo: ");
    scanf("%d", &b);

    inicio = (a > b)? b : a;
    fim = (a > b)? a : b;

    for(int i = inicio; i <= fim; i++){

        divisivel += (i % 3 == 0)? 1 : 0;

    }

    printf("Quantidade de numeros divisiveis por 3: %d", divisivel);

    return 0;
}