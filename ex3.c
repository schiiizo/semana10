#include <stdio.h>

int somaDiagonalSecundaria(int matriz[][100], int n) {
  int i, soma = 0;

  for (i = 0; i < n; i++) {
    soma += matriz[i][n - 1 - i];
  }

  return soma;
}


int main() {
  int n, matriz[100][100];

  printf("Digite o tamanho da matriz: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Digite o elemento [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  int soma = somaDiagonalSecundaria(matriz, n);

  printf("A soma dos valores da diagonal secundária é %d\n", soma);

  return 0;
}
