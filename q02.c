#include <stdio.h>

int main(){

    int dia;

    do{

        puts("digite um numero: ");
        scanf(" %d", &dia);

        
        if(dia == 1){

            puts("Domingo");

        }else if(dia == 2){

            puts("Segunda");

        }else if(dia == 3){

            puts("Terça");

        }else if(dia == 4){

            puts("Quarta feira");

        }else if(dia == 5){

            puts("Quinta feira");

        }else if(dia == 6){

            puts("Sexta feira");

        }else if(dia == 7){

            puts("Sabado");

        }else{
            
            puts("Dia invalido");
            
        }

    }while(dia != 0);


    return 0;
}