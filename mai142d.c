#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"
//funktions prototypen
#define DIM 20
void vektor_eingabe(int dim, double *v);
void vektor_ausgabe(int dim, double *v);
void vektor_summe(int dim, double *v1, double *v2, double *summe);
double vektor_skalarprodukt(int dim, double *v1, double *v2);

int main(void){
    int i, r, dim;
    double skalarprodukt = 0;
    printf("Bitte geben sie eine dimension ein?:    ");
    printf("\n");
    do {
        r = scanf("%d", &dim); INCLR

    }while(r < 1 || dim >  DIM);
//dynamische memory fuer  vektor

    double * v1 = (double*)malloc((dim)*sizeof(double));
    double * v2 = (double*)malloc((dim)*sizeof(double));
    double * summe = (double*)malloc((dim)*sizeof(double));
printf("Bitte fuellen erstes Vekrtor:\n");
vektor_eingabe(dim,v1);
printf("Bitte fuellen zweites Vektor:\n");
vektor_eingabe(dim, v2);
printf("\nausgegebene Vektor1:\n");
vektor_ausgabe(dim, v1);

printf("\n");
printf("ausgegebene Vektor2\n");
vektor_ausgabe(dim, v2);

//Summe ausgeben und berechen
printf("\n");
printf("\n------Summe der Vektoren----\n");
vektor_summe(dim, v1, v2,summe);
//skalarprodukt
printf("\n");
skalarprodukt = vektor_skalarprodukt(dim, v1, v2);
printf("\nSkalarprodukt ist: %.1lf\n", skalarprodukt);

    free(v1);
    free(v2);
    free(summe);
    PAUSE;
    return 0;

}

//vektor eingaben
void vektor_eingabe(int dim, double *v){
    int i, r;
    //printf("Bitte fuellen ersetes Vektor ein: \n");
    for (i = 0; i < dim; i++){
        do{
            printf("%d.Zahl ", i+1);
            r = scanf("%lf", &v[i]); INCLR

        }while(r < 1);
    }
}

void vektor_ausgabe(int dim, double *v){
    for (int i = 0; i < dim; i++){
    printf("%d. Zahl: %.1lf", i+1, v[i]);
    printf("\n");
    }

}
void vektor_summe(int dim, double *v1, double *v2, double *summe){
    for (int i = 0; i < dim; i++){
        summe[i] = v1[i] + v2[i];

    }
    printf("\n");
    for (int i = 0; i < dim; i++){
        printf("%d.Zahl: %.1lf", i+1, summe[i]);
        printf("\n");
    }
}

double vektor_skalarprodukt(int dim, double *v1, double *v2){
    double skalarprodukt = 0;
    int i;
    for (i = 0; i < dim; i++){
        skalarprodukt += v1[i] *v2[i];
    }
    return skalarprodukt;
}




