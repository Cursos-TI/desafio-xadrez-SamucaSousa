#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Implementação de Movimentação do Torre
    // Peça Torre | Movimentos: 5 casas para direita
    // Estrutura escolhida: FOR (Ideal quando sabemos o numero exato de repetições)

    printf("Movimento da Torre:\n");
    for(int i = 1; i <= casasTorre; i++){
        printf("{Direta} ");
    };
    printf("\n");

    // Implementação de Movimentação do Bispo
    // Peça: Bispo | Movimento: 5 casas para Cima e Direita (Diagonal)
    // Estrutura escolhida: WHILE (executa enquanto a condição for verdadeira)

    printf("Movimento do Bispo:\n");
    int contadorBispo = 1;

    while(contadorBispo <= casasBispo){
        printf("{Cima} {Direita} ");
        contadorBispo++;
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Peça: Rainha | Movimento: 8 casas para Esquerda
    // Estrutura escolhida: WHILE (executa enquanto a condição for verdadeira)

    printf("Movimento da Rainha:\n");
    int contadorRainha = 1;
    
    do{
        printf("{Esquerda} ");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
