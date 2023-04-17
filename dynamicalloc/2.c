// Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar em um vetor de doubles, depois use a função MALLOC para reservar (alocar) o espaço de memória de acordo com o especificado pelo usuário. Use este vetor dinâmico como um vetor comum, atribuindo aos 10 primeiros elementos do vetor valores aleatórios (rand) entre 0 e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos do vetor (O vetor deve ter pelo menos um tamanho igual a 10 doubles, ou mais).

#define RED "\e[31m"
#define CLR "\e[0m"

#include <stdio.h>
#include <stdlib.h>

void rng (double dyn_vctr[]) {
    for (int i = 0; i < 10; i++) {
        dyn_vctr[i] = (double)(rand() % 101);
    }
}
void printvctr(double dyn_vctr[]) {
    for (int i = 0; i < 10; i++) {
        printf( RED "%.0lf\t" CLR, dyn_vctr[i]);
    }
    printf("\n");
}

int main () {
    int size;
    double *dyn_vctr;
    printf("Quantos valores " RED "maiores" CLR " do que 10 tu gostaria de salvar? ");
        scanf("%d", &size);
        while (size < 10) {
            printf("O valor especificado é " RED "menor" CLR " do que 10, tente novamente: ");
            scanf("%d", &size);
        }
    dyn_vctr = (double*) malloc (size*sizeof(double));
    rng(dyn_vctr);
    printvctr(dyn_vctr);
    free(dyn_vctr);
}
