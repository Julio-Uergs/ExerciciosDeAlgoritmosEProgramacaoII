/*Crie uma função que recebe uma string e um caractere, e apague todas as ocorrências desses caracteres na string.*/

#include <stdio.h>
#include <string.h>

int funSrch(char str[20], char srch) {
    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == srch) {
            j = i;
            i--;
            while (str[j] != '\0') {
                str[j] = str[j+1];
                j++;
            }
        }
    }
}

int main () {
    char str[20], srch;
    printf("Insira uma frase: ");
    fgets(str, 20, stdin);
    printf("Insira um caractere: ");
    scanf("%c", &srch);
    funSrch(str, srch);
    printf("%s", str);
}
