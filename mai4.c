#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"
int str(char *t){
int len = 0;
while (t[len] != '\0'){
    len++;
}
    return len;

}
char to_lower(char t){
        if (t >= 'A' && t <= 'Z'){
            return  t + 32;
        }
    return t;
}

int main(void)
{
    char antwort;
    do
    {
    char wort1[31], wort2[31];

    int len1, len2;
    int i;

    printf("Bitte geben sie erstes wort ein (<=30):\n");
    zklesen(wort1,31);
    len1 = str(wort1);


    printf("\nBitte geben sie zweites wort ein (<=30)\n");
    zklesen(wort2, 31);
    len2 = str(wort2);

    printf("Length erstes worrtes ist:  %d\n", len1);
    printf("Length zweites Wortes ist:  %d\n", len2);
    for (i = 0; i < len1; i++){
        wort1[i] = to_lower(wort1[i]);
    }
    for (i = 0; i < len2; i++){
        wort2[i] = to_lower(wort2[i]);
    }


    //mach klein
    printf("woerter sind: 1. =  %s, 2. = %s.\n", wort1,wort2);

// chek if it is anagram
    int is_anagram = 1;
    if (len1 != len2){
       is_anagram = 0;
    }
    else{
    int zaheler[26] = {0};
    for (i = 0; i < len1; i++){
        if (wort1[i] >= 'a' && wort1[i] <= 'z'){
            zaheler[wort1[i] - 'a']++;
        }
        if (wort2[i] >= 'a' && wort2[i] <= 'z'){
            zaheler[wort2[i] - 'a']--;
        }
    }
    for (i = 0; i  < 26; i++){
        if (zaheler[i] != 0){
            is_anagram = 0;
            printf("kein anagram.\n");
            break;
        }
    }
    }
    if (is_anagram == 1){
        printf("%s und %s sind anagram\n", wort1,wort2);
    }
    else {
        printf("es ist kein Anagram.\n");
    }
    printf("\nMoechten sie Programm wiederholen (j(J)/n)?\n");
    scanf("%c", &antwort);INCLR;

    }while(antwort == 'j' || antwort == 'J');

    PAUSE;

    return 0;
}
