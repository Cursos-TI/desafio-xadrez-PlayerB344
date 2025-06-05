#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void movertorre(int casas){
    if (casas > 0)
    {
        printf("Direita!\n");
        movertorre( casas - 1);
    }
}
void moverRainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda!\n");
        moverRainha(casas - 1);
    }
    
}

int main() {
    // Nível Novato - Movimentação das Peças
    printf("            ### MOVIMENTAÇÃO DAS PEÇAS ###\n");
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int Bispo, Torre, Rainha, Cavalo;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("\nO Bispo irá para 5 casa a Diagonal Direita!\n");

    Bispo;
    for (Bispo = 0; Bispo < 5; Bispo++)
    {
        for (int i = 0; i < 1; i++)
        {
            printf("Cima Direita!\n");
        }
        
    }
    
    /*while (Bispo < 5)
    {
    printf("Cima Direita!\n");
    Bispo++;
    }
    */ 

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf ("\nA Torre irá para 5 casas a Direita!\n");
    movertorre(5);
        
        /*for (Torre = 0; Torre < 5; Torre++) //Movimentação da Torre de 5 casas
        {
        printf ("Direita!\n"); //Direção que irá ser o movimento
        }
        */

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\nA Rainha irá para 8 casas a Esquerda!\n");
    moverRainha(8);

        /*Rainha = 0;
        do{
        printf("Esquerda!\n"); //Indicação do local
        Rainha++;
        } while (Rainha < 8); //Movimentação da peça para 8 casas
        */

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    printf("\nO Cavalo irá para 2 casas a Baixo e para Esquerda!\n");
    
    Cavalo = 1;
    while (Cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima!\n"); //Indicando 2 movimentos para cima
        }
        printf("Direita!\n"); //Após os movimentos para cima, irá para a direita
    }
    

    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
