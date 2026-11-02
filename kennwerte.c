#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"
//definiere funktions prototypen
//sortiren funktion paramenter anzhal und folge
//min max median, anzhal, folge die sind parameters

void sortieren(int, double*);
void min_mediane_max(int, double*,double*,double*,double*);


int main(void){
    int r , anz, i;
    double *folge, min, max,median;
    //anzhal der Folgen

    printf("\n");
    //input valiedirung do while schleife
    do
    {  printf("Bitte geben Anzhal der folgen ein?      ");
        r = scanf("%d", &anz); INCLR

    }while(r < 1 || anz < 1);
    //folge einlesen
    //dynamische memory um werte zu speichern
    folge = (double*) malloc(anz* sizeof(double));
    if (folge == NULL){
        printf("speicherfehler!\n");
        return 1;

    }
    printf("Bitte geben sie Elemente der Folge ein:\n");
    for (i = 0; i < anz; i++){
        //input valiedirung
        do {
        printf("%d.Zahl ", i+1);
        r = scanf("%lf", &folge[i]); INCLR

        }while(r < 1);
    }
    //zum testen
    for(i = 0; i < anz; i++){
        printf("%d.Zahl %.1lf",i+1, folge[i]);
        printf("\n");
    }
    //funktions aufruf
    min_mediane_max(anz,folge,&min,&max,&median);
    printf("\n");
    printf("\n Kenwert min: %.1lf\n", min);
    printf("\n Kennwert max %.1lf\n", max);
    printf("\n Kennwert median %.1lf\n",median);
    //speicher freigeben
    free(folge);
    PAUSE;
    return 0;
}
//funktions deklaration
//selection sortiren
void sortieren(int anzhal, double *folge){
    /*idee nimm min elemente und vergleiche mit rechtem
     so wir brauchen min, minindex um index zu speichern und zwei laufvariable zum vergleichen */
    int i,j, minindex;
    double min;
  for (i = 0; i < anzhal - 1; i++){
      min = folge[i];
      minindex = i;
      //inere schleife zum vergleichen
      for (j = i+1; j < anzhal; j++) {
          //neues minimum
      if (folge[j] < min){
          min = folge[j];
          minindex = j;//index von neues minimum
      }
    }

   folge[minindex] = folge[i];
   folge[i] = min;


}
}
void min_mediane_max(int anzhal,double *folge, double *min, double *max,double *median){
    int i;
    //sortierete folge kopieren
    double *sortfolge = (double*) malloc(anzhal*sizeof(double));
    if (sortfolge == NULL) {return;}

    //kopieren
    for (i = 0; i < anzhal; i++){
        sortfolge[i] = folge[i];//koppiert
    }
    //folge sortieren
    sortieren(anzhal,sortfolge);
    // min max mediana  rechenen
    //min und max dereferenzieren
    *min = sortfolge[0];
    *max = sortfolge[anzhal -1];

if ((anzhal%2)==1) *median = sortfolge[(anzhal+1)/2-1];
  else *median = (sortfolge[anzhal/2-1]+sortfolge[anzhal/2])/2;
  free(sortfolge);

}


