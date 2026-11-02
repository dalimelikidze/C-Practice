#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Diverses.h"

struct Cyilinder{

double radius, hoehe;
};
int cylinder_einlesen(struct Cyilinder *arg){
    printf("Bitte geben sie radius ein: \n");
    scanf("%lf", &arg->radius);INCLR
    if(arg->radius<0){
        printf("Radius darf nicht negativ sein:\n");
        return -1;}
    printf("Bitte geben sie hoehe ein: \n");
    scanf("%lf", &arg->hoehe);INCLR
     if (arg->hoehe < 0){
        printf("Hoehe darf nicht negativ sein.\n");
        return -1;
    }
    return 0;
}
double  volume_berechnen(struct Cyilinder *arg){
    return M_PI * arg->radius * arg-> radius * arg->hoehe;
}


int main(void){
    struct Cyilinder cyl1, cyl2;
    double volume1, volume2;
    int status1,status2;
    //cylinder_einlesen(&cyl);
    printf("bitte geben sie radius und hohe eines Cyilinders:\n");
    status1 = cylinder_einlesen(&cyl1);
    printf("Bitte geben sie radisu und volium  zweites cyilinders.\n");
    status2 =  cylinder_einlesen(&cyl2);


    if (status1 == -1){
        printf("Keine gueltige Eingaben.\n");
    }
    else{
    printf("Radius ist von ersten cyilinder: %.3lf und Hoehe: %.3lf\n\n", cyl1.radius, cyl1.hoehe);
    volume1 = volume_berechnen(&cyl1);
    printf("Volium von Cyilinder ist: %.2lf.\n", volume1);
    }

    if (status2 == -1){
        printf("Keine gueltige Eigaben.\n");
    }
    else{
        printf("Radius von zweite cyilinder ist: %.2lf und hoehe: %.2lf\n\n", cyl2.radius, cyl2.hoehe);
        volume2 = volume_berechnen(&cyl2);
        printf("\nVolume von zweite cylinder ist:%.2lf\n\n", volume2);

    }
    if (volume1 > volume2){
        printf("Volium erstes Zilinders ist groesser.\n\n");

    }
    else if (volume2 > volume1){
        printf("Volume von zweites Cilinders ist groesser.\n\n");
    }
    else {
        printf("Cilinders  sind gleich.\n\n");

    }


printf("\n");
    PAUSE;
    return 0;
}
