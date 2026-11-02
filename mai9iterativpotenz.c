#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"

//Interatvi funktion
//function deklaration
double potenz_iterativ(double, int);
double potenz_rekursiv(double, int);

int main(void){
    double basis,ergebnis;
    double ergebnis_rekursiv;
    int exp, r;
    do
    {
        printf("Bitte geben sie basis ein?\n");
        r = scanf("%lf", &basis); INCLR

    }while(r < 1);

do
    {
        printf("Bitte geben sie exponant ein?\n");
        r = scanf("%d", &exp); INCLR

    }while(r < 1 || exp < 0);


    ergebnis = potenz_iterativ(basis,exp);
    printf("\n%.2lf hoch %d ist: %.2lf\n\n", basis, exp,ergebnis);
    ergebnis_rekursiv = potenz_rekursiv(basis, exp);
    printf("Potenz %.2lf hoch %d ist: %.2lf. Das ist rekursiv\n", basis, exp, ergebnis_rekursiv);

    PAUSE;
    return 0;
}
double potenz_iterativ(double basis, int exp){
    double ergebnis = 1.0;

    for (int i = 0; i < exp; i++){
        ergebnis*=basis;
    }
    return ergebnis;
}
double potenz_rekursiv(double basis, int exp){

    if(exp == 0){return 1;}

    else {return basis * potenz_rekursiv(basis,exp-1);}
}
