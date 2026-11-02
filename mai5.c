#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"
 //bestimme laenge des Wortes
int laenge(char const *t){
    int len = 0;
    while(t[len] != '\0'){
        len++;
    }
    return len;
}
//Groesse BUchstabe in KLeine umwandeln
char to_lower(char c){
    if (c >= 'A' &&  c <= 'Z'){
        return c + 32;
    }
    return c;
}
//reverse string
void reverse(char *t){
    int len = laenge(t);
    int anfang = 0;
    int ende = len -1;
    char temp;
    for (int i = 0; i < len/2; i++){
        temp = t[anfang];
        t[anfang] = t[ende];
        t[ende] =  temp;
        anfang++;
        ende--;

    }
}


int main(void){
    char antwort;


    do
    {
        int i;
        int len = 0;
        char wort[21];
        printf("Bitte geben sie ein Wort ein:   \n");
        scanf("%20s", wort); INCLR;
        len = laenge(wort);
        printf("%s\n", wort);
        char *klein = (char*)malloc((len + 1)*sizeof(char));
        if (klein == NULL){
            //printf("Speicherfehler:")
            return 1;
        }

        for(i = 0; i < len; i++){
        klein[i] = to_lower(wort[i]);
       // printf("%c", klein[i]);

        }

        klein[len] = '\0';
        printf("Kleine BUchstaben:%s  ", klein);
        printf("\n");

        //printf("\n%d\n", len);
       reverse(klein);
       printf("\nDas ist reversed string %s\n", klein);
       //check if it is palindrom
       int ist_palindrom = 1; //annahme;
       for (i = 0; i < len/2; i++){
           if (klein[i] != klein[len-1-i]){
               ist_palindrom = 0;
               break;
           }

    }
    if (ist_palindrom){
        printf("Das ist_palindrom\n");
    }
    else {
        printf("\nDas ist nicht palindrom\n");
    }

       free(klein);

        printf("Wollen Sie das Programm wiederholen(j/n)?\n");
        scanf("%c", &antwort); INCLR
    }while(antwort == 'j' || antwort == 'J');

    PAUSE;

    return 0;
}
