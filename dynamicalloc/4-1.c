//Faça um programa que multiplique duas matrizes. O programa deverá estar estruturado de maneira que: a. O usuário forneça as dimensões das matrizes (teste se as dimensões são compatíveis, isto é, se as matrizes podem ser multiplicadas); b. As matrizes sejam alocadas dinamicamente (faça uma função para isto); c. As matrizes sejam lidas pelo teclado (faça uma função para leitura das matrizes de qualquer dimensão); d. As matrizes sejam multiplicadas (faça uma função para a multiplicação); e. A matriz resultante seja apresentada na tela (faça uma função para */apresentar a matriz na tela).

#define RED "\e[31m"
#define BLNK "\e[5m"
#define CLR "\e[0m"

#include <stdio.h>
#include <stdlib.h>

void hdr () {
    system("clear");
    printf("\n\t"RED"Multiplying"CLR" two matrixes:\n\n");
}

int mem (int dynMatrix[]) {
    if (dynMatrix == NULL) {
        printf(RED"ERR:"CLR" Mem Overflow\n");
        return 1;
    } else {
        return 0;
    }
}

int cnsist (int val) {
    while (val < 1) {
        printf("The value inputted is smaller than 1. Please try again with a value " RED "bigger" CLR " than 1: ");
        scanf("%d", &val);
    }
    return val;
}

void matBldr (char dmnsn, int num) {
    printf("How many "RED);
    if (dmnsn == 'l') {
        printf("lines");
    } else {
        printf("columns");
    }
    printf(CLR" would you like to have for matrix %d? ", num);
}

void mult(int dynMatrix[], int dynMatrix1[], int dynMatrix2[], int i1, int j1, int i2, int j2) { //4 3 3 2
    int c = 0, d = 0, e = 0, OldC = c; //b = índice da resposta | size = i1 * j2 |
    for (int g = 0; g < j1*i2; g++){
        for (int a = 0; a < j1; a++) {
            dynMatrix[g] += dynMatrix1[c] * dynMatrix2[d];
            // printf("a %d\tc %d\td %d\te %d\tOldC %d\tg %d\t%d * %d  %d\n\n", a, c, d, e, OldC, g, dynMatrix1[c], dynMatrix2[d], dynMatrix[g]);
            c++;     //0, 1, 2 //0, 1, 2 //3, 4, 5 //3, 4, 5 //6, 7, 8 //6, 7, 8
            d += j2; //0, 2, 4 //1, 3, 5 //0, 2, 4 //1, 3, 5 //
        }
        d = ++e;
        if (e == j2) { //if e = 2
            e = 0;
            OldC = c;
            c = OldC;
            d = 0;
        }
        c = OldC;
    }
}

void matFllr(int dynMatrix[], int size) {
    int j = 1;
    for (int i = 0; i < size; i++) {
        dynMatrix[i] = j++;
    }
}

void matPrntr(int dynMatrix[], int i, int j) {
    int b = 0;
    for (int a = 0; a < i*j; a++) {
        b++;
        printf("%d\t", dynMatrix[a]);
        if (b == j) {
            printf("\n\n");
            b = 0;
        }
    }
}

void matBldrVslzr(int i, int j) {
    int b = 0;
    for (int a = 0; a < i*j; a++) {
        b++;
        printf("X\t");
        if (b == j) {
            printf("\n\n");
            b = 0;
        }
    }
}

void matMod(int dynMatrix[], int i, int j, int m) {
    int b = 0;
    for (int a = 0; a < i*j; a++) {
        b++;
        switch (m) {
            case 0:
                printf("%d\t", dynMatrix[a]);
                break;
            case 1:
                printf("X\t");
                break;
            case 2:
                if (a < j){
                    printf(BLNK RED"X\t"CLR);
                } else {
                    printf("X\t");
                }
                break;
            case 3:
                scanf("%d", &dynMatrix[a]);
                break;
        }
        if (b == j) {
            printf("\n\n");
            b = 0;
        }
    }
}

int main () {                                                           //A(i, j)  =  linha, coluna
    int *dynMatrix, *dynMatrix1, *dynMatrix2, l1, w1, l2, w2; //4 3 3 2   A(3, 2)  =  a11 a12
    hdr();                                                                          //a21 a22
    matBldr('l', 1);                                                                //a31 a32
    scanf("%d", &l1);
    l1 = cnsist(l1);
    hdr();
    matMod(dynMatrix, l1, 1, 1);
    matBldr('c', 1);
    scanf("%d", &w1);
    w1 = cnsist(w1);
    hdr();
    matMod(dynMatrix, l1, w1, 1);

    dynMatrix1 = (int*) malloc(l1*w1*sizeof(int));
    matFllr(dynMatrix1, l1*w1);
    if (mem(dynMatrix1) != 0) {
        return 1;
    }

    hdr();
    matMod(dynMatrix, l1, w1, 1);
    printf(" \tx\n\n");
    matBldr('l', 2);
    scanf("%d", &l2);
    l2 = cnsist(l2);
    while (w1 != l2) {
        hdr();
        matMod(dynMatrix, l1, w1, 2);
        printf(" \tx\n\n"RED BLNK);
        matMod(dynMatrix, l2, 1, 1);
        printf(CLR"The numer of "RED"lines"CLR " (%d) of your second matrix must be "RED"equal"CLR" to the number of "RED"columns"CLR" (%d) of your first matrix, please try again: ", l2, w1);
        scanf("%d", &l2);
        l2 = cnsist(l2);
    }
    hdr();
    matBldrVslzr(l1, w1);
    printf(" \tx\n\n");
    matBldrVslzr(l2, 1);
    matBldr('c', 2);
    scanf("%d", &w2);
    w2 = cnsist(w2);
    // hdr();
    // matBldrVslzr(l1, w1);
    // printf(" \tx\n\n");
    // matBldrVslzr(l2, w2);

    dynMatrix2 = (int*) malloc(l2*w2*sizeof(int));
    matFllr(dynMatrix2, l2*w2);
    if (mem(dynMatrix2) != 0) {
        return 1;
    }

    dynMatrix = (int*) malloc(w1*l2*sizeof(int));

    hdr();
    matPrntr(dynMatrix1, l1, w1);
    printf(" \tx\n\n");
    matPrntr(dynMatrix2, l2, w2);
    printf(" \t=\n\n");

    mult(dynMatrix, dynMatrix1, dynMatrix2, l1, w1, l2, w2);

    matPrntr(dynMatrix, l1, w2);

    free(dynMatrix1);
    free(dynMatrix2);
    free(dynMatrix);
}
