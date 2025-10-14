#include <stdio.h>

int main(){

    int t = 1;

    printf("\n --MOVIMENTO DA TORRE-- \n");

    while (t <= 5) // foi determinado o numero de casas que a torre anda
    {
        printf("Direita\n");

        t++; // incrementa ate a condição for falsa
    }

    int r = 1;

    printf("\n --MOVIMENTO DA RAINHA-- \n");

    do
    {
        printf("Esquerda\n");

        r++;

    } while (r <= 8);

    printf("\n --MOVIMENTO DO BISPO-- \n");

    for (int b = 1; b <= 5; b++)
    {
        printf("Cima, Direita\n");
    }
    

    
    
       
    return 0;
}