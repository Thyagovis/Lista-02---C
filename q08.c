#include <stdio.h>

int main (){

    float valor_produto = 0;
    float entrada, parcela1, parcela2;

    puts("Digite o valor do porduto: ");
    scanf(" %f", &valor_produto);

    entrada = (valor_produto * 2)/3;
    parcela1 = (valor_produto)/3;
    parcela2 = (valor_produto)/3;

    printf(" %f", entrada);
    printf(" %f", parcela1);
    printf(" %f", parcela2);


    return 0;
}