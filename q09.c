#include <stdio.h>

int main(){

    int proximo = 0;
    int anterior = 0;
    int atual = 1;

    for(int i = 0; i < 20; i++){

        printf("%d ",atual);

        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;

    }

    return 0;
}