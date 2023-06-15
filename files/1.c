#include <stdio.h>

int main() {
    char opt, edit[30];
    FILE *file;
    printf("Menu Edição:\n\nA - Apagar\nC - Criar\nE - Editar\n\nInsira sua opção: ");
    opt = getchar();
    switch (opt) {
        case 'A':
            file = fopen("batata.txt", "ws");
            break;
        case 'C':
            file = fopen("batata.txt", "a+");
            break;
        case 'E':
            file = fopen("batata.txt", "w+");
            break;
    }

    if (file == NULL) {
        printf("Couldn't create or open the file, trying again:\n");
    }

    fgets(edit, 30, stdin);
    fprintf(file, edit);
}
