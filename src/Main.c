#include <stdio.h>
#include <stdlib.h>

/* Espaço reservado para os includes dos módulos das listas */
// Include da fila com vetor de tamanho fixo
#include "FilaVetor.h"

// Include da fila circular com redimensionamento
//#include "FilaCircular.h"

// Include da fila circular com lista encadeada
#include "FilaLista.h"

static int escolha = 0;
static char pause;

void Menu();

void Pausa() {
    printf("Insira algum número para continuar...");
    scanf("%d", &escolha);
    Menu();
}

void Inserir() {
    static int numero_de_insercao;
    static int input;

    system("cls || clear");
    printf("\t __  .__   __.      _______. _______ .______       __  .______      \n");
    printf("\t|  | |  \\ |  |     /       ||   ____||   _  \\     |  | |   _  \\     \n");
    printf("\t|  | |   \\|  |    |   (----`|  |__   |  |_)  |    |  | |  |_)  |    \n");
    printf("\t|  | |  . `  |     \\   \\    |   __|  |      /     |  | |      /     \n");
    printf("\t|  | |  |\\   | .----)   |   |  |____ |  |\\  \\----.|  | |  |\\  \\----.\n");
    printf("\t|__| |__| \\__| |_______/    |_______|| _| `._____||__| | _| `._____|\n");
    printf("\n");

    if (fila_cheia()) {
        printf("------------------------\n");
        printf("| A FILA ESTA CHEIA!!! |\n");
        printf("------------------------\n");
        printf("\n\n\n");    
       
       Pausa();
    }

    printf("\t=======================================\n");
    printf("\t| Elementos disponíveis para inserção |\n");
    printf("\t|            De 00 até 999            |\n");
    printf("\t=======================================\n");
    printf("Insira o número de elementos a serem inseridos: ");
    scanf("%d", &numero_de_insercao);

    if (numero_de_insercao>999){
        printf("\t=======================================\n");
        printf("\t|    TAMANHO MÁXIMO ULTRAPASSADO!!    |\n");
        printf("\t|-------------------------------------|\n");
        printf("\t| Logo serão inseridos 999 elementos  |\n");
        printf("\t| na lista.                           |\n");
        printf("\t=======================================\n");
        numero_de_insercao = 999;
    
    } else if (numero_de_insercao<0) {
        printf("\t=======================================\n");
        printf("\t|    TAMANHO MINIMO INALCANÇADO!!     |\n");
        printf("\t|-------------------------------------|\n");
        printf("\t| Logo NÃO serão inseridos elementos  |\n");
        printf("\t| na lista.                           |\n");
        printf("\t=======================================\n");
        
        Pausa();
    }
    
    printf("\t=======================================\n");
    for (int i=0; i<numero_de_insercao; i++){
        printf("\tInsira qual elemento você deseja inserir: ");
        scanf("%d", &input);
        if (!enfileira(input)){
            printf("\t=======================================\n");
            printf("\t| TAMANHO MAXIMO DA FILA ULTRAPASSADO |\n");
            printf("\t|-------------------------------------|\n");
            printf("\t| Foram inseridos %02d elementos na fi- |\n", i);
            printf("\t| e não foram inseridos %02d elementos  |\n", numero_de_insercao-i);
            printf("\t=======================================\n\n\n");
            break;
        }
        printf("\t=======================================\n");
    }

    printf("\n\n");
    Pausa();
}

