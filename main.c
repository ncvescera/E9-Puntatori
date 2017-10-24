#include <stdio.h>
#include <stdlib.h>
#include "dimOf.h"

/**
 * Funzione che conta i valori maggiore del loro successivo
 * @param array     Array
 * @param dim       Dimensione dell'array
 * @return          Numero elementi maggiori del loro successivo
 */
int countNextGreater(int *array, int dim);

int main(int argc, char** argv) {

    int array[] = {4, 3, 5, 2, 9};

    printf("I valaori maggiori del successivo sono: %d.\n", countNextGreater(array, sizeOfArray(array)));

    return (EXIT_SUCCESS);
}

int countNextGreater(int *array, int dim) {
    int count = 0;

    for (int i = 0; i < dim - 1; i++) {
        if (*(array + i) > *(array + i + 1))
            count++;
    }

    return count;
}

