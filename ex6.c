#include <stdio.h>

void somaMatrizes(int A[][100], int B[][100], int C[][100], int n, int m) {
  int i, j;

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }
}

int main() {
  int n, m, A[100][100], B[100][100], C[100][100];

  printf("Digite o número de linhas: ");
  scanf("%d", &n);
  printf("Digite o número de colunas: ");
  scanf("%d", &m);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("Digite o elemento A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("Digite o elemento B[%d][%d]: ", i, j);
      scanf("%d", &B[i][j]);
    }
  }

  somaMatrizes(A, B, C, n, m);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
