#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "point.h"

/**
 * Funzione che calcola la equazione della retta passante per i 2 punti
 * @param p1    Punto 1
 * @param p2    Punto 2
 * @param m     Coefficente Angolare
 * @param q     Termine Noto
 */
void calcoloRetta(point p1, point p2, double *m, double *q);

int main(int argc, char** argv) {

    double m, q;
    struct s_point p1, p2;

    printf("Prego, inserisca le 2 coordinate dei punti interessate: ");
    scanf("%lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y);

    calcoloRetta(p1, p2, &m, &q);

    printf("L'equazione della retta per i due punti dati e': ");
    if (m == INFINITY)
        printf("x=%g\n", q);
    else if (m == 0)
        printf("y=%g\n", q);
    else
        printf("y=%g x + %g\n", m, q);

    return (EXIT_SUCCESS);
}

void calcoloRetta(point p1, point p2, double *m, double *q) {
    if (p1.x != p2.x) {
        *m = (p1.y - p2.y) / (p1.x - p2.x);
        *q = (((p1.x * p2.y)-(p2.x * p1.y)) / (p1.x - p2.x));
    } else {
        *m = INFINITY;
        *q = p1.x;
    }
}

