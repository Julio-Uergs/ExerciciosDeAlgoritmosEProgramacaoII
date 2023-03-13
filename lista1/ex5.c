/*Crie uma matriz  5 x 5 de inteiros e posteriormente (após o preenchimentos dos elementos via teclado), escreva a localização (linha e a coluna) do maior valor.*/

#define size 5

#include <stdio.h>

int main() {
	int i = 0, j = 0, matrix[size][size], bigval = 0, pos[2];
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("Insira um valor para a posição %dx%d da matriz:", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (bigval < matrix[i][j]) {
				bigval = matrix[i][j];
				pos[0] = i;
				pos[1] = j;
				
			}
		}
	}
	printf("O maior valor é %d e se encontra na posição %dx%d\n", bigval, pos[0] + 1, pos[1] + 1);
}