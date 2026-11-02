#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"
int main(void){
    int i, j ,k,h;

    const int az =2, as = 3, bz = 4, bs = 2;
    int skalar[az][bz];

    int matrix_a[2][3] = {{2,3,4},{3,4,5}};
    int matrix_b[4][2] ={{2,3},{4,6},{8,9},{4,6}};

    for(i = 0; i < az; i++){
        for (j = 0; j < bs; j++){
            h = 0;
            for (k = 0; k < az; k++){
                h += matrix_a[i][k] * matrix_b[k][j];

            }
            skalar[i][j] = h;
        }

    }
    // Ausgabe der Matrix a
    printf("\nerstes matrix:\n");
    for (i = 0; i < az; i++){
        for (j = 0; j < as; j++){
            printf("%d ", matrix_a[i][j]);
        }
        printf("\n");
    }
    //ausgabe Matrix b

    printf("\nMatrix_b\n");
    for (i = 0; i < bz; i++){
        for (j = 0; j < bs; j++){
            printf("%d ", matrix_b[i][j]);
        }
        printf("\n");
    }
    //ausgabe der summe
    printf("\nSkalarprodukt der Matrizen!\n");
    for (i = 0; i < az; i++){
        for (j = 0; j < bs; j++){
            printf("%d", skalar[i][j]);
        }
        printf("\n");
    }

    PAUSE;
    return 0;
}
