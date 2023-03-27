/*Faça uma função recursiva, em linguagem C, que calcule o valor da série S descrita a seguir para um valor n>0 a ser fornecido como parâmetro para a mesma: S = 1 + 1/1! + 1/2! + 1/3! + 1/n!.*/

#include <stdio.h>

int fact(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

float calculaSerie(int n, float s) {
    if (n == 0) {
        return s + 1;
    } else {
        return s + calculaSerie(n - 1, (float)1 / fact(n));
    }
}

int main() {
    float s = 0;
    int n = 0;
    printf("Insira um valor para n maior do que zero: ");
    scanf("%d", &n);
    while (n <= 0) {
        printf("O número inserido é zero, ou menor, tente novamente com um número MAIOR do que zero: ");
        scanf("%d", &n);
    }
    printf("%f\n", calculaSerie(n, s));
}
