#include <stdio.h>

int main(){

    int numero;
    int contador = 0;

    puts("Digite um numero: ");
    scanf("%d", &numero);

    while(numero > 0){

        int digito = numero % 10;
        contador += (digito == 7)? 1 : 0; 

        numero /= 10;
    }

    printf("O numero tem %d numeros 7", numero, contador);
    

    return 0;
}