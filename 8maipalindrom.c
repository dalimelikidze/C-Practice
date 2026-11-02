#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"

//bestimme die Laenge
int strl( char *t){
    int len = 0;
    while(t[len] != '\0'){
        len++;
    }
    return len;
}
// grosse Buchstaben in kleine Buchstaben umwandeln
char mach_klein(char t){
    if ( t >= 'A'  && t <= 'Z'){t+=32;

    }
    return t;
}
//check if it is palindrom
int ist_palindrom(char *t){
    int len = strl(t);
    //char  temp;
    int start = 0; int ende = len -1;
    while(start < ende){
        if(mach_klein(t[start]) != mach_klein(t[ende])){
            printf("Das ist kein Palindrom!\n");
            return 0;
             }
             start++;
            ende--;
    }
    return 1;
}
void *reverse_in_suite (char *t){
    char temp;
    int start = 0;
    int len = strl(t);
    int ende = len -1;

    while(start < ende) {
        temp = t[start];
        t[start] = t[ende];
        t[ende] = temp;
        start++;
        ende--;
    }
    return t;
}

int main(void){
    int len_wort = 0;
    printf("Bitte geben sie Length des Wortes ein?\n");
    //Input Valiedirung
    if(scanf("%d", &len_wort) != 1 || len_wort < 0){
        printf("\nDas ist nicht valide Eingabe!\n");
        return 1;
    }INCLR;
    char *wort = (char*) malloc((len_wort+1) * sizeof(char));
    if (wort == NULL){
        printf("Speicherfehler!\n");
        return 1;
    }

    printf("Bitte geben sie ein wort ein?\n");
    scanf("%s",wort);INCLR;
    printf("\n eingegebenes wort %s\n", wort);

//reverse funktion
    char *kopie_reveresd = (char*) malloc((len_wort+1) * sizeof(char));
    if (kopie_reveresd == NULL){
        printf("\nSpeicherfehler!\n");
       // free(wort);
        return 1;
    }
    int i;
    for (i = 0; wort[i] != '\0'; i++){
        kopie_reveresd[i] = wort[i];
    }
    kopie_reveresd[i] = '\0';
    reverse_in_suite(kopie_reveresd);

    printf("\n____Reveresd_______\n");

    printf("\n%s\n", kopie_reveresd);

    //Bitte pruefen ob  das Palindrom ist_palindrom
    if (ist_palindrom(wort)){
        printf("%s ist ein Palindrom!\n", wort);
    }
    else  {
        printf("\n %s ist kein Palindrom!\n",wort);
    }

    //free(kopie_reveresd);
    free(wort);
    PAUSE;
    return 0;
}
