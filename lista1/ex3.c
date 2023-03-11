/*Crie um vetor de 15 posições de inteiros e posteriormente realize a compactação dele, isto é, elimine as posições com valor zero avançando uma posição, com os com os valores subsequentes do vetor. Dessa forma todos “zeros” devem ficar para as posições finais do vetor.*/

#define size 15
#define srch 0
#include <stdio.h>

void prntvctr(int vctr[size]) {
	int i = 0;
	for (i; i < size; i++) {
		printf("%d", vctr[i]);
		if (i < (size - 1)) {
		printf(", ");
		}
	}
}

int main() {		
	int vctr[size] = {17,29,32,0,0,0,54,193,84,61,79,12,11,0,0}, swap = 0;
	printf("Vetor original:\t {");
	prntvctr(vctr);
	printf("}\n");
	for (int i = 0; i < size - 1; i++) { //mv
		if (vctr[i] == srch && vctr[i + 1] != srch){
			swap = vctr[i];
			vctr[i] = vctr[i + 1];
			vctr[i + 1] = swap;
			i = 0;
		}
	}
	printf("Vetor modificado:{");
	prntvctr(vctr);
	printf("}\n");
}
