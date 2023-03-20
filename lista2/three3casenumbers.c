/*4) Faça um programa que leia 3 números inteiros obrigatoriamente com três dígitos e depois utilizando uma função imprima o número lido de forma invertida (os números que foram passados por parâmetro).  Ex: 234 saída: 432*/

#include <stdio.h>

void nmbrInvrtr(int num) {
    int aux1 =   num / 100,
        aux2 =  (num - aux1 * 100)/10,
        aux3 = ((num - aux1 * 100) - aux2 * 10);
    num = 0;
    num = aux3 * 100 + aux2 * 10 + aux1;
    printf("%d ", num);
}

int main() {
    int num1, num2, num3;
    printf("Por favor, insira 3 números inteiros com três casas decimais cada. Estes números terão suas casas invertidas: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    nmbrInvrtr(num1);
    nmbrInvrtr(num2);
    nmbrInvrtr(num3);
    printf("\n");
}
