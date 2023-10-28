#include <stdio.h>

int calculaTraco(int matriz[][100], int n) {
  int i, soma = 0;

  for (i = 0; i < n; i++) {
    soma += matriz[i][i];
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


  int traço = calculaTraco(matriz, n);


  printf("O traço da matriz é %d\n", traço);

  return 0;
}
