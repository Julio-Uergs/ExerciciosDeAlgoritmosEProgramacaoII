/*  insere no inicio
    procura valor
    insere_fim
    insere_meio
    remove_inicio
    remove_fim
    remove_meio*/

#include <stdio.h>
#include <stdlib.h>
typedef struct no
{
	int valor;
	struct no *prox;
} nodo;

void insere_inicio(nodo **ini, int num)
{
    nodo *pont;
    pont = (nodo *) malloc (sizeof (nodo));
    if (pont == NULL)
    {
    	printf ("Erro na busca de endereço\n");
	}
	else {
		pont->valor = num;
		if (ini == NULL) {
			pont->prox  = NULL;
			*ini = pont;
		} else {
			pont->prox = *ini;
			*ini = pont;
		}
	}

}
void insere_fim (nodo **ini, int valor)
{
	nodo *proximo = *ini;
	nodo *pont;
    pont = (nodo *) malloc (sizeof (nodo));
    if (pont == NULL)
    {
    	printf ("\n Erro na busca de endere�o");
	}
	else
	{
		pont->valor = valor;
		pont->prox  = NULL;
		if (*ini == NULL)
		{

			*ini = pont;
		}
		else
		{
		   while (proximo->prox != NULL)
		   {
		      proximo = proximo->prox;
		   }
		    proximo->prox = pont;
		}

    }
}
void imprime_lista (nodo *ini)
{
	nodo *proximo = ini;

	if (ini == NULL)
	{
		printf ("\n Lista vazia");
	}
	else
	{
		do
		{
		    printf ("\n Valor %d", proximo->valor);
			proximo = proximo->prox;
	    }
		while (proximo != NULL);
	}
}
int menu()
{
	int opcao;
    system("clear");
	printf ("Menu\n1-Insere inicio\n2-Insere no meio\n3-Insere no fim\n4-Remove no inicio\n5-Remove no meio\n6-Remove fim\n7-Lista\n\nInforme a opcao desejada: ");
	scanf ("%d", &opcao);
	while (opcao < 1 || opcao > 4)
	{
		printf ("\nDigite a opcao correta ");
		scanf ("%d", &opcao);
	}
	return opcao;
}
int main()
{
	int op, valor;
	nodo *inicio = NULL;

	op = menu ();

	while (op != 4)
	{
    system("clear");
	  switch (op)
	  {
	   	case 1: printf ("Informe o valor a ser inserido ");
		        scanf ("%d", &valor);
		        insere_inicio (&inicio, valor);
		        break;
		case 2: imprime_lista (inicio);
		        break;
		case 3: printf ("Informe o valor a ser inserido ");
		        scanf ("%d", &valor);
		        insere_fim (&inicio, valor);
		        break;
	  }
	  op = menu ();
    }

}