void Remover() {
    static int numero_de_remocao;
    static int retorno;

<<<<<<< HEAD
    system("cls || clear");
    printf("\t.______       _______ .___  ___.   ______   ____    ____  _______ .______      \n");
    printf("\t|   _  \\     |   ____||   \\/   |  /  __  \\  \\   \\  /   / |   ____||   _  \\     \n");
    printf("\t|  |_)  |    |  |__   |  \\  /  | |  |  |  |  \\   \\/   /  |  |__   |  |_)  |    \n");
    printf("\t|      /     |   __|  |  |\\/|  | |  |  |  |   \\      /   |   __|  |      /     \n");
    printf("\t|  |\\  \\----.|  |____ |  |  |  | |  `--'  |    \\    /    |  |____ |  |\\  \\----.\n");
    printf("\t| _| `._____||_______||__|  |__|  \\______/      \\__/     |_______|| _| `._____|\n");
    printf("\n\n");


    if (fila_vazia()) {
        imprime_fila();
        printf("\n");

        Pausa();
    }

    printf("======================================\n");
    printf("| Elementos disponíveis para remoção |\n");
    printf("|             De 00 até %02d           |\n", tamanho_fila());
    printf("======================================\n");
    printf("Insira o número de elementos a serem removidos: ");
    scanf("%d", &numero_de_remocao);

    if (numero_de_remocao<0) {
        printf("======================================\n");
        printf("|    TAMANHO MINIMO INALCANÇADO!!    |\n");
        printf("|------------------------------------|\n");
        printf("| Logo NÃO serão removidos elementos |\n");
        printf("| da lista.                          |\n");
        printf("======================================\n");
        
        Pausa();
    } else if (numero_de_remocao>tamanho_fila()){
        printf("======================================\n");
        printf("|    TAMANHO MÁXIMO ULTRAPASSADO!!   |\n");
        printf("|------------------------------------|\n");
        printf("| Logo serão removidos todos os ele- |\n");
        printf("| mentos da lista.                   |\n");
        printf("======================================\n");
        numero_de_remocao = tamanho_fila();
    
    } 

    printf("======================================\n");
    for (int i=0; i<numero_de_remocao; i++) {
        desenfileira(&retorno);
        printf("%dº elemento: %d\n", i+1, retorno);
    }
    printf("======================================\n\n\n");

    Pausa();
}

