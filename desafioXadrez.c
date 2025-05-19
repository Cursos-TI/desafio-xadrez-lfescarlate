#include <stdio.h>

int main() {

    int movimentoBispo = 0, movimentoRainha = 0;

    //Simular o movimento de três peças Torre, Bispo e Rainha. Cada peça tem que utilizar
    //uma estrutura de repetição diferente (for, while e do-while) para simular o movimento

    //O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça


    //Torre: Move-se em linha reta horizontalmente ou verticalmente. 
    //Seu programa deverá simular o movimento da Torre cinco casas para a direita.
    for (int i = 0; i < 5; i++) {
        printf("Torre: Direita\n"); // Imprime a direção do movimento
    }
    
    //Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita.
    //Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").

    while (movimentoBispo < 5) {
        printf("Bispo: Cima, Direita\n");
        movimentoBispo++;
    }

    //Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
    do {
        printf("Rainha: Esquerda\n");
        movimentoRainha++;
    } while (movimentoRainha < 8);

    return 0;
}