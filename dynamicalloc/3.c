// Escreva um programa que declare uma matriz nxn de inteiros (lendo as dimensões do teclado e alocando a menor quantidade de memória possível para armazenar os valores da matriz). Você deve inicializar a matriz com zeros usando ponteiros para endereçar seus elementos. Preencha depois a matriz com os números de 1 a 10000, também usando ponteiros.

#define RED "\e[31m"
#define CLR "\e[0m"

#include <stdio.h>
#include <stdlib.h>

void cnsist (int val) {
    if (val < 1) {
        printf("Este valor é menor do que um, impossibilitando a criação de uma matriz, por favor, insira um número " RED "maior" CLR " do que 1: ");
        scanf("%d", &val);
    }
}

void zero (int dynMatrix[], int i) {
    for (int a = 0; a < i; a++) {
        dynMatrix[a] = 0;
    }
}

void fill (int dynMatrix[], int i) {
    int a = 0, fill = 1;
    while (a < i) {
        dynMatrix[a] = fill;
        if (fill < 10000) {
            fill++;
        }
        a++;
    }
}


void prntmat (int dynMatrix[], int i, int j) {
    printf("\n");
    int b = 0;
    for (int a = 0; a < i*j; a++) {
        b++;
        printf("%d\t", dynMatrix[a]);
        if (b == j) {
            printf("\n");
            b = 0;
        }
    }
    printf("\n");
}

int main () {
    int linha, coluna, *dynMatrix;
    printf("Por favor, insira o número de "RED "linhas" CLR " e " RED "colunas" CLR " desejado para uma matriz: ");
    scanf("%d", &linha);
    cnsist(linha);
    scanf("%d", &coluna);
    cnsist(coluna);
    dynMatrix = (int *) malloc(linha*coluna*sizeof(int));
    zero(dynMatrix, linha*coluna);
    fill(dynMatrix, linha*coluna);
    prntmat(dynMatrix, linha, coluna);
}
