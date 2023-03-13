/*Leia uma matriz 6 x 6, conte e escreva quantos valores maiores que 10 ela possui.*/

#define size 6

#include <stdio.h>

int main() {
	int i = 0, j = 0, matrix[size][size] = {0, 1, 2, 3, 4, 5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35}, bggr10 = 0;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (matrix[i][j] > 10) {
				bggr10++;
			}
		}
	}
	printf("A matriz especificada possuí %d valores maiores do que 10.\n", bggr10);
}