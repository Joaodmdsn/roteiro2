#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[30];
    char tipo[30];
    int integrantes;
    int pos;
}tBandas;

	tBandas gBandas[5];

void Preencher(tBandas *gBandas){

	int i;	

	strcpy(gBandas[0].nome, "Imagine Dragons");
	strcpy(gBandas[0].tipo, "Pop-Rock");
	gBandas[0].integrantes = 5;
	gBandas[0].pos = 1;

	strcpy(gBandas[1].nome, "Iron Maiden");
	strcpy(gBandas[1].tipo, "Rock");
	gBandas[1].integrantes = 4;
	gBandas[1].pos = 2;
	
	strcpy(gBandas[2].nome, "Exaltasamba");
	strcpy(gBandas[2].tipo, "Pagode");
	gBandas[2].integrantes = 4;
	gBandas[2].pos = 3;

	strcpy(gBandas[3].nome, "Avioes do Forro");
	strcpy(gBandas[3].tipo, "Forro");
	gBandas[3].integrantes = 9;
	gBandas[3].pos = 4;

	strcpy(gBandas[4].nome, "Victor e Leo");
	strcpy(gBandas[4].tipo, "Sertanejo");
	gBandas[4].integrantes = 2;
	gBandas[4].pos = 5;
	
	for(i=0;i<5;i++){
		
		printf("Nome: %s\nTipo musical: %s\nNumero de integrantes: %d\nPosicao no ranking: %d\n\n", gBandas[i].nome, gBandas[i].tipo, gBandas[i].integrantes, gBandas[i].pos);
	}
}

int main(void){
	int i, num, cont=0;
	char musica[30], banda[30];
	
	Preencher(gBandas);

	printf("Digite a posicao da banda que voce quer saber(1/5): ");
	scanf("%d", &num);
	
	if(num == 1){
		printf("Nome: %s\nTipo musical: %s\nNumero de integrantes: %d\nPosicao no ranking: %d\n\n", gBandas[0].nome, gBandas[0].tipo, gBandas[0].integrantes, gBandas[0].pos);
	}

	if(num == 2){
		printf("Nome: %s\nTipo musical: %s\nNumero de integrantes: %d\nPosicao no ranking: %d\n\n", gBandas[1].nome, gBandas[1].tipo, gBandas[1].integrantes, gBandas[1].pos);
	}

	if(num == 3){
		printf("Nome: %s\nTipo musical: %s\nNumero de integrantes: %d\nPosicao no ranking: %d\n\n", gBandas[2].nome, gBandas[2].tipo, gBandas[2].integrantes, gBandas[2].pos);
	}

	if(num == 4){
		printf("Nome: %s\nTipo musical: %s\nNumero de integrantes: %d\nPosicao no ranking: %d\n\n", gBandas[3].nome, gBandas[3].tipo, gBandas[3].integrantes, gBandas[3].pos);
	}

	if(num == 5){
		printf("Nome: %s\nTipo musical: %s\nNumero de integrantes: %d\nPosicao no ranking: %d\n\n", gBandas[4].nome, gBandas[4].tipo, gBandas[4].integrantes, gBandas[4].pos);
	}

	printf("\n\nDigite o tipo musical que voce deseja saber: ");
	scanf("%30s", musica);

	for(i=0;i<5;i++){
		if(strcmp(musica, gBandas[i].tipo) == 0){
			printf("%s\n", gBandas[i].nome);
		}
	}
	
	printf("Digite a banda que voce deseja saber: ");
	scanf("%30s", banda);

	for(i=0;i<5;i++){
		if(strcmp(banda, gBandas[i].nome) == 0){
			cont++;
		}
	}
	
	if(cont == 1){
		printf("Esta entre as minhas 5 preferidas!\n");
	}
	
	else{
		printf("Nao esta entre as minhas 5 preferidas!\n");
	}


	return 0;}

