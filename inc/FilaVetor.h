#ifndef FILAVETOR_H
#define FILAVETOR_H

static int N=5;
int p;
int u;
int *fila;

int cria_fila();
int enfileira(int x);
int desenfileira(int *pop);
int fila_cheia();
int fila_vazia();
int tamanho_fila();
void imprime_fila();

#endif