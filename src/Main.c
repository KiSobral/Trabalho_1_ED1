#include <stdio.h>
#include <stdlib.h>

int main(){
    int pop;
    
    system("cls || clear");

    cria_fila();
    enfileira(5);
    enfileira(4);
    enfileira(9);
    enfileira(1);

    imprime_fila();

    cria_fila();
    imprime_fila();

    return 0;
}