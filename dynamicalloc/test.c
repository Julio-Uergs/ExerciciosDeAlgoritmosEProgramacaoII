#include <stdio.h>

#define USHRT_MAX 65535

int main() {
    char emoji[10] = {0,0,0,0,0,0,0,0};
    for (int i = 0x0; i < USHRT_MAX; i++) {
        printf("\\U%d", i);
    }
    return 0;
}
