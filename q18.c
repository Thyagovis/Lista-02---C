#include <stdio.h>


int main() {
    unsigned long long int soma = 0;
    unsigned long long int graos = 1; 

    for (int i = 1; i <= 64; i++) {
        soma += graos;
        graos *= 2; 
    }

    printf("Total de graos de trigo: %llu\n", soma);

    return 0;
}
