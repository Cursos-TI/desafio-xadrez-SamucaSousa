#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas e Loops Aninhados

// Implementando as funções recursivas
void movimentoTorre(int torre){
    if (torre > 0){
        printf("Direta\n");
        movimentoTorre(torre - 1);
    }
}

void movimentoBispo(int bispo){
    if(bispo > 0){
        // Loop Externo (Vertical) - Executa 1 vez por chamada recursiva
        for(int i = 0; i < 1; i++){
            printf("Cima\n");
            // Loop Interno (Horizontal) - Executa 1 vez por chamada recursiva
            for(int j = 0; j < 1; j++){
                printf("Direita\n");
            }
        }
        movimentoBispo(bispo - 1);
    }
}

void movimentoRainha(int rainha){
    if (rainha > 0){
        printf("Esquerda\n");
        movimentoRainha(rainha - 1);
    }
}

void movimentoCavalo() {
    // Inicializamos i (vertical) e j (horizontal)
    // A condição foca no movimento principal (vertical)
    for (int i = 1, j = 1; i <= 3; i++) {
        if(i <= 2){
            printf("Cima\n");
            continue;
        }

        while(j <= 1){
            printf("Direta\n");
            j++;
        }
    }
}

int main(){

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;


    printf("Movimento da Torre:\n");
    movimentoTorre(casasTorre);
    printf("\n\n");

    printf("Movimento do Bispo:\n");
    movimentoBispo(casasBispo);
    printf("\n\n");

    printf("Movimento da Rainha:\n");
    movimentoRainha(casasRainha);
    printf("\n\n");

    printf("Movimento do Cavalo\n");
    movimentoCavalo();

    return 0;
}
