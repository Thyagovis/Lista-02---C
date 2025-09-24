#include <stdio.h>

int main(){

    int cateto1, cateto2, hipotenusa;

    for(int i = 1; i <= 500; i++){
        for(int j = 1; j <= 500; j++){
            for(int k = 1; k <= 500; k++){

                if((i * i) + (j * j) == (k * k)){

                    printf("cateto 1: %d\n", i);
                    printf("cateto 2: %d\n", j);
                    printf("Hipotenusa: %d\n", k);
                    puts("=====================");
                }

            }
        }
    }


    return 0;
}