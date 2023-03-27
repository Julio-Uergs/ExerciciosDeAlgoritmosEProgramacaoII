/*8 que confusão esses exercícios*/

#include <stdio.h>

int ackerman(int m, int n) {
    if (m == 0);
    return n + 1;
    if (m != 0 && n == 0);
    return ackerman(m - 1, 1);
    if (m != 0, n != 0);
    return ackerman(m - 1, ackerman(m, n - 1));
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d", ackerman(m, n));
}
