#include <stdio.h>

void moverTorre(int casas) {
  if (casas > 0) {
    printf("Torre: Direita\n");
    moverTorre(casas - 1);
  }
}

void moverBispo(int casas) {
    if (casas > 0) {
        for (int i = 0; i < 1; i++){
            for (int j = 0; j < 1; j++){
                printf("Bispo: Cima, Direita\n");
            }
        }
        moverBispo(casas -1);
    }
}
void moverRainha(int casas) {
  if (casas > 0) {
    printf("Rainha: Esquerda\n");
    moverRainha(casas - 1);
  }
}

int main() {

  int movimentoBispo = 5, movimentoRainha = 8, movimentoTorre = 5;
  int movimentoCavalo;


  moverTorre(movimentoTorre);

  printf("\n");

  // Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do
  // Bispo cinco casas na diagonal para cima e à direita. Para representar a
  // diagonal, você imprimirá a combinação de duas direções a cada casa (ex:
  // "Cima, Direita").

  moverBispo(movimentoBispo);

  printf("\n");

  // Rainha: Move-se em todas as direções. Seu programa deverá simular o
  // movimento da Rainha oito casas para a esquerda.

  moverRainha(movimentoRainha);

  printf("\n");



  for (int casas = 0; casas < 3; casas++) {
    int i = 0;

    if (casas < 2) {
      while (i < 1) {
        printf("Cavalo: Cima\n");
        i++;
        if (i == 1)
          continue;
      }
    } else {
      while (i < 1) {
        printf("Cavalo: Direita\n");
        i++;
        if (i == 1)
          break;
      }
    }
  }

  return 0;
}
