/*Escreva um programa que utilizando uma função minmax que receba um vetor inteiro e os endereços de duas variáveis inteiras (min e max), e deposite nessas variáveis o valor do  mínimo valor do vetor e o valor de um elemento máximo do vetor, respectivamente. No main o vetor é lido via teclado e depois imprime os valores de min e max. O vetor armazena até 10 valores inteiros.*/

#include <stdio.h>

void minmax(int vctr[10], int *min, int *max) {
    *min = vctr[0];
    for(int i = 0; i<10; i++) {
        if(vctr[i] < *min) {
            *min = vctr[i];
        } else if(vctr[i] > *max){
            *max = vctr[i];
        }
    }
}

int main() {
    int vctr[10], min, max;
    for (int i = 0; i<10; i++) {
        printf("Por favor insira um valor para a posição %d do vetor: ", i + 1);
        scanf("%d", &vctr[i]);
    }
    minmax(vctr, &min, &max);
    printf("min = %d\nmax = %d\n", min, max);
}
