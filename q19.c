#include <stdio.h>

int main(){

    int inicio, fim, quant;
    float media;
    int soma;

    puts("Digite o inicio do intervalo: ");
    scanf("%d", inicio);

    puts("Digite o fim do intervalo: ");
    scanf("%d", fim);

    for(int i = inicio; i <= fim; i++){

        soma += i;
        quant = i;
    }

    media = ((float) soma)/ quant;

    printf("media dos valores: %f", media);


    return 0;
}