#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h" // Falls die Datei nicht vorhanden ist, für das Beispiel auskommentiert

// Hilfsmakros, falls Diverses.h fehlt
//#define INCLR while(getchar() != '\n')
//#define PAUSE system("pause")

// Fakultät iterativ
long long fak(int n) {
    long long ergebnis = 1;
    if (n == 0 || n == 1) return 1;
    for (int i = 1; i <= n; i++) {
        ergebnis *= i;
    }
    return ergebnis;
}

// Fakultät nur für die Anzeige (mit printf)
void fak_mit_anzeige(int n) {
    long long ergebnis = 1;
    for (int i = 1; i <= n; i++) {
        ergebnis *= i;
        printf("%d.     %lld\n", i, ergebnis);
    }
}

// Binomialkoeffizient rechnen n über k
long long binomial(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fak(n) / (fak(k) * fak(n - k));
}

// NEU: Funktion zum Ausgeben des Pascalschen Dreiecks
void pascalschesDreieck(int zeilen) {
    printf("\n------ Pascalsches Dreieck ------\n");
    for (int n = 0; n < zeilen; n++) {
        // Einrücken für die Form
        for (int leer = 0; leer < (zeilen - n); leer++) {
            printf("  ");
        }
        for (int k = 0; k <= n; k++) {
            printf("%4lld", binomial(n, k));
        }
        printf("\n");
    }
}

int main(void) {
    char antwort;
    do {
        int zahl, k;

        printf("Bitte geben Sie eine Zahl um fakultaet zu berechen: \n");
        scanf("%d", &zahl); INCLR;

        printf("Bitte geben sie versuchsanzahl (k): \n");
        scanf("%d", &k); INCLR;

        printf("\n------Fakultaet (Schritte)------\n");
        fak_mit_anzeige(zahl);
        printf("End Ergebnis: %lld\n", fak(zahl));

        printf("\n------Binomial koefizient------\n");
        printf("Binomial koeffizient (%d ueber %d): %lld\n", zahl, k, binomial(zahl, k));

        // Das Dreieck basierend auf der eingegebenen Zahl ausgeben
        pascalschesDreieck(zahl + 1);

        printf("\nWollen sie das Program wiederholen? (j/n)\n");
        scanf("%c", &antwort); INCLR;

    } while (antwort == 'j' || antwort == 'J');

    PAUSE;
    return 0;
}
