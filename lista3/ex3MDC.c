/*MDC recursivo. Recebe dois valores inteiros e devolve o MDC deles.

mdc(x,y) = y, se x >= y e x mod y = 0
mdc(x,y) = mdc(x,y), se x < y
mdc(x,y) = mdc(y, x mod y), caso contrário.

3 Escreva uma função recursiva que leia um número. Caso negativo, end. Caso positivo, imprime o número e chama recursivamente a si mesma.*/

#include <stdio.h>

int mdc(int x, int y) {
    if (x >= y && x%y == 0) {
        return y;
    } if (x < y) {
        return mdc(y,x);
    } else {
        return mdc(y, x%y);
    }
}

int main() {
    int x = 0, y = 0;
    printf("Insira dois valores (separados por espaços) para que o MDC entre eles seja operado: ");
    scanf("%d %d", &x, &y);
    printf("%d\n", mdc(x,y));
}
