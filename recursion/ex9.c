/*Elabore um programa com o uso de uma função recursiva para resolver a seguinte xpressão f(n) = n * (1/n) * (1/n-1).....
Observe n> 0*/

#include <stdio.h>

float xp(int n, int i) {
    if (n-i > 0) {
        printf("%d ", n-i);
        return n * (1 / xp(n-i, ++i));
    }
}

int main(){
    int n = 0, i = 0;
    scanf("%d", &n);
    n = xp(n, i);
    printf("\n%d", n);
}
