/*Crie uma função que duplique cada caractere da string.*/

#include <stdio.h>
#include <string.h>

char dupe(char str[40]) {
    char ref[20];
    for (int i = 0; i < strlen(str); i++) {
         ref[i] = str[i];           //h e l l o
         if (i > 0) {               //0 1 2 3 4
             str[i] = ref[i-1];
        }
    }
    printf("%s", ref);
    printf("%s", str);
    // for (int i = 0, j = 0; i < 39; i++, j += 2) {
    //     ref[i] = str[j];
    // }
    // printf("%s", str);
    // for (int i = 0; i < strlen(str)*2 - 2; i += 2) {
    //     str[i] = str[i+1];
    // }
    // printf("%s", str);
    // str[strlen(str)*2 - 2] = '\0';
}

int main () {
    char str[40];
    printf("Insira uma frase de no máximo 20 caracteres: ");
    fgets(str, 20, stdin);
    printf("%d ", strlen(str));
    dupe(str);
}
