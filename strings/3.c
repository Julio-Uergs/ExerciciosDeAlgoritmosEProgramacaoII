//Crie uma função que recebe uma string e um caractere, e retorne o número de vezes que esse caractere aparece na string.

#include <stdio.h>
#include <string.h>

int funSrch(char str[20], char srch) {
    int ntimes = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == srch) {
            ntimes++;
        }
    }
    return ntimes;
}

int main () {
    char str[20], srch;
    printf("Insira uma frase: ");
    fgets(str, 20, stdin);
    printf("Insira um caractere: ");
    scanf("%c", &srch);
    printf("%d\n", funSrch(str, srch));
}
