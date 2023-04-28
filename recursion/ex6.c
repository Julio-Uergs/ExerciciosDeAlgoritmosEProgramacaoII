/*Calcule o valor da série S para n > 0.

S = 2+2/5+10/3+...1+n²/n*/

#include <stdio.h>

int calc(int n) {
    if (n > 0) {
        return (1 + n * n)/n + calc(n - 1);
    }
}

int main() {
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", calc(n));
}
