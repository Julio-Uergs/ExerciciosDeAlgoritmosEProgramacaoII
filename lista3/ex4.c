/*Escreva uma função recursiva que faça o seguinte: leia um número; se o número for
negativo, a função para; caso contrário, a função imprime o número e faz uma
chamada recursiva a si mesma.*/

#include <stdio.h>

int rcrsn(int num) {
    scanf("%d", &num);
    if (num < 0) {
        return 0;
    } else {
        printf("%d\n", num);
        return rcrsn(num);
    }

}

int main() {
    int num;
    printf("Insira um número qualquer, se ele for negativo, o programa terminará, caso contrário, ele pedirá um próximo número, recursivamente: ");
    rcrsn(num);
}
