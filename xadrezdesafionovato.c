#include <stdio.h>

int main() {
    int bispo, torre, rainha; //definição das variáveis de cada peça a ser movimentada

    //peças recebendo o valor da sua posição atual
    bispo = 0; 
    torre = 0;
    rainha = 0;

    //imprime o valor da posição atual da peça
    printf("Bispo na posição %d\n", bispo);
    
    //estrutura de repetição de movimentação da peça bispo
    while (bispo <=4)
    {
        printf("diagonal direita, cima\n"); //imprime o resultado da movimentação da peça
        bispo++; //incrementa o valor da variável
    }
    
    //imprime o valor da posição atual da peça
    printf("torre na posição %d\n", torre); 

    //estrutura de repetição de movimentação da peça torre
    while (torre <=4)
    {
        printf("direita\n");//imprime o resultado da movimentação da peça
        torre++; //incrementa o valor da variável
    }
    
    //imprime o valor da posição atual da peça
     printf("rainha na posição %d\n", rainha);
    //estrutura de repetição de movimentação da peça rainha
    while (rainha <=7)
    {
        printf("esquerda\n");//imprime o resultado da movimentação da peça
        rainha++; //incrementa o valor da variável
    }    

    return 0;
}