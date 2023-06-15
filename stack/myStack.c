#include <stdio.h>
#include <stdlib.h>

typedef struct link {
	int val;
	struct link *nxt;
} knot;

void pileUp (knot **beg, int val) {
    knot *new;
    if((new = (knot*) malloc (sizeof(knot))) == NULL) {
        printf("Memória Insuficiente!");
    } else {
        new->val = val;
        if (beg == NULL) {
            new->nxt = NULL;
            *beg = new;
        } else {
            new->nxt = *beg
            *beg = new;
        }
    }
}

int main () {

    pileUp()
}
