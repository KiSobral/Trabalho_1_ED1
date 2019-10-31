#include <stdio.h>
#include <stdlib.h>

#include "FilaVetor.h"


int cria_fila(){
    p=0;
    u=0;
    N=5;

    if (fila==NULL){
        fila = malloc(N*sizeof(int));
    
    } else{
        free(fila);
        fila = malloc(N*sizeof(int));
    
    }

    if (fila==NULL) return 0;
    return 1;
}

int enfileira(int x) {
    if (fila_cheia()) return 0; 

    fila[u++] = x;
    return 1;
}

int desenfileira(int *pop){
    if (fila_vazia()) return 0;

    *pop = fila[p++];
    return 1;
}

int fila_cheia() {
    return u==N;
}

int fila_vazia() {
    return p==u;
}

int tamanho_fila() {
    return u-p;
}

void imprime_fila() {
    if (fila_vazia()) {
        printf("\t------------------------\n");
        printf("\t| A FILA ESTA VAZIA!!! |\n");
        printf("\t------------------------\n");
        printf("\n\n");    
        return;
    } 
 
    printf("\t");
    for (int i=0; i<N; i++) printf("-------");
    printf("-\n");
    
    printf("\t");
    for (int i=0; i<N; i++) {
        if (i<p || i>=u) printf("| null ");
        else             printf("| %04d ", fila[i]);
    
    } 
    printf("|\n");
    
    printf("\t");
    for (int i=0; i<N; i++) printf("-------");
    printf("-\n");
    
    printf("\t");
    for (int i=0; i<N; i++) {
        if (i==p)          printf("   P   ");
        else if (i==(u-1)) printf("   U   ");
        else               printf("       ");
    
    }

    printf("\n\n");
    return;
}

int destroi_fila() {
    free(fila);
    p=0;
    u=0;
    N=0;

    if (fila!=NULL) return 0;
    else return 1;    
}
