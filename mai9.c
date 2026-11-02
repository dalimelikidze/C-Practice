#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"
 /*Funktion um stellen zu zaehlen */
 int stellen (int z){
     int anz = 0;
     do {
     if (z < 0){z= -z;}
     z /= 10;
     anz++;

     }while(z!=0);
     return anz;

}

int main(void){
    //wiederholungschleife
    short anz;
    int r, zahl;
    char weiter;
    do
    {
        do{
        printf("Bitte geben Sie eine Zahl ein:\n");
        r = scanf("%d", &zahl); INCLR
        }
        while(r < 1);
        /*ausgabe des EReignisses */
        anz  = stellen(zahl);
        printf("\n----Stellen----\n");
        printf("\nAnzahl der stellen ist:%d\n", anz);
        /* frage nach wiederholung */
        do
        {
        printf("Soll eine weitere schleife wiederholt werden?\n");
        scanf("%c", &weiter); INCLR
        }while(weiter != 'j' && weiter != 'j' && weiter != 'n' && weiter != 'N');


    }while(weiter == 'j' || weiter == 'J');


    PAUSE;
    return 0;
}
