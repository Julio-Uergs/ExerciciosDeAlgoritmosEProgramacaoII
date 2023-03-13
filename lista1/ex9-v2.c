/*Leia uma matriz 4 x 4 e troque os valores da 1ª.linha pelos da 4ª.coluna, vice-e-versa. Escrever ao final a matriz obtida*/

#define size 4

#include <stdio.h>

void prntmat(int matrix[size][size]) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d\t", matrix[i][j]);
		} printf("\n");
	}
}

void prntmatv2(int matrix[size][size], int saveme) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (j == 3) {
				if (i == 0) {
					printf("%d/%d", matrix[i][j], saveme);
				} else {
					printf("%d", matrix[i][j]);
				}
			} else {
				printf("%d\t", matrix[i][j]);
			} 
		} printf("\n");
	}
}

int main() {
	int matrix[size][size] = {0, 1, 2, 3, 4, 5,6,7,8,9,10,11,12,13,14,15}, aux[size] = {0}, saveme = matrix[0][0];
	prntmat(matrix);
	printf("\n");
	for (int i = 0; i < size; i++) {
		aux[i] = matrix[0][i];
		matrix[0][i] = matrix[i][3];
		matrix[i][3] = aux[i];
	}
	//matrix[0][3] = matrix[3][3]; Old method to my madness
	matrix[3][3] = matrix[0][0];
	prntmatv2(matrix, saveme);
}