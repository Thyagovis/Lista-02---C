#include <stdio.h>

int main(){

    int maior, menor, valor;
    int contador = 0;

    do{

        puts("Digite um numero: ");
        scanf(" %d", &valor);

        if(contador == 0){

            maior = valor;
            menor = valor;
        }

        maior = (valor > maior && valor >= 0)? valor : maior;
        menor = (valor < menor && valor >= 0)? valor : menor;

        contador++;

    }while(valor > 0);

    printf("Valor do maior: %d\n", maior);
    printf("Valor do menor: %d\n", menor);
    printf("Produto do maior pelo menor: %d", menor * maior);

    return 0;
}