#include <stdio.h>

int main(){

    int somatorio = 1;

    for(int i = 1; i <= 10; i++){


        somatorio *= (i % 2 != 0)? i : 1; 

    }

    printf("Fatorial dos impares de 1 a 10: %d", somatorio);


    return 0;
}