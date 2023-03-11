/*Crie um vetor de 15 posições de inteiros e posteriormente realize a compactação dele, isto é, elimine as posições com valor zero avançando uma posição, com os com os valores subseqüentes do vetor. Dessa forma todos “zeros” devem ficar para as posições finais do vetor.*/

#define size = 15
#include <stdio.h>

void imprime(int vctr[size]) {
	for (int i = 0; i<size; i++) {
		printf("%d", vctr[i]);
		if (i<(size-1)) {
		printf(", ");
		}
	}
}

int main() {
	int vctr[size] = {0,1,2,3,4,6,0,9,5,2,7,0,70,6,8};
	/*printf("Por favor, insira 15 valores inteiros, destes, os 8 primeiros serão posicionados ao final e os 8 últimos, no início.");
	for (int i; i<16; i++) {
		scanf(" %d", &vctr[i]);
	}*/
	printf("Vetor original:\t {");
	imprime(vctr);
	printf("}\n");
	for (int i = 0; i<15; i++) {
		
	}