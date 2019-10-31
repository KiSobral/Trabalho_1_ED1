#include <stdio.h>
#include <stdlib.h>

#include "FilaLista.h"


int cria_fila(){  
    tamanho = 0;

    fila = malloc(sizeof(celula));
    fila->proximo = fila;
    
    if(fila==NULL) return 0;

    return 1;
}

int enfileira(int x){
    celula *novo = malloc(sizeof(celula));

    if(novo==NULL) return 0;

    novo->proximo = fila->proximo;
    fila->proximo = novo;
    fila->dado = x;
    fila = novo;
    tamanho++;
 
    return 1;
}

int desenfileira(int *pop){
    if(fila_vazia()) return 0;

    celula *lixo = fila->proximo;
    *pop = lixo->dado;
    fila->proximo = lixo->proximo;

    free(lixo);
    tamanho--;

    return 1;
}

int fila_cheia() {
    return 0;
}

int tamanho_fila(){
    return tamanho;
}

int fila_vazia(){
    return fila->proximo==fila;
}

void imprime_fila(){

    if (fila_vazia()) {
        printf("------------------------\n");
        printf("| A FILA ESTA VAZIA!!! |\n");
        printf("------------------------\n");
        printf("\n\n");    
       
        return;
    } 

    printf("\t");
    for(celula *j = fila->proximo; j != fila; j = j->proximo) printf("-------");
    printf("-\n");

    printf("\t");
    for(celula *j = fila->proximo; j != fila; j = j->proximo) printf("| %04d ", j->dado);
    printf("|\n");

    printf("\t");
    for(celula *j = fila->proximo; j != fila; j = j->proximo) printf("-------");
    printf("-\n");

    printf("\t");
    for(celula *j = fila->proximo; j != fila; j = j->proximo) {
        if (j==fila->proximo)      printf("   P   ");
        else if (j->proximo==fila) printf("   U   ");
        else                       printf("       ");
  
    }

    printf("\n\n");
    return;
}

int destroi_fila() {
    celula *lixo;

    for (celula *i=fila; i->proximo!=fila; i=i->proximo) {
        lixo = i;
        free(lixo);
    }

    free(fila);
    tamanho = 0;

    if (fila!=NULL) return 0;
    else return 1;
}
