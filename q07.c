#include <stdio.h>

int main(){

    int valor1, valor2;

    do{

        puts("Digite o primeiro valor: ");
        scanf(" %d", &valor1);

        puts("Digite o segundo valor: ");
        scanf(" %d", &valor2);

        if(valor2 == 0){

            puts("Não é possivel divisão por zero!");

        }else{

            printf("Resultado da divisao: %.2f", ((float) valor1)/ valor2);

        }

    }while(valor2 == 0);


    return 0;
}