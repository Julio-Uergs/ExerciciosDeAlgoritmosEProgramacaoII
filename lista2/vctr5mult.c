/*Elabore um programa que cria um vetor de 5 posições de inteiros e utilizando uma função altere os valores do vetor lido com o valor de cada elemento do vetor pela multiplicação do número lido.*/

#define size 5
#include <stdio.h>

void vctrmult (int vctr[5], int sclr) {
    for (int i=0; i<size; i++) {
        vctr[i] = vctr[i] * sclr;
        printf("%d ", vctr[i]);
    }
    printf("\n");
}

int main() {
    int vctr[size] = {0,1,2,3,4}, sclr = 0;
    printf("Por favor, insira um valor como escalar do vetor: ");
    for (int i=0; i<size; i++) {
        printf("%d ", vctr[i]);
    }
    printf("* ");
    scanf("%d", &sclr);
    vctrmult(vctr, sclr);
}
