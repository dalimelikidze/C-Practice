#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"
int *folge_einlesen(int laenge){
    int i;

    int *feld = (int*)malloc(laenge * sizeof(int));

    if (feld == NULL){
        printf("Speicherfehler.\n");
        return NULL; }

   for (i = 0; i < laenge; i++){
       printf("%d.element:",i+1);
       if(scanf("%d", &feld[i]) != 1 || feld[i] < 0){
           printf("Keine valide Eingabe.\n");
         free(feld);
         return NULL;
    }INCLR;
}
return feld;
}
int str (int *folge){
    int len = 0;
    while(folge[len] != 0){
        len++;
    }
    return len;
}

int main(void){
    int i;
    int len = 0;
    //int len_a, len_b;

    printf("Bitte geben sie die laenge des Folges an:  \n");
    if (scanf("%d", &len) != 1 || len < 0){
        printf("keine valide Angabe.\n");
        return 1;
    };INCLR;
   printf("Bitte geben sie elemente von erste folge ein:\n");

   int  *folge_a = folge_einlesen(len);

   if (folge_a == NULL){return 1;}

   printf("\nBitte geben sie elemente zweiter Folge ein.\n");
   int *folge_b = folge_einlesen(len);

   if (folge_b == NULL){
       printf("Speicherfehler.\n");
       free(folge_a);
       return 1;

}

    printf("----Erste Folge----\n");

    for (i = 0; i < len; i++){
        printf("%d. %d", i+1, folge_a[i]);
        printf("\n");
    }
    printf("----Zweite Folge----\n");

    for (i = 0; i < len; i++){
        printf("%d. %d", i+1, folge_b[i]);
        printf("\n");
    }
    int *ergebnis = (int*)malloc(len* sizeof(int));
    if (ergebnis == NULL){
        printf("Speicherfehler.\n");
        free(folge_a);
        free(folge_b);
        return 1;
    }
     printf("Die Summe der folge absteigend ist:\n");
    for (i = 0; i < len; i++){
        ergebnis[i] = folge_a[len-1-i] + folge_b[len -1-i];
         printf("%d.    %d\n",i+1, ergebnis[i]);

    }
    printf("\n");
    free(folge_a);
    free(folge_b);
    free(ergebnis);

    PAUSE;
    return 0;
}
