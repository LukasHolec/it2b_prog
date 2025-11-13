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
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
    int main() {

        


        return 0;
}