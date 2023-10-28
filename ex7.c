#include <stdio.h>

void multiplicaMatrizes(int A[][100], int B[][100], int C[][100], int n, int m, int p) {
  int i, j, k;

  for (i = 0; i < n; i++) {
    for (j = 0; j < p; j++) {
      C[i][j] = 0;

      for (k = 0; k < m; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
}

int main() {
  int n, m, p, A[100][100], B[100][100], C[100][100];

  printf("Digite o número de linhas da matriz A: ");
  scanf("%d", &n);
  printf("Digite o número de colunas da matriz A: ");
  scanf("%d", &m);
  printf("Digite o número de colunas da matriz B: ");
  scanf("%d", &p);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("Digite o elemento A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < p; j++) {
      printf("Digite o elemento B[%d][%d]: ", i, j);
      scanf("%d", &B[i][j]);
    }
  }

  multiplicaMatrizes(A, B, C, n, m, p);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < p; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
