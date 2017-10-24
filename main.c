#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Funzione calcola le soluzioni di una equazione di seconda grado
 * @param a     Coefficiente x^2
 * @param b     Coefficiente x
 * @param c     Terime noto
 * @param x1    Risulatato 1
 * @param x2    Risulatato 2
 * @return      1 se l'equazione ammette soluzioni reali, altrimenti 0
 */
int calcoloEqu(double a, double b, double c, double *x1, double *x2);

int main(int argc, char** argv) {
    double x1, x2 = 0;
    double a, b, c;
    
    printf("Prego, i coefficienti della equazione: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    
    if(calcoloEqu(a, b, c, &x1, &x2))
        printf("I risultati sono: x1 = %g e x2 = %g\n", x1, x2);
    else
        printf("Risultati non reali.\n");
    
    return (EXIT_SUCCESS);
}


int calcoloEqu(double a, double b, double c, double *x1, double *x2){
    double risultatoDelta = 0;
    
    risultatoDelta = pow(b,2) - (4*(a*c));
    
    if(risultatoDelta > 0){
        *x1 = - (b) + (sqrt(risultatoDelta) / (2 * a));
        *x2 = - (b) - (sqrt(risultatoDelta) / (2 * a));
        return 1;
    } else 
        return 0;
}


