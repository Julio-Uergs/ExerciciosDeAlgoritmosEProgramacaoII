/*Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores elementos entre as primeiras*/

#define size 4

#include <stdio.h>

int main() {
	int i = 0, j = 0,	m1[size][size] = {0 , 1, 2, 3, 4, 5,6,7,8,9,10,11,12,13,14,15},
						m2[size][size] = {15,14,13,12,11,10,9,8,7,6, 5, 4, 3, 2, 1, 0},
						m3[size][size] = {{0}};
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {	//i still don't feel as
			if (m1[i][j] < m2[i][j]) {	//though this is the best
				m3[i][j] = m2[i][j];	//i would kind of want to
			} else {					//just get all the biggest
				m3[i][j] = m1[i][j];	//values and put them on m3
			}							//instead, but oh well...	
		}
	}
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("%d ", m3[i][j]);
		}
	}
	printf("\n");
}