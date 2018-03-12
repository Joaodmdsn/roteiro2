#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double CalculaPorcentagem(int votos, int total){

    return votos*100.0/total;
}


int main(void){

    int jogadores[23] = {0}, voto, total=0, i;
    int maior=0, vencedor;
    double porcentagem;

    while(1){

        printf("Digite o voto: ");
        scanf("%d", &voto);

        if(voto == 0){
            break;
        }
        if(voto > 23 || voto < 0){
            printf("Voto invalido, por favor digitar de novo\n");
        }
        else{
            jogadores[voto-1] = jogadores[voto-1] + 1;
            total++;
        }
    }

    for(i=0; i<23; i++){
        if(jogadores[i] > maior){
            maior = jogadores[i];
            vencedor = i+1;
        }
    }

    for(i=0; i<23; i++){

        if(jogadores[i]>0){
            printf("\nO jogador %d teve %d votos, %.2lf%%", i+1, jogadores[i], CalculaPorcentagem(jogadores[i], total));
        }
    }
    printf("\n\nO melhor jogador da partida foi o camisa %d com %d votos, porcentagem de %.2lf%%\n", vencedor, maior, CalculaPorcentagem(maior, total));


    return 0;
}
