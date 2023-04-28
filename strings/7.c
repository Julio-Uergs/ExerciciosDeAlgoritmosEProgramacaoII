/*Crie uma função que recebe uma string e transforma alguns dos caracteres em maiúsculos e outros em minúsculos. Faça sorteios com a função rand() para gerar números aleatórios em C, que serão usados para escolher os índices dos caracteres que serão alterados.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char randCamel(char str[20]) {
    int j;
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        j = rand() % strlen(str);
        //printf("%d ", j);
        if (str[j] >= 97 && str[j] <= 122) {
            str[j] -= 32;
        } else if (str[j] >= 65 && str[j] <= 90) {
            str[j] += 32;
        }
    }
}

int main () {
    char str[20];
    fgets(str, 20, stdin);
    randCamel(str);
    printf("%s", str);
}
