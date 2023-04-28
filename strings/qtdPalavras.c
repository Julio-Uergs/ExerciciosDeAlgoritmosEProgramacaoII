/*Faça um programa em C que receba uma frase qualquer fornecida pelo usuário, calcule e mostre quantas palavras a frase possui.*/

#include <stdio.h>
#include <string.h>

int qtdPalavras(char str1[40]) {
    int n = 0;
    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] == ' ') {
            n++;
        }
    }
    return n + 1;
}

int main() {
    int num;
    char str[40];
    fgets(str, 39, stdin);
    num = qtdPalavras(str);
    printf("A quantidade de palavras é %d\n", num);
}
