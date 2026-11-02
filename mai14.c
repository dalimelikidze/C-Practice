#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"
#define MAX_DIM 20

int main (void){
    int i, r, v1[MAX_DIM], v2[MAX_DIM], summe[MAX_DIM], skalarprodukt = 0, dim;
    //Dimension anfragen
    do
    {
        printf("Bitte geben sie dimension ein(max.20)?\n");
       r =  scanf("%d", &dim); INCLR


    }while(r < 1 || dim > 20); //input valiediren
printf("\n");
    //erstes array fuellen
    printf("Bitte fullen sie erstes vektor ein?\n");
    for (i = 0; i < dim; i++){
        do{
            printf("%d.Zahl ", i+1);
            r = scanf("%d", &v1[i]); INCLR

        }while(r < 1 || i > dim);
    }
    printf("\n");
//zweites array fuellen
 printf("Bitte fullen sie zweites vektor ein?\n");
for (i = 0; i < dim; i++){
        do{
        printf("%d. Zahl ", i+1);
        r = scanf("%d", &v2[i]); INCLR

        }while(r < 1 || i > dim);
}
printf("\n");
//summe rechen
for (i = 0; i < dim; i++){
    summe[i] = v1[i] + v2[i];
}
for (i = 0; i < dim; i++){
    skalarprodukt += v1[i] * v2[i];
}


for (i = 0; i < dim; i++){
    printf("%dSumme:%d ", i+1,summe[i]);
    printf("\n");
}

printf("\nScalarprodukt ist: %d\n", skalarprodukt);
    PAUSE;
    return 0;
}
