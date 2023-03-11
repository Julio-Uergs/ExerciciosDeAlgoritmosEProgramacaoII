/*Crie um vetor de 16 posições de inteiros (receba os valores pelo teclado para serem armazenados). Posteriormente, troque os 8 primeiros valores pelos 8 últimos e vice-e-versa. Escreva ao final o vetor obtido.*/
#include <stdio.h>
void imprime(int vctr[16]) {
	for (int i = 0; i<16; i++) {
		printf("%d", vctr[i]);
		if (i<15) {
		printf(", ");
		}
	}
}
int main () {
	int vctr[16], tmp[8];
	printf("Por favor, insira 16 valores inteiros, destes, os 8 primeiros serão posicionados ao final e os 8 últimos, no início.");
	for (int i; i<16; i++) {
		scanf(" %d", &vctr[i]);
	}
	printf("Vetor original:\t {");
	imprime(vctr);
	printf("}\n");
	for (int i = 0; i<8; i++) { 
		tmp[i] = vctr[i]; 		//copia os primeiros 8 para um vetor auxiliar.
		vctr[i] = vctr[i+8]; 	//copia os 8 últimos para as primeiras 8 posições.
		vctr[i+8] = tmp[i];		//copia do vetor auxiliar para as 8 últimas posições.
	}
	printf("Vetor modificado:{");
	imprime(vctr);
	printf("}\n");
}
//hmmm
