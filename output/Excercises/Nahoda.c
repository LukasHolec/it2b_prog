
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main() {

        srand(time(NULL));

        int nahoda = rand () % 2; 

        if (nahoda == 0) {
        printf("Panna");
        }
        else if (nahoda == 1) {
        printf("Orel");
        }
        else {
            perror("Chyba");
        }

        return 0;
    }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
    int main() {

        char moznost1;
        char moznost2;

        printf("Vitam vas v teto hre s kostkami, chete si hodit? [Y/n]");
        scanf(" %c", &moznost1);

        if (moznost1 == 'Y') {

        srand(time(NULL));
        
        int hod = rand() % 6 + 1;

        printf("Hod kostkou je: %d\n", hod);
        printf("Chcete pokracovat v hazeni? [Y/N]");
        scanf(" %c", &moznost2);

        }

        else {
            perror("Nevadi, priste");
        }

        if (moznost2 == 'Y') {

            printf("Skvele!\n Zadejte pocet kostek: ");
            int pocet;
            scanf("%d", &pocet);


            printf("Zadejte pocet sten: ");
            int steny;
            scanf("%d", &steny);

            int all = 0;

        for (int i = 0; i < pocet; i++) {

            srand(time(NULL));

            int hod2 = rand() % steny + 1;

                all = all + hod2;
        }
                
        printf("Hod %d kostkami je %d", pocet, all);
    }
        else {
            return 1;
        }



        return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main() {

        srand(time(NULL));

        int nahoda = rand() % 100 + 1;
        int odhad;

        printf("Zadejte vas odhad:");
        scanf("%d", &odhad);

        do {
            if (odhad < nahoda) {
                printf("Je to vic, \n");
            }
            else if (odhad > nahoda) {
                printf("Je to min, \n");
            }
            else if (odhad == nahoda){
            printf("Spravne :)");
                return 0;
            }
            printf("Zadejte vas odhad:");
            scanf("%d", &odhad);

        } while (nahoda != odhad);

        return 0;
    }

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main() {
        
        char arr [5];

        for (int i = 0; i < 5; i++) {
        printf("Zadejte %d. znak: ", i + 1);
        scanf(" %c", &arr[i]);
        }
        
        srand(time(NULL));

        int nahoda = rand() % 6;

        printf(" %c", arr[nahoda]);

        printf("\n");


        return 0;
    }

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main() {

        int cislo;

        printf("Zadejte prosim libovolne cislo: ");
        scanf("%d", &cislo);

        printf("Delitelem jsou cisla:.");

        for (int i = 1; i <= cislo; i++) {
            if (cislo % i == 0){
                printf("%d, ", i);
            }
        }

        return 0;
    }
 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main() {
        
        int cislo;

        do {
        printf("Zadejte libovolne trojmistne cislo: ");
        scanf("%d", &cislo);
        } while (cislo < 100 || cislo > 999);

        printf("Spravne");

        return 0;
    }
 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main() {

        int mesic;
        int rok;
        char pohlavi;
        int koncovka;
        int den;

        printf("Zadejte rok narozeni: ");
        scanf("%d", &rok);

        printf("Zadejte den narozeni: ");
        scanf("%d", &den);

        printf("Zadejte mesic narozeni: ");
        scanf("%d", &mesic);

        printf("Zadejte sve pohlavi: [M/Z]");
        scanf(" %c", &pohlavi);

        printf("Zadejte koncovku sveho rodneho cisla: ");
        scanf("%d", &koncovka);
   
        int posledni_dve = rok % 100;

         if (pohlavi == 'M') {
            printf("Rodne cislo je: %02d%02d%02d/%d", posledni_dve, mesic, den, koncovka);
            return 0;
        }

        if (pohlavi == 'Z') {
            printf("Rodne cislo je: %02d%02d%02d/%d", posledni_dve, mesic + 50, den, koncovka);
            return 0;
        }
        else{
            printf("Spatny vstup..");
        }

      return 0;
    }
    

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main(){

        int arr[10];

        srand(time(NULL));

        int prumer = 0;

        for (int i = 0; i < 10; i++) {
            int znamka = rand() % 5 + 1;
            arr[i] = znamka;
            prumer += znamka;
        }

        int nejlepsi = 5;
        int nejhorsi = 1;

        for (int j = 0; j < 10; j++) {
            if (arr[j] < nejlepsi) {
                nejlepsi = arr[j];
            }

            if (arr[j] > nejhorsi){
                nejhorsi = arr[j];
            }
        }

        printf("Nejlepsi znamka byla: %d\n", nejlepsi);
        printf("Nejhorsi znamka byla: %d\n", nejhorsi);
        printf("Prumerna znamka byla: %.2f\n", (float) prumer / 10);

        int pole[5];

        for (int y = 1; y <= 5; y++) {

            int max = 0;

            for (int z = 0; z < 10; z++) {

                if (arr[z] == y) {
                    max += 1;
                }
            }
                pole[y - 1] = max;
        }

        int nejvetsi = 0;

        for (int h = 0; h < 5; h++) {

        printf("Znamka %d je %dx\n", h + 1, pole[h]);

            if (pole[h] > nejvetsi) {

                nejvetsi = pole[h];                
            }
        }

        for (int h = 0; h < 5; h++) {

            if (pole[h] == nejvetsi) {
            printf("Nejcastejsi znamka je: %d\n", h + 1);

            }
        }

            printf("Na vysvedceni dostanes %d", prumer);

            return 0;
    }           

 PRIPRAVA NA TEST
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main() {

        srand(time(NULL));

        int hod1;
        int hod2;

       do {

        hod1 = rand() % 6 + 1;
        hod2 = rand() % 6 + 1;

        printf("%d, ", hod1);
        printf("%d\n", hod2);

       } while (hod1 != hod2);

        return 0;
    }

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main() {
        int arr[10];

        int mraz = 0;
        int prumer = 0;

        srand(time(NULL));

        printf("Teploty mereni jsou: ");

        for (int i = 0; i < 10; i++) {

            int teploty = (rand() % 21) - 10;
            arr[i] = teploty;
            prumer += teploty;
            printf("%d ", teploty);

            if (teploty < 0) {
                mraz += 1;
            }
        }

        printf("\nPrumer teplot je: %.1f", (float) prumer / 10);
        printf("\nPocet mereni pod bodem mrazu je: %d", mraz);

        return 0;
    }

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main() {

        srand(time(NULL));

        for (int i = 0; i < 3; i++) {
            
        int nahoda = rand() % 10 + 1;
        int mocnina = nahoda * nahoda;
        int typ;

        printf("sqrt(%d)? ", mocnina);
        scanf("%d", &typ);

        if (typ == nahoda) {
            printf("Skvela prace!\n\n");
        }
        else {
            printf("To neni spravne :(\n\n");
        }
        mocnina = 0;
        typ = 0;
    }
        return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
    int main() {

        char string[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '.', ',', '-', '#', '\0'};

        srand(time(NULL));

        int nahoda = (rand () % 6) + 6;

        for (int j = 0; j < nahoda; j++) {
            
            int znaky = (rand () % 13) + 1;

                printf(" %c", string[znaky]);
            }
        
        return 0;
}



#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main() {

        srand(time(NULL));

        int nahoda1;
        int nahoda2;

        do {

        nahoda1 = rand () % 6 + 1;
        nahoda2 = rand () % 6 + 1;

        printf("%d, ", nahoda1);
        printf("%d\n", nahoda2);

        } while( nahoda1 != nahoda2);

        return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
    int main() {

        char *strany[] = {"ANO", "SPOLU", "SPD", "STAN", "Piráti", "Motoristé", "Stačilo", "Jiné"};
        float procenta[] = { 29.3, 20.5, 13.4, 11.1, 10, 6, 5.5,  4.2};

        srand(time(NULL));

        int prasata = (rand () % 30) + 51;

        printf("Velobni ucast byla: %d%%", prasata);

        
        return 0;
}

    

