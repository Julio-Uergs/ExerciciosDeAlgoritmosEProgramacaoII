/*Elabore um programa com o uso de uma função recursiva para resolver a seguinte xpressão f(n) = n * (1/n) * (1/n-1).....
Observe n> 0*/

#include <stdio.h>

float xp(int n) {
    if (n != 0) {
        return n * 1 / xp(n - 1);
    }
}

int main(){
    int n = 0;
    scanf("%d", &n);
    printf("%d", xp(n));
}
