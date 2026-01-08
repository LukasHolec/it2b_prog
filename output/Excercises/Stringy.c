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


    #include<stdio.h>
    int main() {


    #include<stdio.h>
    #include<stdlib.h>
    #include<time.h>
    int main() {

        char Y[] = "Y";
        char n[] = 'n';
        char odpoved;
        char K[] = "K";
        char S[] = "S";
        char odpoved2;
        char kostky;
        int pocet;
        int soucet;
        int strany;
       
        // generovani 1. hodu kostky
        srand(time(NULL));
        int cislo = rand() % 6 + 1;

        // pokracovani
        printf("Hodil jste cislo: %d. \n Chcete pokracovat? [Y/n]?", cislo);
        scanf("%c", &odpoved);
        if (odpoved == Y) {
            printf("Chcete si zvolit pocet kostek? [K] Nebo pocet stran kostky? [S]?");

            if (odpoved2 = K) {
                printf("S kolika kostky chcete hrat?");
                scnaf("%d", &pocet);
                for (int i = 0; i < pocet; i++) {
                    srand(time(NULL));
                int vicekostek = rand() % 6 + 1;
                soucet = soucet + vicekostek;
                }
                printf("Soucet hodu %d kostek je: %d", pocet, soucet);
            }
            else if(odpoved2 = S) {
                printf("Kolika strannou kostku chcete mit?");
                scanf("%d", &strany);
                srand(time(NULL));
                int pocetstran = rand() % strany + 1;
                printf("Hodil jste cislo: %d", pocetstran);

            }
            else {
                printf("Smrdis");
            }

        }
        else {
            printf("smrdis");
        }
        return 0;
    }

        char str[20];

        printf("Zadejte slovo:");
        scanf("%s", str);

        

        return 0;
    }

-------------------------------------------

// char jako ASCII hodnota

#include<stdio.h>
#include<string.h>
    int main() {

        char str[20];

        printf("Zadejte slovo: ");
        scanf("%49s", str);

        for (int i = 0; i < strlen(str); i++) {
            printf(" %c : %d\n", str[i], str[i]);
        }

        return 0;
    }
    
---------------------------------------------


// Dobre heslo

#include<stdio.h>
#include<string.h>
    int main(){ 

        str[20];

        printf("Zadejte silne heslo: ");
        scanf("%s", str);
        printf(" ");

    

        return 0;
    }


#include<stdio.h>
#include<string.h>

int main () {

    char str[20];
    char samohlasky [] = {"aeiou"};

    printf("Zadejte libovolne slovo: \n");
    scanf("%19s", str);

    int delka_str = strlen(str); 
    int pocet = 0;
    int mnozstvi = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < delka_str; j++) {
            if (samohlasky[i] == str[j]) {
                pocet++;
                mnozstvi++;
            }    
        }   
        printf("Pocet znaku %c byl %d\n", samohlasky[i], pocet);
        pocet = 0;
    }
        printf("Pocet souhlasek je %d\n", delka_str - mnozstvi);
        printf("Celkem bylo: %d znaku", delka_str);

return 0;
}
*/

#include<stdio.h>
#include<string.h>

int main () {

    char string[20];

    printf("zadejte slovo:");
    scanf("%19s", string);
    int delka = strlen(string);

    for (int i = 0; i < delka; i++) {
        string[i] = string[i] + 1;
        if (string[i] == z);
    }


    return 0;
}