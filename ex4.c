#include <stdio.h>
#include <stdbool.h>

bool verificaMatrizDiagonal(int matriz[], int linhas, int colunas) {
    if (linhas != colunas) {
        return false; 
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i != j && matriz[i * colunas + j] != 0) {
                return false; 
            }
        }
    }

    return true; 
}

int main() {
    int matriz[3][3] = {
        {1, 0, 0},
        {0, 2, 0},
        {0, 0, 3}
    };

    int linhas = 3;
    int colunas = 3;

    bool resultado = verificaMatrizDiagonal((int *)matriz, linhas, colunas);

    if (resultado) {
        printf("A matriz é uma matriz diagonal.\n");
    } else {
        printf("A matriz não é uma matriz diagonal.\n");
    }

    return 0;
}
