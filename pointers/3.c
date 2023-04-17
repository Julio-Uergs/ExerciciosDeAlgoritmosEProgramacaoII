/*Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba a variável que encontra-se no maior endereço.*/

#include <stdio.h>

void bggr(int* a, int* b) {
   if(*a < *b) {
        *a = *b;
   } else if (*a > *b) {
        *b = *a;
   }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    bggr(&a, &b);
    printf("%d %d", a, b);
}
