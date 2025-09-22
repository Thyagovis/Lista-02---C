#include <stdio.h>

int main(){

    int a, b;

    puts("Digite o inicio do intervalo: ");
    scanf("%d", &a);

    puts("Digite o fim do intervalo: ");
    scanf("%d", &b);

    for(int i = a; i <= b; i++){

        if(i % 4 == 0){

            printf("%d \n", i * i);

        }

    }


    return 0;
}