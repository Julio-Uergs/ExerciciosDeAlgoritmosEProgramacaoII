/*Escreva uma função recursiva, ImprimeSerie(i,j,k: inteiro), que imprime na tela a série de valores do intervalo [i,j], com incremento k*/

#include <stdio.h>

void ImprimeSerie(int i, int j, int k) {
    if (i + k < j) {
        printf("%d ", i + k);
        ImprimeSerie(i, j, i + k);
    }
}

int main() {
    int i, j, k; //sendo i e j o intervalo e k o incremento.
    printf("Insira três valores, sendo os dois primeiros uma faixa de valores e o último a quantidade de passos tomados entre cada incremento: ");
    scanf("%d %d %d", &i, &j, &k);
    ImprimeSerie(i,j,k);
    printf("\n");
}
