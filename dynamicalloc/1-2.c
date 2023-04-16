/*Elabore um programa que armazena as notas de 2 provas e 1 trabalho de um número não fixo de alunos de uma turma (a nota 1 tem peso 2, a 2 tem peso 3 e a 3 peso 1), posteriormente calcule a média das três notas para cada aluno da turma. Depois imprima um relatório que compara a média de cada aluno com a média da turma informando ao lado do índice do aluno e sua média se ele está abaixo, acima ou na média da turma.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num_alunos = 0, alunos = 1;
	float *dyn_vctr, temp = 0;
	printf("Insira o número de \x1b[33malunos\x1b[0m na turma: ");
	dyn_vctr = (float*) malloc(4*scanf("%d", &num_alunos)*sizeof(float)+sizeof(float));
	if (dyn_vctr == NULL) {
		printf("\x1b[31mERR:\x1b[0m Mem Overflow\n");
	} else {
		for (int i = 0; i < 4*num_alunos-1;) {
			printf("Aluno \x1b[33m%d\x1b[0m\n", alunos);
			printf("Nota \x1b[33mP1\x1b[0m: ");
			scanf ("%f", &dyn_vctr[i]);
			printf("\n");
			temp += dyn_vctr[i];
			i++;
			printf("Nota \x1b[33mP2\x1b[0m: ");
			scanf ("%f", &dyn_vctr[i]);
			printf("\n");
			temp += dyn_vctr[i];
			i++;
			printf("Nota \x1b[33mT1\x1b[0m: ");
			scanf ("%f", &dyn_vctr[i]);
			printf("\n");
			temp += dyn_vctr[i];
			i++;
			alunos++;
			dyn_vctr[i] = (dyn_vctr[i-3] * 2 + dyn_vctr[i-2] * 3 + dyn_vctr[i-1])/6; //média por aluno
			i++;
		}
		dyn_vctr[4*num_alunos+1] = temp / num_alunos; //média da turma
		printf("Média da turma: %.2f\n", dyn_vctr[4*num_alunos+1]);
		//relatório
	}
	free(dyn_vctr);
}
