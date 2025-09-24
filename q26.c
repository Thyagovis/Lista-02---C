#include <stdio.h>

int main() {
    printf("Decimal\tBinario\t\tOctal\tHexadecimal\n");
    printf("-------\t--------\t-----\t-----------\n");

    for (int i = 1; i <= 256; i++) {
        printf("%d\t", i);

        // imprime em binário (9 bits para incluir até 256)
        for (int bit = 8; bit >= 0; bit--) {
            printf("%d", (i >> bit) & 1);
        }

        printf("\t%o\t%X\n", i, i);
    }

    return 0;
}
