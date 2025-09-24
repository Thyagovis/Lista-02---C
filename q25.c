#include <stdio.h>

int main(){

    float pi = 4;
    int quociente = 3;
    int termo;

    puts("Digite ate qual termo voce pretende aproximar: ");
    scanf(" %d", &termo);

    for(int i = 1; i <= termo; i ++){


        printf("Valor de pi: %.10f\n", pi);    
        puts("=====================");

        pi = (i % 2 == 0)? pi + pi/quociente: pi - (pi/quociente);
        quociente += 2;
    }

    return 0;
}