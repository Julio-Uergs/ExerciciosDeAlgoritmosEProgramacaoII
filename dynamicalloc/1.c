/*Elabore um programa que armazena as notas de 2 provas e 1 trabalho de um número não fixo de alunos de uma turma (a nota 1 tem peso 2, a 2 tem peso 3 e a 3 peso 1), posteriormente calcule a média das três notas para cada aluno da turma. Depois imprima um relatório que compara a média de cada aluno com a média da turma informando ao lado do índice do aluno e sua média se ele está abaixo, acima ou na média da turma.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_alunos = 0, alunos = 0; //o ideal seria transformar aquele baita for com outro for dentro numa função.
    float *dyn_vctr;
    printf("Insira o número de alunos na turma: ");
    dyn_vctr = (float*) malloc(4*scanf("%d", &num_alunos)*sizeof(float)+1);
    if (dyn_vctr == NULL) {
        printf("\x1b[31mERR:\x1b[0m Mem Overflow\n");
    } else {
        for (int i = 0; i < 4*num_alunos;) {
            for (int j = 0; j < 3; j++) {
                printf("Insira a nota \x1b[33m%d\x1b[0m de \x1b[33m%d\x1b[0m do aluno \x1b[33m%d\x1b[0m de \x1b[33m%d\x1b[0m: ", j+1, 3, alunos, num_alunos);
                scanf ("%f", &dyn_vctr[i]);
                i++;
            }
        i++;
        dyn_vctr[i] = dyn_vctr[i-4] * 2 + dyn_vctr[i-3] * 3 + dyn_vctr[i-2];
        }
        for (int i = 3; i < num_alunos; i+4) {
            int temp = 0;
            temp += dyn_vctr[i];
        dyn_vctr[4*num_alunos+1] = temp / num_alunos;
        }
        printf("Média da turma = ")
    }
}
