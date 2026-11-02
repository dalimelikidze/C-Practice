#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"
/*Pointer-Arithmetik
Schreibe eine Funktion int* max_element(int* arr, int size); die einen Zeiger auf das größte Element im Array zurückgibt. Verwende nur Pointer-Arithmetik (* und +), keine arr[i]. */

    int *max_element(int *arr, int size){
        int i = 0;
        int max = 0;
        for (i = 0; i < size; i++){
            if (arr[i] > arr[max]){
                max = i;
            }
        }
        return &arr[max];
    }
    int main(void){
        int size,i;
        //int *max_el;

        printf("Was soll die size of array sein?\n");
        scanf("%d", &size); INCLR

        int array[size];
        printf("Bitte füellen die Array an:\n");
        for (i = 0; i < size; i++){
            printf("%d.element ", i+1);
            scanf("%d", &array[i]);INCLR

        }

     //array ausgeben
     printf("\n____ARRAY_____\n");
     for (i = 0; i < size; i++){
         printf("%d ",array[i]);
    }
    printf("\n");
    //funktion aufrufen
    int *max_el = max_element(array,size);
     printf("Maximale element ist: %d\n", *max_el);

        PAUSE;
        return 0;
    }


