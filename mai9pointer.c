#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"
#include <math.h>

/*funktion prototyp */
int func (float, float, float*);

int main(void){
    float x1, x2, y;
    x1 = 9;
    x2 = 3;

    if(func(x1, x2,&y)==1){
        printf("\nDas Ergebnis ist %.2f", y);
    }
    else {
        printf("\nDas Ergebnis ist keine relle Zahl.\n");
    }

    PAUSE;
    return 0;
}
/*FUNKTION DEFINITION */

//berechene sqrt(x*x - y*y)
int func(float x, float y, float *ergebnis){
    float x_quad = x*x;
    float y_quad = y*y;
    if (x_quad >= y_quad){
        *ergebnis = sqrt(x_quad - y_quad);
        return 1;

    }
    else {
        *ergebnis = 0;
        return 0;
    }
}
