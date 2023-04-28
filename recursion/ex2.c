/*Ex1, só que com duas varíaveis.*/

#include <stdio.h>

int pot(int x, int y) {
    if (x == 1) {
        return y;
    } else {
        return y * pot(x - 1, y);
    }
}

int main() {
    int x = 0, y = 0;
    printf("Insira um valor para x sendo y^x a saida do programa: ");
    scanf("%d", &x);
    printf("Insira um valor para y sendo y^x a saida do programa: ");
    scanf("%d", &y);
    printf("%d\n", pot(x, y));
}
