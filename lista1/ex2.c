/*Crie um vetor de 20 posições de inteiros. Após o vetor estar todo preenchido com valores informados pelo teclado, solicite ao usuário a informação de um número, o qual será procurado no vetor. Se o valor for encontrado informe em que posição ele se encontra (a primeira, caso ele esteja armazenado em mais de uma posição). Utilize mensagem adequada para o caso do valor não estar armazenado no vetor.*/

#include <stdio.h>
int main() {
	int vctr[20], srch, fnd = 0;
	printf("Por favor, insira 20 valores inteiros (separe-os com a tecla 'enter'): \n");
	for (int i = 0; i<20; i++) {
		scanf(" %d", &vctr[i]);
	}
	printf("Insira um número a ser pesquisado.");
	scanf(" %d", &srch);
	for (int i = 0; i<20; i++) {
		if (vctr[i] == srch && fnd == 0) {
			printf("O valor %d está na posição %d\n", srch, i);
			fnd = 1;
		}		
	}
	if (fnd == 0) {
		printf("O valor %d não está presente na lista informada.\n", srch);
	}
}
