#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"

int main(void) {
    // 1. Deklaration: 3 Zeilen (Schüler), 2 Spalten (Noten)
    // datentyp name[zeilen][spalten]
    int noten[3][2];
    int s, t; // Zähler für Schüler (s) und Tests (t)

    // 2. Eingabe: Verschachtelte Schleifen
    // Die äußere Schleife geht durch die Zeilen, die innere durch die Spalten
    for (s = 0; s < 3; s++) {
        for (t = 0; t < 2; t++) {
            printf("Note fuer Schueler %d, Test %d: ", s + 1, t + 1);
            scanf("%d", &noten[s][t]); INCLR
        }
        printf("\n"); // Leerzeile nach jedem Schüler
    }

    // 3. Ausgabe: Die Tabelle auf dem Bildschirm anzeigen
    printf("--- NOTENSPIEGEL ---\n");
    printf("           Test 1  Test 2\n");

    for (s = 0; s < 3; s++) {
        printf("Schueler %d:  ", s + 1);
        for (t = 0; t < 2; t++) {



            // Zugriff auf das Element in Zeile s und Spalte t
            printf("%d       ", noten[s][t]);
        }
        printf("\n");
    }

    PAUSE;
    return 0;
}
