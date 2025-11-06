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
    */
