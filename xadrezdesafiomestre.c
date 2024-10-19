#include <stdio.h>




int main(){





//MOVIMENTAÇÃO PEÇA BISPO

//início da estrutura de repetição de movimentação da peça bispo

    printf("Movimentando o BISPO \n");

    for (int bispo = 0; bispo < 3; bispo++)
    {
        for (int bispo1 = 0; bispo1 < 1; bispo1++)
        {
            printf("diagonal direita cima \n"); //imprime o resultado da movimentação da peça
        }
            printf("diagonal esquerda cima\n");
    }

    printf("\n");
    printf("\n");

//MOVIMENTAÇÃO PEÇA CAVALO
    printf("Movimentando o CAVALO \n");

for (int cavalocima = 0, cavalodireita = 0; cavalocima < 1 && cavalocima > -1; cavalocima++) //definição do movimento da peça
{
    while (cavalodireita < 3)//loop do segundo movimento
    {
        printf("direita\n");//imprime o resultado da movimentação da peça
        cavalodireita++; //incrementa o valor da variável
    }
       printf("cima\n");//imprime o resultado da movimentação da peça para completar a movimentação em L
    }

    return 0;
}