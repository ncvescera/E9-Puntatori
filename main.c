#include <stdio.h>
#include <stdlib.h>
#include "bool.h"
#include "dimOf.h"

/**
 * Funzione che calcola il numero di valori positivi all'interno di un Array
 * @param array     Array di Elementi
 * @param dim       Dimensione dell' Array
 * @return          Numero valori positivi
 */
int greaterInArray(int *array, int dim);

int main(int argc, char** argv) {

    int array[] = {2, -3, 4, 5};

    printf("I valori positivi sono: %d. \n", greaterInArray(array, sizeOfArray(array)));

    return (EXIT_SUCCESS);
}

int greaterInArray(int *array, int dim) {
    int greater = 0;

    for (int i = 0; i < dim; i++) {
        if (*(array + i) > 0)
            greater++;
    }

    return greater;

}

