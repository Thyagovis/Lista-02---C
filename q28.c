#include <stdio.h>

int main() {
    unsigned char X, Y;
    printf("Digite X (0-255): ");
    scanf("%hhu", &X);
    printf("Digite Y (>=5): ");
    scanf("%hhu", &Y);

    if (Y < 5) {
        printf("Y deve ser >= 5!\n");
        return 1;
    }

    printf("\nBits de X = ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (X >> i) & 1);
    }
    printf("\n");

    for (int i = 0; i < 8; i++) {
        unsigned char pos;
        if (i < 4) 
            pos = Y - (4 - i);   
        else 
            pos = Y + (i - 3);   

        unsigned char bit = (X >> (7 - i)) & 1;

        unsigned char escondido = (pos & 0xFE) | bit;

        printf("Posicao %3d -> valor modificado = %3d (LSB = %d)\n", pos, escondido, bit);
    }

    return 0;
}
