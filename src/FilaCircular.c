#include <stdio.h>
#include <stdlib.h>

#include "FilaCircular.h"

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
    if (fila_cheia()){
        if (!redimensiona_fila()) return 0;
    } 

    fila[u++] = x;
    if (u==N) u=0;

    return 1;
}

int desenfileira(int *pop) {
    if (fila_vazia()) return 0;

    *pop = fila[p];
    p++;

    if (p==N) p=0;

    return 1;
}

int fila_cheia() {
    return ((u+1) % N) == p;
}

int fila_vazia() {
    return p==u;
}

int tamanho_fila() {
    if (p>u) return (N+u-p);
    else     return (u-p);
}

void imprime_fila() {
    if (fila_vazia()) {
        printf("------------------------\n");
        printf("| A FILA ESTA VAZIA!!! |\n");
        printf("------------------------\n");
        printf("\n\n");    
        return;
    } 
 
    for (int i=0; i<N; i++) printf("-------");
    printf("-\n");
    
    for (int i=0; i<N; i++) {
        if (p<u) {
            if (i<p || i>=u) printf("| null ");
            else             printf("| %04d ", fila[i]);
        } else {
            if (i<u || i>=p) printf("| %04d ", fila[i]);
            else             printf("| null ");
        }
    } 
    printf("|\n");
    
    for (int i=0; i<N; i++) printf("-------");
    printf("-\n");
    
    for (int i=0; i<N; i++) {
        if (i==p)          printf("   P   ");
        else if (i==(u-1)) printf("   U   ");
        else               printf("       ");
    }

    printf("\n\n");
    return;
}

int redimensiona_fila() {
    int i, j;
    
    fila = realloc(fila, 2*N*sizeof(int));

    if (fila==NULL) return 0;

    if (u<p) {
        if (u < N-p) {
            for (i=N, j=0; j<u; i++, j++) fila[i] = fila[j];
            u+=N;

        } else {
            for (i=N+p, j=p; j<N; i++, j++) fila[i] = fila[j];
            p+=N;

        }
    }

    N*=2;
    return 1;
}