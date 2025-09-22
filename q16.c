#include <stdio.h>

int main(){

    int somatorio_d3 = 0;
    int somatorio_d5 = 0;

    for(int i = 0; i <= 200; i++){

        if((i <= 100) && (i % 3 == 0)){

            somatorio_d3 += i;

        }else if(i % 5 == 0){

            somatorio_d5 += i;

        }

    }

    printf("Somatorio dos multiplos de 3 no intervalo [0, 100]: %d\n", somatorio_d3);
    printf("Somatorio dos multiplos de 5 no intervalo ]100, 200]: %d", somatorio_d5);

    return 0;
}