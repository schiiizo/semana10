#include <stdio.h>
#include <stdlib.h>

int verificaMaior(int linhas, int colunas, int matriz[]) {
  int maior = matriz[0];
  for (int i = 1; i < linhas * colunas; i++) {
    if (matriz[i] > maior) {
      maior = matriz[i];
    }
  }
  return maior;
}

void criaMatriz(int linhas, int colunas, int matriz[]) {
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      matriz[i * colunas + j] = rand() % 100 + 1;
    }
  }
}

int main() {
  int linhas, colunas, maior;

  printf("Digite o número de linhas: ");
  scanf("%d", &linhas);
  printf("Digite o número de colunas: ");
  scanf("%d", &colunas);

  int matriz[linhas * colunas];

  criaMatriz(linhas, colunas, matriz);

  maior = verificaMaior(linhas, colunas, matriz);

  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("%d ", matriz[i * colunas + j]);
    }
    printf("\n");
  }

  printf("O maior elemento da matriz é %d\n", maior);

  return 0;
}
