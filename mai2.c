#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"
struct Komplex{
    int real;
    int imag;
};
void zahlen_einlesen(struct Komplex *k){
    printf("Bitte geben sie ein real teil eines Zahles ein:\n");
    scanf("%d",&k->real);INCLR
    printf("\n");
    printf("Bitte geben sie immaginär tile\n");
    scanf("%d", &k->imag);
    printf("\n");
}
struct Komplex summeS(struct Komplex *a, struct Komplex *b){
    struct Komplex erg;
    erg.real = a->real + b->real;
    erg.imag = a->imag + b->imag;
    return erg;

}

int main(void){
    ;
    struct Komplex k1, k2,ergebnis;
    zahlen_einlesen(&k1);
    printf("real = %d, imagi = %di",k1.real, k1.imag);
    printf("\n");
    zahlen_einlesen(&k2);
    printf("real = %d, imag = %di",k2.real, k2.imag);
    printf("\n");
    ergebnis = summeS(&k1, &k2);
    printf("Ergebnis real: %d + %di\n", ergebnis.real, ergebnis.imag);
PAUSE
    return 0;

}
