#include <stdio.h>
#include <stdlib.h>

#include "FilaLista.h"

int cria_fila(){  
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
    fila =  novo;
    size++;
 
    return 1;
}

int desenfileira(int *pop){
    if(fila_vazia()) return 0;

    celula *lixo = fila->proximo;
    *pop = lixo->dado;
    fila->proximo = lixo->proximo;

    free(lixo);
    size--;

    return 1;
}

int fila_cheia() {
    printf("-----------------------------\n");
    printf("| A FILA É INFINiTA BOCÓ!!! |\n");
    printf("-----------------------------\n");
    printf("\n\n");    
    
    return 1;
}

int tamanho_fila(){
    return size;
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

    for(celula *j = fila->proximo; j != fila; j = j->proximo) printf("-------");
    printf("-\n");

    for(celula *j = fila->proximo; j != fila; j = j->proximo) printf("| %04d ", j->dado);
    printf("|\n");

    for(celula *j = fila->proximo; j != fila; j = j->proximo) printf("-------");
    printf("-\n");

    printf("\n\n");
}

