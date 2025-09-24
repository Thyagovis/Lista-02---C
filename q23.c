#include <stdio.h>

int main() {
    int x = 5;

    printf("Valor inicial de x: %d\n", x);

    // Pre-incremento
    printf("Resultado de ++x: %d\n", ++x);
    printf("Valor de x depois do pre-incremento: %d\n\n", x);

    x = 5; // resetando para o teste seguinte

    // Pos-incremento
    printf("Resultado de x++: %d\n", x++);
    printf("Valor de x depois do pos-incremento: %d\n", x);

    return 0;
}
