/*Considere um vetor de trajetórias de 9 elementos, onde cada elemento possui o valor do próximo elemento do vetor a ser lido. 
Índice      1	2	3	4	5	6	7	8	9  
Valor       5	7	6	9	2	8	4	0	3 
Assim, a seqüência da leitura seria 1, 5, 2, 7, 4, 9, 3, 6, 8, 0
Faça um algoritmo que seja capaz de ler esse vetor e seguir a trajetória.*/

#define vctrsiz 9

#include <stdio.h>

int main(){
	int i = 0, index[vctrsiz] = {1,2,3,4,5,6,7,8,9}, value[vctrsiz] = {5,7,6,9,2,8,4,0,3};
	for (i; i < vctrsiz; i++) {
		if (index[i] != 0) {
			printf("%d, %d",index[i], value[index[i] - 1]);
			if (index[i + 1] != 0) {
			printf(", ");
			}
		}
	}
	printf("\n");
}