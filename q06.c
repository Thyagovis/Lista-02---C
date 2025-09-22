#include <stdio.h>

int main(){

    int p = 0;
    int r = 0;
    int branco = 0;
    int nulo = 0;
    int total_votos = 0;
    int voto;
    char confirm;

    do{
        puts("Digite para que vai seu voto\n7 - Renata\n5 - Paulo\n0 - Branco\nOutro - Nulo");
        scanf(" %d", &voto);
        puts("------------------------------------------------------------");

        puts("Confirma seu voto?");
        scanf(" %c", &confirm);
        puts("------------------------------------------------------------");


        if(confirm == 's' && voto >= 0){

            if(voto == 7){

                r++;
            }else if(voto == 5){

                p++;
            }else if(voto == 0){

                branco++;
            }else if(voto > 0){

                nulo++;
            }

            total_votos++;

        }   
        else{
            
            puts("Voto nao confirmado");
            puts("------------------------------------------------------------");
    
        }

       
    }while(voto >= 0);

    p = (((float) p )/ total_votos) * 100;
    r = (((float) r) / total_votos) * 100;
    branco = (((float) branco) / total_votos) * 100;
    nulo = (((float) nulo) / total_votos) * 100;

    puts("Percentual de votos");
    printf("%d%% : Paulo\n", p);
    printf("%d%% : Renata\n", r);
    printf("%d%% : Branco\n", branco);
    printf("%d%% : Nulo\n", nulo);

    return 0;
}