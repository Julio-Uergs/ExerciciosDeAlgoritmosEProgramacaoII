#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char nome[30], aux;
    int i, idade;
    FILE *pf;
    pf = fopen ("meuarq.txt", "wt");
    if (pf == NULL) {
        printf("\nErro na abertura do arquivo");
    }
    else {
        printf ("Informe o nome da pessoa");
        scanf ("%s", &nome);
        nome = toupper(30);
        while (strcmp(nome, "FIM") != 0) {
            printf ("\nInforme a idade");
            scanf ("%d", &idade);
            fprintf (pf,"%s;%d\n",nome, idade);
            printf ("\nInforme o nome da pessoa");
            scanf ("%s", &nome);
            nome = toupper(30);
        }
        fclose(pf);
    }
    pf = fopen ("meuarq.txt", "rt");
    if (pf == NULL) {
        printf ("\nErro na abertura do arquivo");
    }
    else {
        while (!feof(pf)) {
            fscanf(pf,"%c",&aux);
            i = 0;
            while (aux != ';') {
                nome[i++] = aux;
                fscanf(pf,"%c",&aux);
            }
            nome[i] = '\0';
            fscanf(pf,"%d",&idade);
            printf("\n%s %d",nome,idade);
        }
    }
    fclose (pf);
}
