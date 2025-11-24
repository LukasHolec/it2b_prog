/*
    Uvodni opakovani - 1
--------------------------------------

#include <stdio.h>
int main() {
    int opakovani = 0;

        printf("Ahoj, zadej pocet opakovani:");
        scanf("%d", &opakovani);

            if (opakovani <= 0) {
                printf("\nSpatny vstup");
                return 1;
            }

            else {
                
                for (int i = 0; i < opakovani; i++) {
                    printf("Hello World!\n");
                }
            }

    return 0;
}

    Uvodni opakovani - 2
--------------------------------------


#include<stdio.h>
    int main() {

        int znak;   
        int vyska;

            printf("Zadejte znak:");
            scanf(" %c", &znak);

            printf("Zadejte vysku:");
            scanf("%d", &vyska);

                for (int i = 0; i < vyska; i++) {

                    for (int j = 0; j <= i; j++) {
                        printf(" %c ", znak);
                    }
                    printf("\n");
                }


        return 0;
    }

    Uvodni opakovani - 3
--------------------------------------

#include<stdio.h>
    int main() {

        int cislo = 0;

            printf("Zadejte cislo:");
            scanf("%d", &cislo);

                for (int i = 1; i <= cislo; i++) {
                    if(cislo % i == 0) {
                        printf("Delitel je: %d", i);
                        printf("\n");
                    }
                }

        return 0;
    }

        Uvodni opakovani - 4
--------------------------------------


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int hod, min, vzdalenost, rychlost;
	
	printf("Zadej cas odletu (hod): ");
	scanf("%d", &hod);
	printf("Zadej cas odletu (min): ");
	scanf("%d", &min);
	printf("Zadej vzdalenost (km): ");
	scanf("%d", &vzdalenost);
	printf("Zadej rychlsot letadla (km/hod): ");
	scanf("%d", &rychlost);
	
	int cas_letu = (float) vzdalenost / rychlost * 60;
	hod += cas_letu / 60;
	
	min += cas_letu % 60;
	
	if (min > 60) {
		hod += 1;
		min -= 60;
	}
	
	if (hod > 24) {
		int dny = 0;
		while (hod > 24) {
			hod -= 24;
			dny += 1;
		}
		printf("dorazis o %d dny pozdeji\n", dny);
	}
	
	printf("Cas priletu: %d:%d", hod, min);
	
	return 0;
}

#include<stdio.h>
    int main() {
    // Cas odletu
        float hodiny = 0;
        int minuty = 0;
    // Rychlost a cas     
        float vzdalenost = 0;
        float rychlost = 0;
        
            printf("Jaky je cas odletu v hodinach? [H]");
            scanf("%f", &hodiny);

                if (hodiny > 25 || hodiny < 1) {
                    printf("Spatny vstup)ů
                    return 1;
                }
              

            printf("A v minutach? [M]");
            scanf("%d", &minuty);

                if (minuty > 60 || minuty < 1) {
                    printf("Spatny vstup");
                    return 1;
                }
             

            printf("Jaka je letova vzdalenost? [KM]");
            scanf("%f", &vzdalenost);
                
                if (vzdalenost < 1) {
                    printf("Spatny vstup");
                    return 1;
                }
              

            printf("Jaka je rychlost letadla? [KM/H]");
            scanf("%f", &rychlost);
               
                if (rychlost < 1) {
                    printf("Spatny vstup");
                    return 1;
                }

        float t = vzdalenost / rychlost;

        printf("Cas priletu je: %f, %.1f", hodiny + t);

             

        return 0;
    }



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


    */
