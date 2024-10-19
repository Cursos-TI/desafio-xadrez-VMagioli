#include <stdio.h>

int main() {

int cavalocima, cavalodireita; //declaração de variáveis

for (cavalocima = 0; cavalocima < 1 ; cavalocima++) //definição do primeiro movimento da peça
{
    while (cavalodireita < 3)//loop do segundo movimento
    {
        printf("direita\n");//imprime o resultado da movimentação da peça
        cavalodireita++; //incrementa o valor da variável
    }
       printf("cima\n");//imprime o resultado da movimentação da peça para completar a movimentação em L
    }

    printf("\n");

for (cavalodireita = 0; cavalodireita < 1 ; cavalodireita++) //nova movimentação da peça
{
    while (cavalocima <= 3)
    {
        printf("cima\n");//imprime o resultado da movimentação da peça
        cavalocima++; //incrementa o valor da variável
    }
       printf("direita\n");//imprime o resultado da movimentação da peça para completar a movimentação em L
    }

    return 0;
}