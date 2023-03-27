/*implemente uma função recursiva para computar o valor de 2^n*/

#include <stdio.h>
#include <math.h>

int pot(int n) {
    if (n == 0) {
        return 1;
    } else {
        return 2 * pot(n-1);
    }
}

int main() {
    int n = 0;
    printf("Insira um valor para n sendo 2^n a saida do programa: ");
    scanf("%d", &n);
    printf("%d\n", pot(n));
}
