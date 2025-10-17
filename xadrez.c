#include <stdio.h>

int main(){

    int t = 1;
    int r = 1;
    int c = 1;

    printf("\n --MOVIMENTO DA TORRE-- \n");

    while (t <= 5) // foi determinado o numero de casas que a torre anda
    {
        printf("Direita\n");

        t++; // incrementa ate a condição for falsa
    }


    printf("\n --MOVIMENTO DA RAINHA-- \n");

    do
    {
        printf("Esquerda\n");

        r++;

    } while (r <= 8);

    printf("\n --MOVIMENTO DO BISPO-- \n");

    for (int b = 1; b <= 5; b++) //Padrão for (variavel, condição, incremento)
    {
        printf("Cima, Direita\n");
    }
    
    printf("\n --MOVIMENTO DO CAVALO-- \n");

    while (c--)
    {
        for (int c = 0; c < 2; c++) 
        {
            printf("Baixo\n"); 
        }
        printf("Esquerda\n");
    }
    

    
    
       
    return 0;
}