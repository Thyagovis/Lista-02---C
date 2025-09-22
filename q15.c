#include <stdio.h>

int main(){

    int resultado = 1;

    for(int i = 0; i <= 7; i++){

        resultado = 1;

        if(i == 0){

            resultado = 1;

        }else{

            for(int j = 1; j <= i; j++){

                resultado *= 3;

            }

        }

        printf("3 elevado a %d: %d\n", i, resultado);
    }

    return 0;
}