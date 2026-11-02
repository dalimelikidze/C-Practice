#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"

//bestimme der Laenge
int strlen_custom(char *t){
    int len = 0;
    while(t[len] != '\0'){
        len++;
    }
    return len;
}
//Wort einlesen
void string_einlesen(char *t, int len){
    printf("Bitte geben sie beliebiges wort ein (max.%d)\n",len);
    zklesen(t,len + 1);//INCLR;
}

//string ausgeben
void string_ausgeben(char *text){

    //for (int i = 0; i < len; i++){
        printf("%s", text);

}
//Buchstaben zählen
int anz_buchstaben (char *t, char c){
    int anz = 0;
    //int len = strlen_custom(t);
    for (int i = 0; t[i] != '\0'; i++){
        if (t[i] == c){anz++;};
    }
    return anz;

}
//return 0 when Zahlen, 1 when Buchstaben, 2 sonst
//function type int
int ctyp(char c){
    int typ;
    if (c >= '0' && c <= '9'){typ = 0;}

    else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){typ = 1;}

    else {typ = 2;}

    return typ;
}
//umwandlung in Kleine BUchstaben
char mach_kleine(char c){
    if (c >= 'A' && c <= 'Z'){c += 32;}
    return c;
}
//Umwandlung in grosse Buchstaben

char mach_gross(char c){
    if (c >= 'a' && c <= 'z'){c -= 32;}
    return c;
}

int main (void){
    char antwort;
    do{
    int anz_a = 0; int anz_leer = 0; int anz_alpa = 0; int anz_zahlen = 0; int anz_satzzeichen = 0;
    int len;
    printf("Bitte geben sie Laenge des Wortes ein?   \n");

    //input Validierung

    if (scanf("%d", &len) != 1 || len < 0){
        printf("Bitte geben sie die positive Zahl ein:\n");
        return 1;
    };INCLR;

   char *wort = (char*)malloc((len + 1) *sizeof(char));
   if (wort == NULL){
       printf("Speicherfehler!\n");
       return 1;
}
    char *klein = (char*) malloc((len+1)* sizeof(char));
    if (klein == NULL){
        printf("Speicherfehler!\n");
        free(wort);
        return 1;
    }
    char *gross = (char*) malloc((len+1)*sizeof(char));
    if (gross == NULL){
        printf("Speicherfehler!");
        free(wort);
        free(klein);
        return 1;
    }
    string_einlesen(wort,len);
    printf("\n----WORT----\n");
    string_ausgeben(wort);
    len = strlen_custom(wort);
    printf("\nLaenge des Wortes ist: %d\n", len);
    anz_a = anz_buchstaben(wort, 'a');
    printf("\n----Anzahl_a----\n");
    printf("Anzahl %d", anz_a);

    anz_leer = anz_buchstaben(wort, ' ');
    printf("\n----Anzahl_' '----\n");
    printf("Anzahl %d", anz_leer);

    printf("\n");
    printf("\nwhich typ?\n");

    for (int i = 0; i < len; i++){
        if(ctyp(wort[i]) == 0) {anz_zahlen++;}

    else if (ctyp(wort[i]) == 1) {anz_alpa++;}

        else  {anz_satzzeichen++;}
    }

    printf("\nAnzahl Zhlen:     %d\n", anz_zahlen);
    printf("\nAnzahl Buchstaben:        %d\n", anz_alpa);
    printf("\nAnzahl Satzzeichnen:      %d\n",anz_satzzeichen);


    for (int i = 0; i < len; i++){
        //umwandlung in kleine BUchstaben
       klein[i] = mach_kleine(wort[i]);

       //umwandlung in grosse Buchstaben
       gross[i] = mach_gross(wort[i]);

    }
    //Null Terminator setzen am Ende
    klein[len] = '\0';
    gross[len] = '\0';

     printf("\n______Klein____\n");
    printf("    %s\n", klein);
    printf("\n____Gross____\n");
    printf("    %s\n", gross);

    printf("\n%s\n", gross);

    //Speicher freigeben
    free(klein);
    free(gross);
    free(wort);

    printf("Wollen sie das program wiederholen?\n");
    scanf("%c",&antwort);INCLR;

    } while(antwort == 'j' || antwort == 'J');


    PAUSE;
    return 0;
}
