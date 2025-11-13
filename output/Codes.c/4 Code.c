/*
#include <stdio.h>
    
    int main() {

        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        
            for (int i = 0; i < 10; i++) {
                printf("%d\n", arr[i] * 2);
            }



    return 0;
}
    
#include<stdio.h>
    int main() {
        
        int vysledek = 1;
        int arr[] = {-1, 2, -3, -4, 5};

            for (int i = 0; i < 5; i++) {

                if (arr[i] < 0) {
                    arr[i] = arr[i] * (-1);
                }
                vysledek *= arr[i];
            }
                printf("%d", vysledek);


        return 0;
    }
  
    #include<stdio.h>
        int main() {
            
            int arr[10];

                printf("Vitejte v tomto zadavaci poli. Prosim zadejte cisla vzestupne.\n");
                printf("--------------------------------------------------------------------\n");

                for (int i = 0; i < 10; i++) {
                    printf("Zadejte prosim %d honotu:\t", i + 1);
                    scanf("%d", &arr[i]);
                }

                    for (int j = 0; j < 10; j++) {
                        if (arr[j] > arr[j + 1]) {
                            printf("Cislice nejsou poporade :(");
                            return 1;
                        }
                        else {
                            printf("Vyborne! Zadal jste cislice zpravne.");
                            return 0;
                        }
                    }

        return 0;
    }


  #include<stdio.h>
    int main() {

        int arr[10];

            for (int i = 0; i < 10; i++) {

                printf("%d\n", arr[i] = (i + 1) * 2);
            }

        return 0;
    }
 

#include <stdio.h>

int main() {
    int fib[20];
    
    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < 20; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < 20; i++) {
        printf("%d ", fib[i]);
    }

    return 0;
}
    

#include<stdio.h>
    int main() {

     
        int arr[10];
            for (int i = 0; i < 10; i++) {
                printf("Zadejte hodnotu pole %d: ", i + 1);
                scanf("%d", &arr[i]);
                
            }
            
        int nejvetsi = arr[0] + arr [1]; 
        int soucet = 0;
            for (int j = 1; j < 9; j++) {
                soucet = arr[j] + arr[j + 1];
                 if (nejvetsi > soucet) {
                    continue;
                 }
                 else if (soucet > nejvetsi) {
                    nejvetsi = soucet;
                 }
            }

                printf("Nejvetsi soucet dvou po sobe jdoucich cisel je %d", nejvetsi);

        return 0;
    }

 #include<stdio.h>
    int main () {

            int arr[5];
            int N = 0;
            int pocet = 0;

                for (int i = 0; i < 5; i++) {
                    printf("Zadejte %d. honotu:", i + 1);
                    scanf("%d", &arr[i]);
                }
                    printf("Zadejte delitele:");
                    scanf("%d", &N);

                for (int j = 0; j < 5; j++) {
                    if (arr[j] % N == 0) {
                        pocet += 1;
                    }
                }
                    printf("Pocet cisel v poli delitelnych cislem %d je: %d\n", N, pocet);

        return 0;
    }
 

 #include<stdio.h>
    int main() {
        int arr[9];
        int found;

            printf("Vitam vas v tomto sudoku, prosim zadejte cisla pouze od 1 - 9\n");    

            for (int i = 0; i < 9; i++) {
                printf("Zadejte %d. cislo:  ", i + 1);
                scanf("%d", &arr[i]);
            }
            
            for (int j = 1; j <= 9; j++) {
                found = 0;
                for (int z = 0; z < 9; z++) {
                    if (arr[z] == j) {
                       found = 1;
                       break;
                    }
                }
            if (!found) {
                printf("V poli se nenachazi vsechna cisla od 1 do 9.. Chybi: %d", j);
                return 1;
                    }
            }   
            
            printf("V poli jsou vsechna cisla!");
        
            return 0;
        }


#include<stdio.h>
    int main() {

        int arr[10];
        int L;
        int low = 0;
        int hig = 0;
        int same = 0;

        for (int i = 0; i < 10; i++) {
            printf("Zadejte %d. cislo: ", i + 1);
            scanf("%d", &arr[i]);
        }

        printf("Zadejte limit:");
        scanf("%d", &L);

        for (int j = 0; j < 10; j++) {
            if (arr[j] < L) {
                low += 1;
            }
            else if (arr[j] > L){
                hig += 1;
            }
            else {
                same += 1;
            }
        }

        printf("Nad limitem bylo: %d cisel\n Pod limitem bylo: %d cisel\n Stejnych jako limit bylo: %d", hig, low, same);


    return 0;
    }


#include <stdio.h>
    int main {
        int arr[10];

         for (int i = 0; i < 10; i++) {
                printf("Zadejte %d. cislo:  ", i + 1);
                scanf("%d", &arr[i]);
            }

        for (int j = 0; j < 10; j++) {

        }


        return 0;
    }
    
#include <stdio.h>
#include <stdlib.h>
    int main() {

        int arr[9];

        for (int i = 0; i < 9; i++) {
        printf("Zadejte %d cislo: ", i + 1);
        scanf("%d", arr[i]);
        }



        return 0;
    }


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

        int prasata = (rand () % 30) + 60;

        printf("Pocet volicu byl %d%%", prasata);
        return 0;
}

    

