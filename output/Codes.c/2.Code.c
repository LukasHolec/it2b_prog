// Ulohy - Generovani nahody

 

  /*  
    #include<stdio.h>
    #include<stdlib.h>
    #include<time.h>

    int main () {
        
        srand(time(NULL));
        int cislo = rand() % 2;

            if (cislo == 0) {
                printf("Pana");
            } else {
                printf("Orel");
            }
         
        return 0;
    } 
*/ 
    #include<stdio.h>
    #include<stdlib.h>
    #include<time.h>
    int main () {

        char Y = {"Y"};
        char n = {"n"};
        char odpoved;
        char K = {"K"};
        char S = {"S"};
        char odpoved2;
        char kostky;
        int pocet;
       
        
        srand(time(NULL));
        int cislo = rand() % 6 + 1;

        printf("Hodil jste cislo: %d. \n Chcete pokracovat? [Y/n]?", cislo);
        scanf("%c", &odpoved);
        if (odpoved == Y) {
            printf("Chcete si zvolit pocet kostek? [K] Nebo pocet stran kostky? [S]?");
            if (odpoved2 = K) {
                printf("S kolika kostky chcete hrat?");
                scnaf("%d", &pocet);
                

            }
             
            else()
        } else {
            printf("OK, tak cc");
        }

        if ()
        return 0;
    }