void Imprimir() {
    system("cls || clear");
=======
static int escolha = 0;
static char pause;

void Menu();

void Pausa() {
    printf("Insira algum número para continuar...");
    scanf("%d", &escolha);
    Menu();
}

void Inserir() {
    static int numero_de_insercao;
    static int input;

    system("cls || clear");
    printf("\t __  .__   __.      _______. _______ .______       __  .______      \n");
    printf("\t|  | |  \\ |  |     /       ||   ____||   _  \\     |  | |   _  \\     \n");
    printf("\t|  | |   \\|  |    |   (----`|  |__   |  |_)  |    |  | |  |_)  |    \n");
    printf("\t|  | |  . `  |     \\   \\    |   __|  |      /     |  | |      /     \n");
    printf("\t|  | |  |\\   | .----)   |   |  |____ |  |\\  \\----.|  | |  |\\  \\----.\n");
    printf("\t|__| |__| \\__| |_______/    |_______|| _| `._____||__| | _| `._____|\n");
    printf("\n");

    printf("\t=======================================\n");
    printf("\t| Elementos disponíveis para inserção |\n");
    printf("\t|            De 00 até 999            |\n");
    printf("\t=======================================\n");
    printf("Insira o número de elementos a serem inseridos: ");
    scanf("%d", &numero_de_insercao);

    if (numero_de_insercao>999){
        printf("\t=======================================\n");
        printf("\t|    TAMANHO MÁXIMO ULTRAPASSADO!!    |\n");
        printf("\t|-------------------------------------|\n");
        printf("\t| Logo serão inseridos 999 elementos  |\n");
        printf("\t| na lista.                           |\n");
        printf("\t=======================================\n");
        numero_de_insercao = 999;
    
    } else if (numero_de_insercao<0) {
        printf("\t=======================================\n");
        printf("\t|    TAMANHO MINIMO INALCANÇADO!!     |\n");
        printf("\t|-------------------------------------|\n");
        printf("\t| Logo NÃO serão inseridos elementos  |\n");
        printf("\t| na lista.                           |\n");
        printf("\t=======================================\n");
        
        Pausa();
    }
    
    printf("\t=======================================\n");
    for (int i=0; i<numero_de_insercao; i++){
        printf("\tInsira qual elemento você deseja inserir: ");
        scanf("%d", &input);
        if (!enfileira(input)){
            printf("\t=======================================\n");
            printf("\t| TAMANHO MAXIMO DA FILA ULTRAPASSADO |\n");
            printf("\t|-------------------------------------|\n");
            printf("\t| Foram inseridos %02d elementos na fi- |\n", i);
            printf("\t| e não foram inseridos %02d elementos  |\n", numero_de_insercao-i);
            printf("\t=======================================\n\n\n");
            break;
        }
        printf("\t=======================================\n");
    }

    printf("\n\n");
    Pausa();
}

void Remover() {
    static int numero_de_remocao;
    static int retorno;

    system("cls || clear");
    printf("\t.______       _______ .___  ___.   ______   ____    ____  _______ .______      \n");
    printf("\t|   _  \\     |   ____||   \\/   |  /  __  \\  \\   \\  /   / |   ____||   _  \\     \n");
    printf("\t|  |_)  |    |  |__   |  \\  /  | |  |  |  |  \\   \\/   /  |  |__   |  |_)  |    \n");
    printf("\t|      /     |   __|  |  |\\/|  | |  |  |  |   \\      /   |   __|  |      /     \n");
    printf("\t|  |\\  \\----.|  |____ |  |  |  | |  `--'  |    \\    /    |  |____ |  |\\  \\----.\n");
    printf("\t| _| `._____||_______||__|  |__|  \\______/      \\__/     |_______|| _| `._____|\n");
    printf("\n\n");

    printf("======================================\n");
    printf("| Elementos disponíveis para remoção |\n");
    printf("|             De 00 até %02d           |\n", tamanho_fila());
    printf("======================================\n");
    printf("Insira o número de elementos a serem removidos: ");
    scanf("%d", &numero_de_remocao);

    if (numero_de_remocao>tamanho_fila()){
        printf("======================================\n");
        printf("|    TAMANHO MÁXIMO ULTRAPASSADO!!   |\n");
        printf("|------------------------------------|\n");
        printf("| Logo serão removidos todos os ele- |\n");
        printf("| mentos da lista.                   |\n");
        printf("======================================\n");
        numero_de_remocao = tamanho_fila();
    
    } else if (numero_de_remocao>tamanho_fila()){
        printf("======================================\n");
        printf("|    TAMANHO MINIMO INALCANÇADO!!    |\n");
        printf("|------------------------------------|\n");
        printf("| Logo NÃO serão removidos elementos |\n");
        printf("| da lista.                          |\n");
        printf("======================================\n");
        
        Pausa();
    }

    printf("======================================\n");
    for (int i=0; i<numero_de_remocao; i++) {
        desenfileira(&retorno);
        printf("%dº elemento: %d\n", i+1, retorno);
    }
    printf("======================================\n\n\n");

    Pausa();
}

void Imprimir() {
    system("cls || clear");
>>>>>>> 254965cc9fcf769a9cff3b39e783588f002ca91a
    printf("\t __  .___  ___. .______   .______       __  .___  ___.  __  .______      \n");
    printf("\t|  | |   \\/   | |   _  \\  |   _  \\     |  | |   \\/   | |  | |   _  \\     \n");
    printf("\t|  | |  \\  /  | |  |_)  | |  |_)  |    |  | |  \\  /  | |  | |  |_)  |    \n");
    printf("\t|  | |  |\\/|  | |   ___/  |      /     |  | |  |\\/|  | |  | |      /     \n");
    printf("\t|  | |  |  |  | |  |      |  |\\  \\----.|  | |  |  |  | |  | |  |\\  \\----.\n");
    printf("\t|__| |__|  |__| | _|      | _| `._____||__| |__|  |__| |__| | _| `._____|\n");
    printf("\n\n");

    imprime_fila();
    printf("\n");

    Pausa();
}

void Reiniciar() {
    system("cls || clear");
    printf("\t.______       _______  __  .__   __.  __    ______  __       ___      .______      \n");
    printf("\t|   _  \\     |   ____||  | |  \\ |  | |  |  /      ||  |     /   \\     |   _  \\     \n");
    printf("\t|  |_)  |    |  |__   |  | |   \\|  | |  | |  ,----'|  |    /  ^  \\    |  |_)  |    \n");
    printf("\t|      /     |   __|  |  | |  . `  | |  | |  |     |  |   /  /_\\  \\   |      /     \n");
    printf("\t|  |\\  \\----.|  |____ |  | |  |\\   | |  | |  `----.|  |  /  _____  \\  |  |\\  \\----.\n");
    printf("\t| _| `._____||_______||__| |__| \\__| |__|  \\______||__| /__/     \\__\\ | _| `._____|\n");
    printf("\n");

    destroi_fila();
    cria_fila();

    printf("\n\n");
    printf("\t==========================================\n");
    printf("\t|         A fila foi reiniciada.         |\n");
    printf("\t==========================================\n\n\n");

    Pausa();
}

void Sair() {
    destroi_fila();

    system("cls || clear");
    printf("\t.______   ____    ____  _______ \n");
    printf("\t|   _  \\  \\   \\  /   / |   ____|\n");
    printf("\t|  |_)  |  \\   \\/   /  |  |__   \n");
    printf("\t|   _  <    \\_    _/   |   __|  \n");
    printf("\t|  |_)  |     |  |     |  |____ \n");
    printf("\t|______/      |__|     |_______|\n");
    printf("\n");

    printf("\t==========================================\n");
    printf("\t| Muito Obrigadx por usar este programa. |\n");
    printf("\t==========================================\n\n\n");

}

void Menu() {
    system("cls || clear");
    printf("\t\t.___  ___.  _______ .__   __.  __    __  \n");
    printf("\t\t|   \\/   | |   ____||  \\ |  | |  |  |  |\n");
    printf("\t\t|  \\  /  | |  |__   |   \\|  | |  |  |  |\n");
    printf("\t\t|  |\\/|  | |   __|  |  . `  | |  |  |  |\n");
    printf("\t\t|  |  |  | |  |____ |  |\\   | |  `--'  |\n");
    printf("\t\t|__|  |__| |_______||__| \\__|  \\______/ \n");
    printf("\n");
    printf("\t\t========================================\n");
    printf("\t\t|         CENTRAL DE OPÇÕES            |\n");
    printf("\t\t|--------------------------------------|\n");
    printf("\t\t|                                      |\n");
    printf("\t\t| 1. Inserir elementos na fila         |\n");
    printf("\t\t| 2. Remover elementos da fila         |\n");
    printf("\t\t| 3. Imprimir a fila                   |\n");
    printf("\t\t| 4. Reiniciar a fila                  |\n");
    printf("\t\t| 5. Encerrar o programa               |\n");
    printf("\t\t|                                      |\n");
    printf("\t\t========================================\n");
    printf("\n\n\n");

    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    while(escolha<1 || escolha>5) {
        system("cls || clear");
        printf("\t\t.___  ___.  _______ .__   __.  __    __  \n");
        printf("\t\t|   \\/   | |   ____||  \\ |  | |  |  |  |\n");
        printf("\t\t|  \\  /  | |  |__   |   \\|  | |  |  |  |\n");
        printf("\t\t|  |\\/|  | |   __|  |  . `  | |  |  |  |\n");
        printf("\t\t|  |  |  | |  |____ |  |\\   | |  `--'  |\n");
        printf("\t\t|__|  |__| |_______||__| \\__|  \\______/ \n");
        printf("\n");
        printf("\t\t========================================\n");
        printf("\t\t|         CENTRAL DE OPÇÕES            |\n");
        printf("\t\t|--------------------------------------|\n");
        printf("\t\t|                                      |\n");
        printf("\t\t| 1. Inserir elementos na fila         |\n");
        printf("\t\t| 2. Remover elementos da fila         |\n");
        printf("\t\t| 3. Imprimir a fila                   |\n");
        printf("\t\t| 4. Reiniciar a fila                  |\n");
        printf("\t\t| 5. Encerrar o programa               |\n");
        printf("\t\t|                                      |\n");
        printf("\t\t========================================\n");
        printf("\n\n\n");

        printf(" --------------------- \n");
        printf("| OPÇÃO %d INVÁLIDA!! |\n", escolha);
        printf(" --------------------- \n");
        printf("Tente novamente: ");
        scanf("%d", &escolha);
    }

    switch(escolha) {
        case 1:
            Inserir();
        break;
        
        case 2:
            Remover();
        break;
        
        case 3:
            Imprimir();
        break;

        case 4:
            Reiniciar();
        break;
        
        case 5:
            Sair();
        break;

        default:
            printf("Opção secreta que nunca (provavelmente) vai acontecer!\n");
            printf("Conspirações do mal e golpes de estado estão armazenados aqui!\n");
            printf("MUAHAHAHAHAHAHAHA\n");
            printf("Eh meme :)\n");
        break;
    }
}

int main(){
    cria_fila();
    Menu();

    return 0;
}