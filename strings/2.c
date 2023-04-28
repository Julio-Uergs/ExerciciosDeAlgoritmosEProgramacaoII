/*Crie uma função que transforma todos os caracteres de uma string em minúsculos.*/

#include <stdio.h>
#include <string.h>

char lower (char str[20]) {
    int i = 0;
    for (; i < 18; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
    }
    str[++i] = '\0';
}

int main () {
    int size = 20;
    char string[size];
    fgets (string, 20, stdin);
    lower (string);
    puts (string);
}
