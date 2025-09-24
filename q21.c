#include <stdio.h>

int main(){

    int n1, n2, n3, n4, n5;
    int inverso, valor;

    puts("Digite um valor e descubra se ele é um palindromo: ");
    scanf("%d", &valor);

    n1 = valor / 10000;
    n2 = ((valor % 10000) - (valor % 1000))/1000;
    n3 = ((valor % 1000) - (valor % 100))/100;
    n4 = ((valor % 100) - (valor % 10))/10;
    n5 = valor % 10;

    inverso = (n5 * 10000) + (n4 * 1000) + (n3 * 100) + (n2 * 10) + (n1);

    (valor == inverso)? puts("é um palindromo") : puts("nao é palindromo");

    return 0;
}