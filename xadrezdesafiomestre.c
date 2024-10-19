#include <stdio.h>

//RECURSIVIDADE RAINHA
void movimentacaoRainha(int r){
    //imprime o valor da posição atual da peça
    printf("rainha na posição %d\n", r);
    //estrutura de repetição de movimentação da peça rainha
    while (r <=7)
    {
        printf("cima\n");//imprime o resultado da movimentação da peça
        r++; //incrementa o valor da variável
    }    
    printf("\n");

}

//RECURSIVIDADE TORRE
void movimentacaoTorre(int t){
     //imprime o valor da posição atual da peça
    printf("torre na posição %d\n", t); 

    //estrutura de repetição de movimentação da peça torre
    while (t <=4)
    {
        printf("direita\n");//imprime o resultado da movimentação da peça
        t++; //incrementa o valor da variável
    }
    printf("\n");

}

int main(){

int rainha = 0;
movimentacaoRainha(rainha);

int torre = 0;
movimentacaoTorre(torre);

//MOVIMENTAÇÃO PEÇA BISPO

//início da estrutura de repetição de movimentação da peça bispo

    printf("Movimentando o BISPO \n");
    printf("\n");

    for (int bispo = 0; bispo < 3; bispo++)
    {
        for (int bispo1 = 0; bispo1 < 1; bispo1++)
        {
            printf("diagonal direita cima \n"); //imprime o resultado da movimentação da peça
        }
            printf("diagonal esquerda cima\n");
    }

    printf("\n");

//MOVIMENTAÇÃO PEÇA CAVALO
    printf("Movimentando o CAVALO \n");
    printf("\n");

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