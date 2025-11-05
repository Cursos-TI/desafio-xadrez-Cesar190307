#include <stdio.h>

// Função recursiva para a Torre: imprime "Direita" a cada casa movida
void torre(int casas) 
{
    if (casas > 0) {
        printf("Direita\n");
        torre(casas - 1);
    }
}

// Função recursiva para o Bispo: usa recursividade para controlar o número de casas,
// e loops aninhados dentro (loop externo para vertical "Cima", interno para horizontal "Direita")
void bispo(int casas)
{
    if (casas > 0) {
        // Loop aninhado: externo para movimento vertical (Cima), interno para horizontal (Direita)
        for (int vertical = 0; vertical < 1; vertical++) {  // Apenas uma iteração para simular uma casa diagonal
            printf("Cima\n");
            for (int horizontal = 0; horizontal < 1; horizontal++) {  // Apenas uma iteração para simular uma casa diagonal
                printf("Direita\n");
            }
        }
        bispo(casas - 1);
    }
}

// Função recursiva para a Rainha: imprime "Esquerda" a cada casa movida
void rainha(int casas)
{
    if (casas > 0) {
        printf("Esquerda\n");
        rainha(casas - 1);
    }
}

int main() {
    
    int movimento_cavalo = 1;

    printf("--MOVIMENTO DA TORRE--\n");
    torre(5);
    printf("\n");  // Linha em branco para separar peças

    printf("--MOVIMENTO DO BISPO--\n");
    bispo(5);
    printf("\n");  // Linha em branco para separar peças

    printf("--MOVIMENTO DA RAINHA--\n");
    rainha(8);
    printf("\n");  // Linha em branco para separar peças

    printf("--MOVIMENTO DO CAVALO--\n");
    // Loops complexos para o Cavalo: movimento em "L" (duas casas para cima e uma para a direita)
    for (int move = 0; move < movimento_cavalo; move++) {
        // Loop para as duas casas para cima
        for (int c = 0; c < 2; c++) {
            printf("Cima\n");
        }
        // Após as duas "Cima", imprime "Direita"
        printf("Direita\n");
        // Break implícito no loop externo se necessário, mas aqui não usado
    }
    printf("\n");  // Linha em branco final

    return 0;
}
