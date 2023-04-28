/*Crie uma função que transforma todos os caracteres de uma string em maiúsculos.*/

#include <stdio.h>
#include <string.h>

char UPPER (char str[20]) {
    int i = 0;
    for (; i < 18; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
    str[++i] = '\0';
}

int main () {
    int size = 20;
    char string[size];
    fgets (string, 20, stdin);
    UPPER(string);
    puts(string);
}
