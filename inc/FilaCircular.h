#ifndef FILACIRCULAR_H
#define FILACIRCULAR_H


int N;
int p;
int u;
int *fila;

int cria_fila();
int enfileira(int y);
int desenfileira(int *pop);
int fila_cheia();
int fila_vazia();
int tamanho_fila();
void imprime_fila();
int redimensiona_fila();

#endif