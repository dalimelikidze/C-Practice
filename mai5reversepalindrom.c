#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"

int laenge(const char *t){
    int len = 0;
    while (t[len] != '\0'){
        len++;
    }
    return len;
}
char to_lower(char c){
    if(c >= 'A' && c <= 'Z'){
        return c+ 32;
    }
    return c;
}
void reverse(char *t){
    char temp;
    int len = laenge(t);
    int start = 0;
    int end = len -1;
    for (int i = 0; i < len/2; i++){
        temp = t[start];
        t[start] = t[end];
        t[end] = temp;
        start++;
        end--;
    }
}


int main(void){
    char antwort;
    do
    {
        char wort[11];
        printf("Bitte geben sie ein wort ein (max.10)?      \n");
        scanf("%10s", wort);INCLR;//Input abfragen max 10zeichen
        int i, len;
        len = laenge(wort);
        //dynamische speicher kopie
        char *kopie = (char*)malloc((len + 1)*sizeof(char));
        //pruefe ob speicher leer ist
        if (kopie == NULL){
            printf("Speichcerfehler.\n");
            return 1;
        }
        //original in klein buchstaben umwandeln;
        for (i = 0; i <  len; i++){
            wort[i] = to_lower(wort[i]);
        }
        //Null terminator anhaengen
        wort[len] = '\0';
        //kopie erstellen und ins klein umwandeln
        for (i = 0; i < len; i++){
            kopie[i] = wort[i];
        }

        //Null terminator anhaengen
        kopie[len] = '\0';

         //reverse kopie
        reverse(kopie);
        printf("\n------Reversed string-------\n");
        printf("\n%s das ist reversed  kopie.\n",kopie);

        //palindrom check
        int ist_paindrom = 1; //annahme;
        for (i = 0; i < len/2; i++){
            if (wort[i] != kopie[i]){
                ist_paindrom = 0;
            }

        }
        if (ist_paindrom){
            printf("\n %s das ist Palindrom.\n", wort);
        }
        else {
            printf("\n %s das ist nicht palindrom\n",wort);
        }
        //Speicher freigeben;
        free(kopie);

        printf("Wollen sie das Programm wiederholen?\n"); //Anfragen zur Wiederholung
        scanf("%c", &antwort);INCLR;

    }while(antwort == 'j' || antwort == 'J');

    PAUSE;
    return 0;
}
