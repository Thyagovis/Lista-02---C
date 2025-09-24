#include <stdio.h>

int main(){

    int a, b, inicio, fim;
    int somatorio = 0;

    puts("Digite o primeiro valor do intervalo: ");
    scanf("%d", &a);

    puts("Digite o segundo valor do intervalo: ");
    scanf("%d", &b);

    inicio = (a > b)? b : a;
    fim = (a > b)? a : b;

    for(int i = inicio; i <= fim; i++){

        somatorio += (i % 2 == 0)? i : 0;

    }

    printf("Somatorio do intervalo: %d", somatorio);

    return 0;
}