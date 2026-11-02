#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"
struct Summe{
    int age;
    char name[20];
    int array[];

};

int main(void){
    struct Summe z1,z2;
    int summe = 0;
    double average;
    int zahl;
    printf("Wie viele zahlen wollen sie eingeben:\n");
    scanf("%d", &zahl); INCLR

    for (int i = 0; i < zahl; i++){
        printf("%d.Element: ",i+1);
        scanf("%d",&z1.array[i]);

    }

    printf("Bitte geben Sie Ihr Alter ein:\n");
    scanf("%d",&z1.age);INCLR



    printf("Bitte geben sie ihr name ein:\n");
    zklesen(z1.name, 20);


    printf("\nso i am %s and i am %d years old.\n", z1.name, z1.age);
    printf("\n");

    for (int i = 0; i < zahl; i++){
        printf("%d.element = %d", i+1, z1.array[i]);
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < zahl; i++){
        summe+=z1.array[i];
    }
    average = (double)summe/zahl;
    printf("Summe ist: %d\ndurchschnitt: %.2lf\n", summe, average);

   printf("\n");
PAUSE;
    return 0;
}
