// Faça um programa que multiplique duas matrizes. O programa deverá estar estruturado de maneira que: a. O usuário forneça as dimensões das matrizes (teste se as dimensões são compatíveis, isto é, se as matrizes podem ser multiplicadas); b. As matrizes sejam alocadas dinamicamente (faça uma função para isto); c. As matrizes sejam lidas pelo teclado (faça uma função para leitura das matrizes de qualquer dimensão); d. As matrizes sejam multiplicadas (faça uma função para a multiplicação); e. A matriz resultante seja apresentada na tela (faça uma função para */apresentar a matriz na tela).

#define RED "\e[31m"
#define CLR "\e[0m"

#include <stdio.h>
#include <stdlib.h>

int frmat (char iLMTDFM[]) {
    int num = 0;
    for (int i = 0; i < 10; i++) {
        // if (iLMTDFM[i] == 'x' || iLMTDFM[i] == 'X' || iLMTDFM[i == '\0']) {
        //    return num;
        // } else {
        if (iLMTDFM[i] > 0x29 && iLMTDFM[i] < 0x3A) {
            num = (((int)iLMTDFM[i] - 0x30) * (i+1));
        } else {
            iLMTDFM
        }
    }
    return num;
}

void cnsist (int dynMatrix[], int i, int j) {

}

int main () {
    char iLMTDFM[10]; //iLikeMakingThingsDifficultForMyself
    int *dynMatrix, width, length;
    printf("What size matrix would you like to have? Please type it as "RED"NUMBER"CLR"x"RED"NUMBER"CLR": ");
    fgets(iLMTDFM, sizeof(iLMTDFM), stdin);
    width = (int) frmat(iLMTDFM);
    printf("%d", width);
}
