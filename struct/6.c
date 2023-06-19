/*Elabore um programa que seja uma agenda de compromissos e:
 • Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e data. A data deve ser outra estrutura de dados contendo dia, mês e ano.
 • Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o procedimento até ler´ M = 0.*/

#include <stdio.h>
#include <stdlib.h>

#define size 5

typedef struct {
    char chore[60];
    struct {
        int day, month, year;
    };
}task;

int main () {
    task *access;
    char separator1, separator2; //fru fru
    if((access = (task*) malloc(size*sizeof(task))) == NULL) {
        printf("not enough memory.");
    } else {
        for(int i = 0; i < size; i++) {
            printf("Insira seu compromisso (60 caracteres): ");
            fgets(access[i].chore, sizeof(access->chore), stdin); //no validation, whatever.
            // printf("%s", access[i].chore);
            printf("Insira a data para o compromisso: ");
            scanf("%d%c%d%c%d", &access[i].day, &separator1, &access[i].month, &separator2, &access[i].year);
            getchar();
            while(separator1 != '/' && separator2 != '/') { //useless check, but hey, this is just to try things out
                printf("Data inválida, tente novamente: ");
                scanf("%d%c%d%c%d", &access[i].day, &separator1, &access[i].month, &separator2, &access[i].year);
                getchar();
            }
            // printf("%d/%d/%d", access[i].day, access[i].month, access[i].year);
        }
        for(int i = 0; i < size; i++) {
            printf("%s\t%d/%d/%d\n", access[i].chore, access[i].day, access[i].month, access[i].year);
        }
        free(access);
    }
}
