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

int main() {		//0,1,2,3,4,5,6,7,8,9,10,11,12,13,14
	int vctr[size] = {0,3,0,4,6,0,9,5,2,7, 0,70, 6,8 ,1}, swap = 0;
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

//i + zros = size?
	//for ( enche de zero	//trim
	/*Debug*/
	
