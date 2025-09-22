#include <stdio.h>

int main(){

    int num;
    int fat = 1;

    puts("Digite um numero para calcular o fatorial: ");
    scanf(" %d", &num);

    for(int i = 1; i <= num; i++){

        fat *= i;

    }

    printf("Fatorial de :%d\nÉ: %d", num, fat);

    return 0;
}