#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"

void array_einlesen(int *array, int len){
    printf("Bitte geben Sie array Elemente ein?\n");
    for (int i = 0; i < len; i++){
        printf("%d.element:  ", i+1);
        scanf("%d", &array[i]); INCLR;
        //printf("\n");
    }
}
int array_ausgeben(int *array, int len){
    for (int i = 0; i < len; i++){
        printf("%d.element: ", i+1);
        printf("%d", array[i]);
        printf("\n");

    }
}

int berechne_summe(int *array,int len){
    int ergebnis = 0;
    for (int i = 0; i < len; i++){
        ergebnis += array[i];

    }
    return ergebnis;

}
//berechne betrag
int berechne_betrag(int *array, int len){
    int betrag = 1;
    for (int i = 0; i < len; i++){
        betrag*= array[i];

    }
    return betrag;
}

int main(void){

    int len;
    int ergebnis = 0;
    int betrag;
    printf("Bitte geben sie Laenge von array ein?\n");

    if(scanf("%d",&len) != 1){return 1;};INCLR;

    //int array[len];
    int *array = (int*)malloc(len*sizeof(int));
    //pruefe ob malloc lerr ist
    if (array == NULL){
        printf("Speicherfehler!\n");
        return 1;
    }

    printf("\n");
    array_einlesen(array,len);
    printf("\n");
    printf("------ARRAY------\n");

    array_ausgeben(array,len);
    printf("\n");
    printf("------Summe------\n");
    ergebnis = berechne_summe(array, len);
    printf("\n Summe von array ist: %d\n", ergebnis);
    printf("\n------Betrag------\n");
    betrag = berechne_betrag(array, len);
    printf ("\nBetrag ist: %d\n", betrag);


    free(array);
    PAUSE;
    return 0;
}



