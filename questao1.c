#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[30];
    char endereco[50];
    char matricula[10];
    char curso[30];
}tAluno;

    tAluno gAlunos[100];

unsigned int consultaAlunosPorCurso(char *curso){
    int i, cont = 0;

    for(i=0;i<100;i++){
        if(strcmp(gAlunos[i].curso, curso) == 0)
            cont++;
    }
    return cont;

}

int main(void){

    char escolha[30];
    int numero;

    strcpy(escolha, "Computacao");

    strcpy(gAlunos[0].curso, "Computacao");
    strcpy(gAlunos[1].curso, "Computacao");
    strcpy(gAlunos[2].nome, "Fisica");

    numero = consultaAlunosPorCurso(escolha);

    printf("O numero de alunos nesse curso eh: %d", numero);

    return 0;
}
