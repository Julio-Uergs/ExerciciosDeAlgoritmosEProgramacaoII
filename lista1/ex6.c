/*Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.*/

#define size 5

#include <stdio.h>

int main() {
	int i = 0, j = 0, matrix[size][size]; 	//No caso, só inicializar a matriz já preencida com zeros e só utilizar um for para
	for (i = 0; i < size; i++) {			//preencher com 1s na diagonal principal seria mais eficiente, mas eu procuro
		for (j = 0; j < size; j++) {		//seguir a orientação a risco, declarei a matriz, preenci com 1s primeiro e com
			if (i == j) {					//zeros os demais elementos.
				matrix[i][j] = 1;
			} else {
				matrix[i][j] = 0;
			}
		}
	}
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("%d ", matrix[i][j]); 
		} printf("\n");
	}
}