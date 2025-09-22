#include <stdio.h>

int main(){

    int ano = 0;
    int p = 110;
    int j = 150;

    while(p < j){

        p += 3;
        j += 2;

        ano++;

    }

    printf("Levou %d anos para Pedro ficar maior que josé", ano);

    return 0;
}