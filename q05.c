#include <stdio.h>

int main(){

    int valor;
    int maior, menor;

    puts("Digite um certo valor: ");
    scanf("%d", &valor);

    maior = valor;
    menor = valor;

    while(valor != 0){

        puts("Digite um certo valor: ");
        scanf("%d", &valor);

        if(valor > maior){

            maior = valor;

        }else if(valor < menor){

            menor = valor;

        }
        
    }

    printf("O menor valor foi: %d\nO menor valor foi: %d", maior, menor);


    return 0;
}