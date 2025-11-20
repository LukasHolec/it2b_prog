/* 

STRINGY
-------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main () {

        char kopr[] = "kopr";

        int i = 0;
        while (kopr[i] != '\0') {
            printf("%c\n", kopr[i]);
            i++;
        }

        
        return 0;
    }


#include <stdio.h>
#include <ctype.h>
    int main () {

        char ahoj[] = "AHOJ";
        char znak;

        printf("Zadejte libovolny znak:");
        scanf("%c", &znak);
        for (int i = 0; i < 4; i++) {

            znak = toupper (ahoj[i]);

            if (znak != ahoj[i]) {
                continue;
            }

            else if (znak == ahoj[i]) {
            printf("Znak %c je ve stringu %s", znak, ahoj);
            return 0;
            }
    }
        printf("Znak %c neni ve stringu %s", znak, ahoj);

        return 0;
}


#include<stdio.h>
#include<string.h>
    int main() {
        char slovo[40];

        printf("Zadej slovo: ");
        scanf("%s", slovo);

        int delka = strlen(slovo);

        printf("Zadal jsi: %d pismen", delka);

        return 0;
    }

#include<stdio.h>
#include<string.h>
    int main() {
        char slovo[40];

        printf("Zadej slovo: ");
        scanf("%s", slovo);

        int delka = strlen(slovo);

        for (int i = 0; i < delka; i++) {
            if (i % 2 == 1) {
            printf("#");
            }

            else if (i % 2 == 0) {
            printf("%c", slovo[i]);
            }
        }

        return 0;
    }
   
#include<stdio.h>
#include<string.h>
    int main() {
        char slovo[40];
        int samohlasky[] = "aeiou";
        int pocet = 0;

        printf("Zadej slovo: ");
        scanf("%s", slovo);

        int delka = strlen(slovo);

        for (int i = 0; i < delka; i++) {
            for (int j = 0; j < 5; j++) {
                if (slovo[i] == samohlasky[j]){
                    pocet++;
                    break;
                }
                else{
                    continue;
                }
            }
        }

        printf("Pocet samohlasek je: %d", pocet);

        return 0;
    }
         */

#include<stdio.h>
#include<string.h>
#include<ctype.h>

    int main() {

        char string[10];
        char string2[10];

        printf("Zadejte slovo: ");
        scanf(" %9s", string);
        int delka = strlen(string);
        delka = toupper(delka);


        printf("Zadejte 2. slovo: ");
        scanf(" %9s", string2);
        int delka2 = strlen(string2);
        delka2 = toupper(delka2);

        if (delka != delka2){
            printf("Spatne");
            return 1;       
        }
        

        for (int i = 0; i < delka; i++){

            if (string[i] != string2[i]){
                    break;
                    printf("Spatne");
                    return 1;
                }
        }
            printf("Super, spravne");

        return 0;
        
    }