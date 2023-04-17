/*Elabore um programa que armazena as notas de 2 provas e 1 trabalho de um número não fixo de alunos de uma turma (a nota 1 tem peso 2, a 2 tem peso 3 e a 3 peso 1), posteriormente calcule a média das três notas para cada aluno da turma. Depois imprima um relatório que compara a média de cada aluno com a média da turma informando ao lado do índice do aluno e sua média se ele está abaixo, acima ou na média da turma.*/

#include <stdio.h>
#include <stdlib.h>

void header () {
	printf ("### A PORTAL BETTER THAN GVCOLLEGE ###\n\n");
}

int main () {
	system ("clear");
	int num_alunos = 0, indx_aluno = 1;
	float *dyn_vctr, temp = 0;
	header ();
	printf ("Insira o número de \x1b[33malunos\x1b[0m na turma: ");
	dyn_vctr = (float*) malloc (4*scanf("%d", &num_alunos)*sizeof(float)+sizeof(float));
	system ("clear");
	header ();
	if (dyn_vctr == NULL) {
		printf("\x1b[31mERR:\x1b[0m Mem Overflow\n");
	} else {
		for (int i = 0; i < 4*num_alunos-1;) {
			printf ("Aluno \x1b[33m%d\x1b[0m\n\n", indx_aluno);
			for (int j = 0; j < 3; j++) {
				switch (j) {
					case 0:
						printf ("P1: ");
						break;
					case 1:
						printf ("P2: ");
						break;
					case 2:
						printf ("T1: ");
						break;
				}
				scanf ("%f", &dyn_vctr[i]);
				i++;
			}
			indx_aluno++;
			dyn_vctr[i] = (dyn_vctr[i-3] * 2 + dyn_vctr[i-2] * 3 + dyn_vctr[i-1])/6;
			temp += dyn_vctr[i];
			printf ("Média: %.1f\n\n", dyn_vctr[i]);
			i++;
		}
		system ("clear");
		header ();
		dyn_vctr[4*num_alunos+1] = temp / num_alunos;
		printf ("\tMédia da turma: \x1b[33m%.1f\x1b[0m\n\n", dyn_vctr[4*num_alunos+1]);
		indx_aluno = 1;
		for (int i = 3; i < 4*num_alunos; i += 4) {
			printf ("Aluno: %d\n\n\tMédia: ", indx_aluno);
			if (dyn_vctr[i] < dyn_vctr[4*num_alunos+1])
				printf ("\x1b[31m%.1f\x1b[0m\n\n", dyn_vctr[i]);
			else if (dyn_vctr[i] > dyn_vctr[4*num_alunos+1])
				printf ("\x1b[32m%.1f\x1b[0m\n\n", dyn_vctr[i]);
			else
				printf ("\x1b[33m%.1f\x1b[0m\n\n", dyn_vctr[i]);
			indx_aluno++;
		}
		free(dyn_vctr);
	}
}
