#include <stdio.h>

int main(){

    int celsius = 10;


    for(celsius; celsius <= 100; celsius += 10){

        printf("%d°C = %d°F\n", celsius, ((celsius * 9)/ 5) + 32);

    }


}